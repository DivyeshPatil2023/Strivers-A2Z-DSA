/*
Pattern
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer :- ";
    cin>>n;
    for(int row=n;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}