//
// Created by Codex-Development on 30-06-2026.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int linear_search(const int arr[], const int x, const int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

void assign_values(int arr[],int size) {
    for (int* i = arr; i < &arr[size]; i++) {
        *i = rand() % 100;
    }
}

void print_array(const int arr[], const int size) {
    cout << "Array: ";
    for (const int* i = arr; i < &arr[size]; i++) {
        cout << *i << ", ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    const int size = rand() % 20 + 1;
    int* arr = new int[size];
    assign_values(arr, size);
    print_array(arr, size);
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << endl;
    cout << linear_search(arr, x, size);;
    delete [] arr;
}
