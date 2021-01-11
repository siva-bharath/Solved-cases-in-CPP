#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int Arr[], int size) {
    for (auto i = 0; i < size / 2; i++) {
        int other = size  - i - 1;
        int temp = Arr[i];
        Arr[i] = Arr[other];
        Arr[other] = temp;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // vector <int> vec {};

    /* Declaring the size of array */
    int n;
    cin >> n;
 
    /* Declaring a dynamic array */
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    // Reverse the array & call the function
    reverse(arr, n);

    //cout << " Output of the elements after reverse order : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
