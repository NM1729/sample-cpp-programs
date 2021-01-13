#include<iostream>

using namespace std;

void insertion_sort(int*, int);

int main() {
    int* arr;
    int n;

    cout<<"Enter no of elements:\n";
    cin>>n;

    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    insertion_sort(arr, n);

    cout<<"Sorted array elements are:\n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";

    return 0; 
}

void insertion_sort(int* arr, int n) {
    int i, j, key;
    for(j=1; j<n; j++) {
        key = arr[j];
        i = j-1;

        while(i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}