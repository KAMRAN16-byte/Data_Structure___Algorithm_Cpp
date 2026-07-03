//
// Created by KAMRAN16-byte on 02-07-2026.
//
#include "Sort_algorithms.h"
#include <vector>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main() {

    vector<int> a;
    srand(time(nullptr));
    // int size = rand() % 15 + 1;
    int size = 9999999;
    for (int i = 0; i < size; i++) {
        a.push_back(rand() % 5000 + 1);
    }
    Sort_algorithms::write_file(a,"unsorted.tsv");
    const auto start = high_resolution_clock::now();
    Sort_algorithms::Merge_Sort(a);
    const auto end = high_resolution_clock::now();
    Sort_algorithms::write_file(a,"sorted.tsv");
    const auto duration = duration_cast<seconds>(end - start);
    cout << "Execution Time: " << duration.count() << " s" << endl;

    return 0;
}
