/*
Pattern
A B C
A B
A
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
        char stratingChar = 'A';
        for(int col=1;col<=row;col++)
        {
            cout<<stratingChar<<" ";
            stratingChar+=1;
        }
        cout<<endl;
    }
    return 0;
}