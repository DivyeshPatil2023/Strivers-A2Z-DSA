/*
Pattern
1    1
12  21
123321
*/
#include<iostream>
using namespace std;

void printing(int col,int row)
{
    if(col<=row)
    {
      cout<<col<<" ";
    }
    else
    {
      cout<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter an integer :- ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=2*n;col++)
        {
           if(col<=n)
           {
            printing(col,row);
           }
           else
           {
            col = col-n;
           }
        }
        cout<<endl;
    }
}