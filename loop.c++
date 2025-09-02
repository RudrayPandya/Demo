#include<iostream>
using namespace std;    
int main()
{
    // int i;
    // i=0;
    // while (i<=10)
    // {
    //     cout<<"Rudray "<<i<<endl;
    //     i++;
    // }
    
    // int i,num,total;
    // cout<<"Enter Your Table No::";
    // cin>>num;
    // i=1;
    // while(i<=10)
    // {
    //     total=num*i;
    //     cout<<num<<" * "<<i<<" = "<<total<<endl;
    //     i++;
    // }
    // return 0;

    // int i;
    // i=0;   
    // do 
    // {
    //     cout<<"Rudray "<<i<<endl;
    //     i++;
    // } while (i<=10);

    // for(int i=0;i<=10;i++)
    // {
    //     cout<<"Rudray "<<i<<endl;
    // }

    // int i;
    // i = 1;
    // while (i <= 5)
    // {
    //     int j;
    //     j = 1;
    //     while (j <= i)
    //     {

    //         cout << " * ";
    //         j++;
    //     }
    //     cout << "\n";

    //     i++;
    // }

    // for (int i = 0; i <= 5; i++)
    // {
    //     for(int j=0;j<=5;j++)
    //     {
    //         cout<<" Row:: "<<i<<" col::"<<j;
    //     }
    //     cout<<"\n";
    // }

    // int row;
    // row = 5;
    // while (row >= 1)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= row)
    //     {

    //         cout << " * ";
    //         col++;
    //     }
    //     cout << "\n";

    //     row--;
    // }
    
    int i,j,space;
    int rows=5;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=(rows-i);space++)
        {
            cout<<"  ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }




}