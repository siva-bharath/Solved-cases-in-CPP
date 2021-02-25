// selection_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int minInd(int* arr, int start, int end) {

    if (end <= 0 || start < 0)
        return -1;

    int minVal = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[minVal] > arr[i])
            minVal = i;
    }
    return minVal;
}

void SelectionSort(int* arr, int n) {

    int index;
    for (int i = 0; i < n; i++) {
        index = minInd(arr, i, n-1);
        swap(arr[i], arr[index]);
    }

}


 void printArray(int* arr, int n) 
 {
     for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
         cout << endl;
     }
    }


int main()
{
    int n;

    int arr[] = { 0, 8, 3, 5, 4 , 7 };
    n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);
    printArray(arr, n);
    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
