//
// Created by KAMRAN16-byte on 02-07-2026.
//
#include "Sort_algorithms.h"
#include <vector>
using namespace std;

int main() {
    vector<int> a{3,1,2,5,1,7};
    cout << Sort_algorithms::partition(a,0,a.size()-1) << endl;
    Sort_algorithms::display_array(a);

    return 0;
}
