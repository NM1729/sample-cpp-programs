#include<iostream>

using namespace std;

void merge_sort(int*, int, int);

void merge(int*, int, int, int);

int main() 
{
    int arr[10] = {10, 4, 6, 2, 1, 8, 5, 7, 9, 3};
    merge_sort(arr, 0, 9);

    for(int i=0; i<10; i++)
        cout<<arr[i];
    
    return 0;
}

void merge_sort(int* arr, int l, int r)
{
    if(r > l) {
        int mid = l + (r - l)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
    cout<<l<<" "<<r<<"\n";
    for(int i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

void merge(int* arr, int l, int mid, int r) {
    int n = mid - l + 1;
    int m = r - mid;

    int L[n], R[m];

    for(int i=0; i<n; i++) {
        L[i] = arr[l + i];
    }

    for(int i=0; i<m; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i=0, j=0, k=l;

    while(i < n && j < m) {
        if(L[i] < R[j]) {
            arr[k] = L[i];
            i++; k++;
        }
        else {
            arr[k] = R[j];
            j++; k++;
        }
    }

    for(; i<n; i++) {
        arr[k] = L[i];
        k++;
    }

    for(; j<m; j++) {
        arr[k] = R[j];
        k++;
    }
}