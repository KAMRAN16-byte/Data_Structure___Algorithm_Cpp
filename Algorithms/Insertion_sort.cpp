//
// Created by KAMRAN16-byte on 05-07-2026.
//

#include<iostream>
#include<vector>
#include <cstdlib>
#include<ctime>
using namespace std;

void Insertion_Sort(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        int j = i - 1;
        const int curr = v[i];
        while (j >= 0 && v[j] > curr) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = curr;
    }
}

int main() {
    vector<int> v;
    srand(time(nullptr));
    int size = 15;
    for (int i = 0; i < size; i++) {
        v.push_back(rand() % 50 + 1);
    }
    for (const int val : v) {
        cout << val << " ";
    }
    cout << endl;
    Insertion_Sort(v);
    for (const int val : v) {
        cout << val << " ";
    }
}