//
// Created by Taewoo Kim on 3/27/2017.
//

#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

const int SIZE = 8;

int main() {
    unordered_set<int> aRows[SIZE+1], bRows[SIZE+1];//col->rows map
    for (int r = 1; r <= SIZE; r++){
        for (int c = 1; c <= SIZE; c++){
            char cell = getchar();
            if (cell == 'W'){
                aRows[c].insert(r);
            }
            else if (cell == 'B'){
                bRows[c].insert(r);
            }
        }
        getchar();//consume newline
    }

    int min_a = SIZE, min_b = SIZE;
    //get min unobstructed distance for white to row 1, and for black to row 8
    for (int c = 1; c <= SIZE; c++){
        int aTop = aRows[c].empty() ? SIZE+1 : *min_element(aRows[c].begin(), aRows[c].end());
        int bTop = bRows[c].empty() ? SIZE+1 : *min_element(bRows[c].begin(), bRows[c].end());
        int aBot = aRows[c].empty() ? 0 : *max_element(aRows[c].begin(), aRows[c].end());
        int bBot = bRows[c].empty() ? 0 : *max_element(bRows[c].begin(), bRows[c].end());

        if (aTop < bTop){
            min_a = min(min_a, aTop-1);
        }
        if (bBot > aBot){
            min_b = min(min_b, SIZE - bBot);
        }
    }

    cout << (min_a <= min_b ? "A" : "B");
    return 0;
}