//
// Created by Kam_Codex Development on 02-07-2026.
//
#include "Sort_algorithms.h"

int main() {
    Sort_algorithms search;
    vector<int> temp{34, 21, 65, 23, 76, 27, 98};
    search.initialize_array(temp);
    Sort_algorithms::Merge_Sort(temp);
    search.display_array();
    for (const int val : temp) {
        cout << val << " ";
    }

    return 0;
}
