//
// Created by KAMRAN16-byte on 15-07-2026.
//
#include<iostream>
using namespace std;
void unique_numbers(const int* arr, const int size) {
    int i = 0;
    int unique[size];
    for (int j = 0; j < size;j++) {
        int isUnique = 1;
        for (int k = 0; k < i;k++) {
            if (arr[j] == unique[k]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[i++] = arr[j];
        }
    }
    for (int j = 0; j < i;j++) {
        cout << unique[j] << " ";
    }
}

int main() {
    const int arr[] = {6,4,3,7,2,3,45,6,29,65,5,6};
    unique_numbers(arr,size(arr));
}