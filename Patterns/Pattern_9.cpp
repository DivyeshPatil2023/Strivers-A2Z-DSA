/*
Pattern
  *  
 ***
***** 
*****  
 ***
  *   
*/
#include<iostream>
using namespace std;

int main()
{
    int n,uTInnerLoopEnd,lTInnerLoopEnd;
    cout<<"Enter an integer :- ";
    cin>>n;
    //Upper Triangle.
    uTInnerLoopEnd = n;
    for(int row=1;row<=n;row++)
    {
        // Printing spaces.
        for(int col=1;col<=uTInnerLoopEnd-(2*row-1);col++)
        {
            cout<<" ";
        }
        // Printing stars.
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
        uTInnerLoopEnd+=1;
    }
    //Lower Triangle.
    lTInnerLoopEnd = 2*n-1;
    for(int row=n;row>=1;row--)
    {
        //Printing spaces.
        for(int col=1;col<=lTInnerLoopEnd-(2*row-1);col++)
        {
            cout<<" ";
        }
        // Printing stars.
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
        lTInnerLoopEnd-=1;
    }
    return 0;
}