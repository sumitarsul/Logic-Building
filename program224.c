/*
    iRow = 4;
    iCol = 4;
    #   *   *   *
    $   #   *   *
    $   $   #   *
    $   $   $   #

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i, j = 0;
    

    for(i=1; i<= iRow; i++)     
    {

        for(j = 1; j <= iCol; j++)          
        {
            if(i==j)            // Digonal
            {
                printf("$\t");
            }
            else if(i==j)       // lower trangel
            {
                printf("#\t");
            }
            else                //upper trangel
            {
                printf("*\t");
            }
                        
        
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