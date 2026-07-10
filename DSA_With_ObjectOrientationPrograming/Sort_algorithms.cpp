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
    vector <int> arr = {23,43,2,64,1,3,76,54};
    Sort_algorithms::Insertion_Sort(arr);
    Sort_algorithms::display_array(arr);
    return 0;
}
