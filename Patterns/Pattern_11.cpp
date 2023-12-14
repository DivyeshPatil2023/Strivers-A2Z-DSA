/*
Pattern
1
01
101 
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
        int printOneFlag = 0;
        if(row%2!=0)
        {
            printOneFlag = 1;
        }
        for(int col=1;col<=row;col++)
        {
            //For starting at one.
            if(printOneFlag)
            {
                cout<<"1"<<" ";
                printOneFlag = 0;
            }
            //For starting at zero.
            else  
            {
                cout<<"0"<<" ";
                printOneFlag = 1;
            }   
        }
        cout<<endl;
    }
    return 0;
}