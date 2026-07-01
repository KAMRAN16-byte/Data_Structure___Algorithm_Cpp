//
// Created by Development on 01-07-2026.
//
#include <iostream>
using namespace std;
/*
void divide(int start[], int end[],int size) {
    if (!(size/2)) {
        cout << *start << endl;
        return;
    }
    for (int* i = start; i <= end; i++) {
        cout << *i << " ";
    }
    cout << endl;
    const int new_size = size/2;
    divide(start,&start[new_size-1],new_size);
    divide(&start[new_size],&start[size-1],new_size);
}
*/
void divide(int start[], int end[],int size) { // takes starting and ending address of array and its size
    if (!(size/2)) { // size == 1 then
        cout << "[" << *start << "]" << endl;
        return;
    }
    cout << "[";
    for (int* i = start; i <= end; i++) { // prints all values
        cout << *i << " ";
    }
    cout << "]" << endl;

    const int new_size = size/2+size%2; // calculate size of new array.
    divide(start,&start[new_size-1],new_size); // o to new_size-1
    divide(&start[new_size],&start[size-1],new_size-size%2); // new_size to size-1 and size in odd -1 in even same
}


int main() {
    setbuf(stdout, NULL);
    int arr[] = {2,3,4,7,6,1,8,11};
    divide(arr,&arr[6],7);
}