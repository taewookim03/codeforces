//
// Created by Taewoo Kim on 3/22/2017.
//

#include <iostream>

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
    if (ch == '-') minus = true;
    else result = ch-'0';
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
    int n = readInt();
    int counts[4] = {0};

    for (int i = 0; i < n; i++){
        int s = readInt();
        counts[s-1]++;
    }

    int t = counts[3];//4-person taxis

    //3+1
    t += counts[2];
    counts[0] -= counts[2];

    //2+2
    t += counts[1] / 2;
    counts[1] -= counts[1] / 2 * 2;

    //2+1+1
    if(counts[1]){
        t += counts[1];
        counts[0] -= 2;
    }

    if (counts[0] > 0){
        t += (counts[0] + 3) / 4;//ceil
    }

    cout << t;
    return 0;
}