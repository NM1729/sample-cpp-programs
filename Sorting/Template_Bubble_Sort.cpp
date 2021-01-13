#include<iostream>

using namespace std;

template <class T>

void swap(T* elem1, T* elem2) {
    T temp = *elem1;
    *elem1 = *elem2;
    *elem2= temp;
}

template<class T>
void print_arr(T* arr, int n) {
    for(size_t i=0; i<n; i++) 
        cout<<arr[i]<<" ";
    cout<<"\n";
}

template <class T>

void bubbleSort(T* arr, int n) {
    for(size_t i = 0; i< n-1; i++) {
        for(size_t j =0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main() {
    int arr[6] = {1, 4, 2, 6, 3, 7};
    string arr1[4] = {"Hello", "What is your name?", "small", "Going home?"};
    float arr2[5] = {1.23, 45.00, -6.77, -9.44, 10.34};
    
    print_arr(arr, 6);
    bubbleSort(arr, 6);
    print_arr(arr, 6);
    cout<<"\n";

    print_arr(arr1, 4);
    bubbleSort(arr1, 4);
    print_arr(arr1, 4);
    cout<<"\n";

    print_arr(arr2, 5);
    bubbleSort(arr2, 5);
    print_arr(arr2, 5);
    cout<<"\n";

    return 0;
}