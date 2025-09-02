#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // char tops[] = "Rudray\n";
    // cout<<tops;

    // char tops1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    // cout<<tops1;
    // cout<<"\n"<<tops[0];

    //  // Modify Strings
    // char top3[] = "Hello";
    // top3[0] = 'E';
    // cout<<"\n"<<top3;

    
    // Loop Through a String

    // char Name[] = "Rudray";
    // int i;

    // for (i = 0; i < 6; i++) {
    //   cout<<"\n"<<Name<<i;
    // }

    // String Functions

    // char name[] = "Rudray";
    // cout<<strlen(name);

    // char name[] = "RUDRAY";
    // cout<<strlwr(name);

    // char name[] = "rudray";
    // cout<<strupr(name);

    // char str1[20] = "Hello ";
    // char str2[] = "World!";

    // // // // Concatenate str2 to str1 (result is stored in str1)
    // strcat(str1, str2);

    // // // // Print str1
    // cout<<str1;

    // char str1[20] = "Hello World!";
    // char str2[20];

    // // Copy str1 to str2
    // strcpy(str2, str1);

    // // // Print str2
    // cout<<str2;

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // // Compare str1 and str2, and print the result
    cout<<strcmp(str1,str2);  // Returns 0 (the strings are equal)

    // // Compare str1 and str3, and print the result
    cout<<strcmp(str1,str3);  // Returns -1 (the strings are not equal)

}