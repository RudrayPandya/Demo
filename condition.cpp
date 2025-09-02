#include<iostream>
using namespace std;
int main()
{
    int age,salary;
//     cout<<"Enter Your age::";
//     cin>>age;
//     if(age>=18)
//     {
//          cout<<"You are eligible for vote";
//     }
//     else
//     {
//          cout<<"You are not eligible for vote";

//     }

     // Nested if
     
     cout<<"Enter Your age::";
     cin>>age;
     cout<<"Enter Your salary::";
     cin>>salary;
     if (age >= 18)
     {
         if (salary >= 25000)
         {
             cout<<"You are pay income tax";
         }
         else
         {
             cout<<"Your salary is not good ";
         }
     }
     else
     {
         cout<<"Your are not 18+";
     }
     // if...else if...else
     // int a=1;
     // if (a==0)
     // {
     //     cout<<"a==0";
     // }
     // else if(a==1)
     // {
     //     cout<<"a==1";
     // }
     // else if(a==2)
     // {
     //      cout<<"a==2";
     // }
     // else{
     //      cout<<"Error";
     // }
     


}