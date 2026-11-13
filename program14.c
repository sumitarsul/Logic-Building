#include "Header.h"

///////////////////////////////////
//
//  Entery point of the Application
//
////////////////////////////////////

int main ()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter First Number :\n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    } 

    printf("Enter Second Number :\n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }
    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}


///////////////////////////////////////////
//    Step 5 : Test the program
//
//       Tasted test Cases
//-----------------------------------------
//      Input       Input2      Output
//-----------------------------------------
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//      -20         -11         -31
//----------------------------------------
/////////////////////////////////////////