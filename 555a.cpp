//
// Created by Taewoo Kim on 3/28/2017.
//

#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cut = 0;
    for (int c = 0; c < k; c++){
        int m, prev;
        cin >> m >> prev;
        bool contains1 = false;
        for (int i = 1; i < m; i++){
            int a;
            cin >> a;
            if (prev == 1) contains1 = true;
            if (!contains1 || a - prev > 1){
                ++cut;
            }
            prev = a;
        }
    }
    cout << 2*cut + k-1;//cut, reattach, attach groups
    return 0;
}