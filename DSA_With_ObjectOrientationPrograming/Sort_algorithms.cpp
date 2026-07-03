//
// Created by KAMRAN16-byte on 02-07-2026.
//
#include "Sort_algorithms.h"
#include <vector>
#include <ctime>
using namespace std;

int main() {
    vector<int> a;
    srand(time(nullptr));
    int size = rand() % 15 + 1;
    for (int i = 0; i < size; i++) {
        a.push_back(rand() % 50 + 1);
    }
    Sort_algorithms::display_array(a);
    Sort_algorithms::Merge_Sort(a);
    Sort_algorithms::display_array(a);

    return 0;
}
