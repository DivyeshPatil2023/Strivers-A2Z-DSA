/*
Pattern
A
B B
C C C
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer :- ";
    cin>>n;
    char stratingChar = 'A';
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<stratingChar<<" ";
        }
        cout<<endl;
        stratingChar+=1;
    }
    return 0;
}