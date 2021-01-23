#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, d;
        int small=101, secondsmall=101, large=0;
        int input;
        cin>>n>>d;

        for(int i=0; i<n; i++) {
            cin>>input;
            if(input <= small) {
                secondsmall = small;
                small = input;
            }
            else if(input <= secondsmall) {
                secondsmall = input;
            }
            if(input >= large)
                large = input;
        }
        if(large <= d)
            cout<<"YES\n";
        else if(small + secondsmall <= d)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}