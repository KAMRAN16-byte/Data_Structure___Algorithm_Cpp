//
// Created by Development on 02-07-2026.
//
#include "Sort_algorithms.h"

int main() {
    const Sort_algorithms search;
    vector<int> temp{34, 21, 65, 23, 76, 27, 98};
    // search.initialize_array(temp);
    search.Merge_Sort(temp);
    search.display_array();
    for (int val : temp) {
        cout << val << " ";
    }

    return 0;
}
