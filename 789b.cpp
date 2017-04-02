#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

int main() {
    int b1, q, l, m;
    cin >> b1 >> q >> l >> m;
    unordered_set<int> a{};
    int in_a = 0;
    for (int i = 0; i < m; i++){
        int k;
        cin >> k;
        a.emplace(k);
        int c = 0;
        if (b1 != 0) c = abs(k) / abs(b1);

        if (b1 != 0 && q != 0 && abs(k) <= l && abs(k) % abs(b1) == 0 && log(c)/log(abs(q)) == round(log(c)/log(abs(q)))){
            ++in_a;
        }
    }

    if (b1 == 0){
        cout << (a.find(0) == a.end() ? "inf" : "0");
    }
    else if (q == 0){
        if (abs(b1) > l){
            cout << "0";
        }
        else{
            if (a.find(0) != a.end()){
                if(a.find(b1) != a.end()) cout << "0";
                else cout << "1";
            }
            else{
                cout << "inf";
            }
        }
    }
    else if (q == 1){
        cout << (a.find(b1) != a.end() ? "0" : "inf");
    }
    else{
        cout << static_cast<int>(log((double)l/abs(b1)) / log(abs(q))) + 1 - in_a;
    }
    return 0;
}

/*
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
int readInt () {
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (true) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true) {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

int main() {
    int b1, q, l, m;
    cin >> b1 >> q >> l >> m;
    unordered_set<int> a{};
    getchar();
    for (int i = 0; i < m; i++){
        int k = readInt();
        a.emplace(k);
    }

    if (b1 == 0){
        cout << (a.find(0) == a.end() ? "inf" : "0");
    }
    else if (q == 0){
        if (abs(b1) > l){
            cout << "0";
        }
        else{
            if (a.find(0) != a.end()){
                if(a.find(b1) != a.end()) cout << "0";
                else cout << "1";
            }
            else{
                cout << "inf";
            }
        }
    }
    else if (q == 1){
        cout << (a.find(b1) != a.end() ? "0" : "inf");
    }
    else{
        int b = b1;
        int count = 0;
        while (abs(b) <= l){
            if (a.find(b) == a.end()){
                ++count;
            }
            b *= q;
        }
        cout << count;
    }
    return 0;
}
 */