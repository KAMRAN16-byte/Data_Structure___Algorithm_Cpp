//
// Created by Development on 02-07-2026.
//
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void merge(vector<int> &arr,int start,int mid,int end) {
    int i = start,j = mid+1;
    vector<int> temp;
    while (i <= mid && j <=end) {
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

    for (int k = 0; k < temp.size(); k++) {
        arr[k+start] = temp[k];
    }
}

void merge_sort(vector<int> &arr,int start,int end) {
    if (start == end) {
        return;
    }
    const int mid = start + (end - start)/2;
    merge_sort(arr,start,mid);
    if (start == 0 && end == arr.size() - 1) {
        cout << "First half sorted:  ";
        for (int item : arr) cout << item << " ";
        cout << endl;
    }
    merge_sort(arr,mid+1,end);
    if (start == 0 && end == arr.size() - 1) {
        cout << "Second half sorted: ";
        for (int item : arr) cout << item << " ";
        cout << endl;
    }
    merge(arr,start,mid,end);
}

int main() {
    srand(time(nullptr));
    vector<int> arr;
    int size = rand() % 20 + 1;
    for (int i = 0; i < size; i++) {
        arr.push_back(rand() % 30 + 1);
    }
    cout << "Unsorted: ";
    for (int item : arr) {
        cout << item << " ";
    }
    cout << endl;
    merge_sort(arr,0,arr.size()-1);
    cout << "Sorted: ";
    for (int item : arr) {
        cout << item << " ";
    }
    return 0;
}