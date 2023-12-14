/*
Pattern
*****  
 ***
  * 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,innerLoopEnd;
    cout<<"Enter an integer :- ";
    cin>>n;
    innerLoopEnd = 2*n-1;
    for(int row=n;row>=1;row--)
    {
        //Printing spaces.
        for(int col=1;col<=innerLoopEnd-(2*row-1);col++)
        {
            cout<<" ";
        }
        //Printing stars.
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
        innerLoopEnd-=1;
    }
    return 0;
}