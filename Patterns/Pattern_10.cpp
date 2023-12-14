/*
Pattern
  *  
  **
  ***  
  **
  *  
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer :- ";
    cin>>n;
    for(int row=1;row<=2*n-1;row++)
    {
        int totalStars = row;
        if(row>n)
        {
            totalStars = 2*n-row;
        }
        for(int col=1;col<=totalStars;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}