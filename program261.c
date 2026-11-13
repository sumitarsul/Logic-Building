#include<stdio.h>
#include<stdlib.h>

void CountFrequncyX(char *str)
{
    int iCountSamll = 0, iCountCapital = 0, iCountDigit = 0;
    
    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
          iCountCapital++;  
        }
        else if((*str>='a') && (*str<='z'))
        {
            iCountSamll++;
        }
        else
        {
             iCountDigit++;
        }
        str++;
    }
    printf("Number of Capital : %d\n",iCountCapital);
    printf("Number of small : %d\n",iCountSamll);
    printf("Number of Digit : %d\n",iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
     
   CountFrequncyX(Arr);

   

    return EXIT_SUCCESS;
}