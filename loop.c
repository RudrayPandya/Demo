#include <stdio.h>
void main()
{
    


    // While Loop
    // int i;
    // i = 0;
    // while (i <= 10)
    // {
    //     /* code */
    //     printf("moses %d\n",i);
    //     i++;
    // }

    // int i,num,total;
    // printf("Enter Your Table No::");
    // scanf("%d",&num);
    // i=1;
    // while(i<=10)
    // {
    //     total=num*i;
    //     printf("%d * %d = %d\n",num,i,total);
    //     i++;
    // }
    // do...while loops
// int i;
//     i = 0;
//     do
//     {
//         /* code */
//         printf("moses %d\n",i);
//         i++;
//     }while (i <= 10)



    // int i,num,total;
    // printf("Enter Your Table No::");
    // scanf("%d",&num);
    // i=1;
    // do
    // {
    //     total=num*i;
    //     printf("%d * %d = %d\n",num,i,total);
    //     i++;

    // }  while(i<=10);

    // for(int i=0;i<=10;i++)
    // {
    //     printf("Mitva%d\n",i);
    // }

    //  int i;
    // i = 10;
    // while (i >= 0)
    // {
    //     /* code */
    //     printf("Mitva%d\n",i);
    //     i--;
    // }

    // int i;
    // i = 10;
    // do
    // {
    //     /* code */
    //     printf("Mitva%d\n", i);
    //     i--;
    // } while (i >= 0);

    //  for(int i=10;i>=0;i--)
    // {
    //     printf("Mitva%d\n",i);
    // }

    // nested loops
    // int i;
    // i = 1;
    // while (i <= 5)
    // {
    //     int j;
    //     j = 1;
    //     while (j <= 5)
    //     {

    //         printf("I :: %d J::%d\n", i, j);
    //         j++;
    //     }
    //     i++;
    // }
    // int row;
    // row = 1;
    // while (row <= 5)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= 5)
    //     {

    //         printf("Row:: %d col::%d", row, col);
    //         col++;
    //     }
    //     printf("\n");
        
    //     row++;
    // }


    // int row;
    // row = 1;
    // while (row <= 5)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= row)
    //     {

    //         printf(" * ");
    //         col++;
    //     }
    //     printf("\n");
        
    //     row++;
    // }


    // for(int i=0;i<=5;i++)
    // {
    //     for(int j=0;j<=5;j++)
    //     {
    //          printf("Row:: %d col::%d", i, j);
    //     }
    //     printf("\n");
    // }

//    for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//              printf(" * ");
//         }
//         printf("\n");
//     }


    // int row;
    // row = 5;
    // while (row >= 1)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= row)
    //     {

    //         printf(" * ");
    //         col++;
    //     }
    //     printf("\n");
        
    //     row--;
    // }

     int i, j, space;
    int rows = 5; // Fixed number of rows

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n"); // Next line
    }

}