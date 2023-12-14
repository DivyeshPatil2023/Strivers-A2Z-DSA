/*
Pattern
C
B C
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
        char startingChar = 'A'+n-row;
        for(int col=1;col<=row;col++)
        {
            cout<<startingChar<<" ";
            startingChar+=1;
        }
        cout<<endl;
    }
    return 0;
}