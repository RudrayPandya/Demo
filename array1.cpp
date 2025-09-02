#include<iostream>
using namespace std;
int main()
{
    // int a[5],i;
 
    // a[0]=10;
    // a[1]=20;
    // a[2]=30;
    // a[3]=40;
    // a[4]=50;
    // cout<<"\n"<<a[0];
    // cout<<"\n"<<a[1];
    // cout<<"\n"<<a[2];
    // cout<<"\n"<<a[3];
    // cout<<"\n"<<a[4];
    
    // for ( i = 0; i <=4; i++)
    // {
    //     cout<<"Enter the value : ";
    //     cin>>a[i];
    // }
    // for (size_t i = 0; i <=4; i++)
    // {
    //     cout<<"\n Value : "<<a[i];
    // }

    int a[2][2];
    int i,j;
    // a[0][0]=10;
    // a[0][1]=20;
    // a[1][0]=30;
    // a[1][1]=40;
    // cout<<"\n"<<a[0][0];
    // cout<<"\n"<<a[0][1];
    // cout<<"\n"<<a[1][0];
    // cout<<"\n"<<a[1][1];
    
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            cout<<"Enter Value : ";
            cin>>a[i][j];
        }
    }

    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            cout<<"\nYour Value : "<<a[i][j];
        }
    }
    
}