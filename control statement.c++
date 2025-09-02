#include<iostream>
using namespace std;
int main()
{
    // int i;
    // i=1;
    // while(1)
    // {
    //     if(i==10)
    //     {
    //     break;
    //     }
    //     cout<<"Hello "<<i<<"\n";
    //     i++;
    // }

    // int i;
    // i=0;
    // while(i<10)
    // {
        
    //     i++;
    //     if (i==5)
    //     {
    //         continue;
    //     }
    //     cout<<"Hello "<<i<<"\n";

    // }
    
    int i;
    i=1;
    label:
    if(i<=5)
    {
        cout<<"Hello "<<i<<"\n";
        i++;
        goto label;
    }
}