/*
Pattern
1
2 2 
3 3 3
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
        for(int col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}