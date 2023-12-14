/*
Pattern
  *  
 *** 
***** 
*/
#include<iostream>
using namespace std;

int main()
{
    int n,innerLoopEnd;
    cout<<"Enter an integer :- ";
    cin>>n;
    innerLoopEnd = n;
    for(int row=1;row<=n;row++)
    {
        //Printing spaces
        for(int col=1;col<=innerLoopEnd-((2*row)-1);col++)
        {
            cout<<" ";
        }
        //printing stars
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"*";
       
        }
        cout<<endl;
        innerLoopEnd += 1;
    }
    return 0;
}