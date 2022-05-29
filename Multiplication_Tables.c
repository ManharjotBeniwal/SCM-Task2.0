#include<stdio.h>
/*
Print a Multiplication Table of a number entered by the user in Pretty form

Example:
Input
Enter the Number you Want Multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
.
.
.
.
6 X 10 = 60
*/
int main()
{
    int a; 
     
     printf("Enter the number for multiplication table: ");
     scanf("%d", &a); 
     printf("%d X 1=%d\n", a, a*1);
     printf("%d X 2=%d\n", a, a*2); 
     printf("%d X 3=%d\n", a, a*3); 
     printf("%d X 4=%d\n", a, a*4); 
     printf("%d X 5=%d\n", a, a*5); 
     printf("%d X 6=%d\n", a, a*6); 
     printf("%d X 7=%d\n", a, a*7); 
     printf("%d X 8=%d\n", a, a*8);
     printf("%d X 9=%d\n", a, a*9); 
     printf("%d X 10=%d\n", a, a*10);

    return 0;
}
