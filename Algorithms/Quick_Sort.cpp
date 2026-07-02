//
// Created by KAMRAN16-byte on 03-07-2026.
//
#include<iostream>
#include <vector>
using namespace std;


static void swap(int *a, int *b) {
    const int temp = *a;
    *a = *b;
    *b = temp;
}

static int partition_M1(vector<int> &arr, const int start, const int end) {
    const int pivot = arr[start];
    int i = start, j = start + 1;
    while (j < end) {
        if (arr[j] <= pivot) {
            j++;
        } else {
            break;
        }
    }
    for (int k = j; k <= end; k++) {
        if (arr[k] <= pivot) {
            swap(&arr[k], &arr[j]);
            j++;
        }
    }
    swap(&arr[i], &arr[--j]);

    i = j;
    return i;
}

int partition_M2(vector<int> &arr, int start, int end) {
    const int pivot = arr[start];
    int i = start;
    for (int j = i + 1; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i], arr[start]);
    return i;
}
