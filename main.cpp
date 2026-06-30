#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int size;
    cout << "enter size: ";
    cin >> size;
    int * arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand()%500 + 1;
    }
    int smallest = *arr;
    for (const int* i = arr +1; i < &arr[size]; i++) {
        smallest = min(smallest, *i);
    }

    for (const int* i = arr; i < &arr[size]; i++) {
        cout << *i << ", ";
    }
    cout << endl << "Smallest: " << smallest << endl;

    delete [] arr;
}