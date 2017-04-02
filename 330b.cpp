//
// Created by Taewoo Kim on 3/27/2017.
//

#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool bs[n] = {};

    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        bs[u-1] = true;
        bs[v-1] = true;
    }
    int root = 1;
    for (int i = 0; i < n; i++){
        if (!bs[i]){
            root = i+1;
            break;
        }
    }

    cout << n-1 << endl;

    for (int i = 1; i <= n; i++){
        if (i == root) continue;
        cout << root << " " << i << endl;
    }

    return 0;
}