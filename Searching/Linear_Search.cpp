#include<iostream>

using namespace std;

int linear_search(int* arr, int n, int x) {
    for(int i=0; i<n; i++) {
        if(*(arr + i) == x)
            return i;
    }
    return -1;
}

int main() {
    int* array; //Array whose elements are to be searched
    int n;  //No of elements in the array
    int x; //Element to be found

    cin>>n; //Input for number of elements

    for(int i=0; i<n; i++)
        cin>>*(array + i);  //Obtaining array element input
    
    cin>>x; //Input for element to be searched

    int index = linear_search(array, n, x);

    if(index == -1) 
        cout<<"Element not found in array.\n";
    else
        cout<<"Element found at index "<<index<<".\n";
    
    return 0;    
}