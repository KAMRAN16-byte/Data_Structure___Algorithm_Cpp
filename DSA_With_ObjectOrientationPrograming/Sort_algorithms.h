//
// Created by Kam_Codex Development on 02-07-2026.
//

#ifndef DATA_STRUCTURE___ALGORITHM_C___SORT_ALGORITHMS_H
#define DATA_STRUCTURE___ALGORITHM_C___SORT_ALGORITHMS_H
#include <vector>
#include <iostream>
using namespace std;
class Sort_algorithms
{
    // Default Private
    vector<int> array;int size{};
    static void M_Merge(vector<int> &arr,const int start, const int mid, const int end) {
        int i = start, j = mid + 1;
        vector<int> temp;
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }
        while (j <= end) {
            temp.push_back(arr[j]);
            j++;
        }
        for (i = 0; i <= temp.size() - 1; i++) {
            arr[start+i] = temp[i];
        }
    }

    static void M_Main(vector<int> &arr, const int start, const int end) {
        if (start == end) {
            return;
        }
        const int mid = start + (end - start) / 2;
        M_Main(arr, start, mid);
        M_Main(arr, mid+1, end);
        M_Merge(arr,start, mid, end);
    }

public:
    void initialize_array() {
        array.clear();
        cout << "enter the size of the array: ";
        cin >> size;
        for (int i = 0; i < size; i++) {
            int temp;
            cin >> temp;
            array.push_back(temp);
        }
        cout << "|" << "array initialized" << "|" << endl;
    }
    void initialize_array(const vector<int> &arr) {
        array.clear();
        for (int i : arr) {
            this->array.push_back(i);
        }
        cout << "|" << "array initialized" << "|" << endl;
    }

    static void Merge_Sort(vector<int> &arr) {
        M_Main(arr,0, arr.size() - 1);
    }

    void Merge_Sort() {
        M_Main(array, 0, array.size() - 1);
    }

    void display_array() const {
        if (array.empty()) {
            return;
        }
        for (const int val : array) {
            cout << val << " ";
        }
        cout << endl;
    }
};

#endif //DATA_STRUCTURE___ALGORITHM_C___SORT_ALGORITHMS_H
