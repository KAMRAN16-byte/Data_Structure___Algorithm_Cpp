//
// Created by Kam_Codex Development on 02-07-2026.
//

#ifndef DATA_STRUCTURE_ALGORITHM_CPP_SORT_ALGORITHMS_H
#define DATA_STRUCTURE_ALGORITHM_CPP_SORT_ALGORITHMS_H
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Sort_algorithms {
    // Default Private
    vector<int> array;
    int size{};

    static string center(const string& text, int width) {
        if (text.length() >= width)
            return text;

        int left = (width - text.length()) / 2;
        int right = width - text.length() - left;

        return string(left, ' ') + text + string(right, ' ');
    }

    static void Merge_Sort_Helper_Merge(vector<int> &arr, const int start, const int mid, const int end) {
        int i = start, j = mid + 1;
        vector<int> temp;
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
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
            arr[start + i] = temp[i];
        }
    }

    static void Merge_Sort_Helper_Recursive(vector<int> &arr, const int start, const int end) {
        if (start == end) {
            return;
        }
        const int mid = start + (end - start) / 2;
        Merge_Sort_Helper_Recursive(arr, start, mid);
        Merge_Sort_Helper_Recursive(arr, mid + 1, end);
        Merge_Sort_Helper_Merge(arr, start, mid, end);
    }

    static int Quick_Sort_Helper_Partition(vector<int> &arr, const int start, const int end) {
        const int pivot = arr[start];
        int i = start;
        for (int j = i + 1; j <= end; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[j], arr[i]);
            }
        }
        swap(arr[start], arr[i]);
        return i;
    }

    static void Quick_Sort_Helper(vector<int> &arr, const int start, const int end) {
        if (start >= end) {
            return;
        }
        const int pivot_idx = Quick_Sort_Helper_Partition(arr, start, end);
        Quick_Sort_Helper(arr, start, pivot_idx - 1);
        Quick_Sort_Helper(arr, pivot_idx + 1, end);
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
        for (int i: arr) {
            this->array.push_back(i);
        }
        cout << "|" << "array initialized" << "|" << endl;
    }

    static void Quick_Sort(vector<int> &arr) {
        Quick_Sort_Helper(arr, 0, arr.size() - 1);
    }

    static void Merge_Sort(vector<int> &arr) {
        Merge_Sort_Helper_Recursive(arr, 0, arr.size() - 1);
    }

    void Quick_Sort() {
        Quick_Sort_Helper(array, 0, array.size() - 1);
    }

    void Merge_Sort() {
        Merge_Sort_Helper_Recursive(array, 0, array.size() - 1);
    }

    void display_array() const {
        if (array.empty()) {
            return;
        }
        for (const int val: array) {
            cout << val << " ";
        }
        cout << endl;
    }

    static void display_array(const vector<int>& arr) {
        if (arr.empty())
            return;

        constexpr int CELL_WIDTH = 5;

        cout << "+";
        for (int i = 0; i < arr.size(); i++)
            cout << string(CELL_WIDTH, '-') << "+";
        cout << '\n';

        cout << "|";
        for (const int x : arr)
            cout << center(to_string(x), CELL_WIDTH) << "|";
        cout << '\n';

        cout << "+";
        for (int i = 0; i < arr.size(); i++)
            cout << string(CELL_WIDTH, '-') << "+";
        cout << '\n';
    }
};

#endif //DATA_STRUCTURE_ALGORITHM_CPP_SORT_ALGORITHMS_H
