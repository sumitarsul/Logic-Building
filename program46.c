#include<stdio.h>
#include<stdlib.h>

float Average(int fNo1, int fNo2, int fNo3)
{
    float fAns = 0.0f;

    fAns = (((float)fNo1 + (float)fNo2) +((float)fNo3)) / 3;     //Type casting

    return fAns;
    

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3=0;
    float fResult = 0.0f;

    printf("Enter first Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    printf("Enter Theard Number :\n");
    scanf("%d",&iValue3);

    fResult = Average(iValue1,iValue2,iValue3);
    
    printf("Avaerage is :%f\n",fResult);

    return EXIT_SUCCESS;
}