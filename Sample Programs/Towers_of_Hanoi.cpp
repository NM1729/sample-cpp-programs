#include<iostream>

using namespace std;

void towersofhanoi(int, int, int, int, int*);

int main()
{
    int t, n;
    int moves;
    cout<<"Enter number of test cases: ";
    cin>>t;

    while(t--) {
        moves = 0;
        cout<<"Enter the number of disks: ";
        cin>>n;

        towersofhanoi(n, 1, 2, 3, &moves);
        cout<<"No of moves = "<<moves<<".\n";
    }

    return 0;
}

void towersofhanoi(int disks, int start, int middle, int end, int* moves) {
    if(disks == 1) {
        cout<<"Moved disk "<<disks<<" from rod "<<start<<" to rod "<<end<<".\n";
        *moves += 1;
    }
    else {
        towersofhanoi(disks-1, start, end, middle, moves);
        cout<<"Moved disk "<<disks<<" from rod "<<start<<" to rod "<<end<<".\n";
        *moves += 1;
        towersofhanoi(disks-1, middle, start, end, moves);
    }
}