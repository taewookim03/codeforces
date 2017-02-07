//
// Created by Taewoo Kim on 2/7/2017.
//

#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    int side1 = n%a == 0 ? n/a : n/a + 1;
    int side2 = m%a == 0 ? m/a : m/a + 1;
    long long result = (long long)side1 * (long long)side2;

    cout << result;
    return 0;
}