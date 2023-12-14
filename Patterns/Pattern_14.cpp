/*
Pattern
A
A B
A B C
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer :- ";
    cin>>n;
    for(int row=1;row<=n;row++)
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