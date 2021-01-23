#include<bits/stdc++.h>

using namespace std;

void display_array(vector<int> arr) {
    vector<int>::iterator i;

    for(i=arr.begin(); i < arr.end(); ++i)
        cout<<*i<<" ";
    cout<<"\n";
}

vector<int> enter_array(int n) {
    int elem;
    vector<int> arr;
    for(int i=0; i < n; ++i) {
        cin>>elem;
        arr.push_back(elem);
    }
    return arr;
}

int main() {
    vector<int> arr;
    int n;
    cin>>n;
    arr = enter_array(n);
    sort(arr.begin(), arr.end());
    display_array(arr);
    return 0;
}