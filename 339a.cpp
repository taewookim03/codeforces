//
// Created by Taewoo Kim on 3/22/2017.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int n;
    char c;
    while((c = getchar()) != '\n'){
        if (c >= '1' && c <= '3')
        v.push_back(c - '0');
    }
    sort(v.begin(), v.end());
    bool first = true;
    for (auto& i : v){
        if (first){
            cout << i;
            first = false;
        }
        else{
            cout << '+' << i;
        }
    }

    return 0;
}