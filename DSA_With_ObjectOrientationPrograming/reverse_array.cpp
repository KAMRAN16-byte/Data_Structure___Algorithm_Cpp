//
// Created by KAMRAN16-byte on 09-07-2026.
//
#include <iostream>
using namespace std;

void reverse_array(int* arr, const int size) {
    int array[size];
    int k = 0;
    for (int i = size - 1; i >= 0; i--) {
        array[k] = arr[i];
        k++;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = array[i];
    }
}

int main() {
    int array[] = {2,5,7,3,7,94,7};
    reverse_array(array,size(array));
    for (const int val : array) {
       cout << val << " ";
    }
}
