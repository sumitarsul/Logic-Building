/*
    iRow = 4;
    iCol = 4;

    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i, j = 0;

    for(i=1; i<= iRow; i++)     // outer loop
    {


        for(j = 1; j <= iCol; j++)          // inner loop
        {
            printf("%d\t",j);               // print j
        }
        printf("\n\n");
    }
}

int main ()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Coloums :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}