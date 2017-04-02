//
// Created by Taewoo Kim on 3/28/2017.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class unionFind{
    int n;
    vector<int> parent, rank;

public:
    unionFind(int n): n(n), parent(n+1), rank(n+1) {
        for (int i = 0; i <= n; i++){
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findSet(int x){
        if (parent[x] != x){
            parent[x] = findSet(parent[x]);//path compression
        }
        return parent[x];
    }

    void unionSet(int x, int y){
        int px = findSet(x);
        int py = findSet(y);
        if (px == py) return;//already same set

        if (rank[px] < rank[py]){
            parent[px] = py;
        }
        else if (rank[px] > rank[py]){
            parent[py] = px;
        }
        else{
            parent[px] = py;
            rank[py]++;
        }
    }

    int numSets(){
        unordered_set<int> set{};
        for (int i = 1; i <= n; i++){
            set.emplace(findSet(i));
        }
        return set.size();
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    getchar();

    unionFind uf(n);
    unordered_set<int> speakers[m+1];// language->people who speak it
    bool noLang = true;
    for (int i = 1; i <= n; i++){
        int k;
        cin >> k;

        for (int j = 0; j < k; j++){
            noLang = false;
            int lang;
            cin >> lang;
            speakers[lang].emplace(i);//add speaker of the language
        }
    }

    //union all the speakers of the same language
    for (int lang = 1; lang <= m; lang++){
        int first = -1;
        for (const auto& sp : speakers[lang]){
            if (first == -1) {
                first = sp;
            }
            else{
                uf.unionSet(first, sp);
            }
        }
    }
    cout << uf.numSets() - 1 + noLang << endl;

    return 0;
}