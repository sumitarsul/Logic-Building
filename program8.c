/*
    step 1 : Understand the programe statment
    step 2 : Write the algoritham
    step 3 : Decide the programing language
    step 4 : Write the program
    step 5 : Test the program
*/

////////////////////////////////////
//
//  Step 1 : Understand the problem statement
/* User is going to enter any 2 
   integers ans we have to perform addition
*/   
//
////////////////////////////////////


///////////////////////////////////
//
//  Step2 : Write aloritham
/*
    START
        Accepet first number
        Accepet second number
        Create the variable as ans to store result
        Perform the addition and store into ans
        Display the result 
    STOP
*/
//
//////////////////////////////////

//////////////////////////////////
//
//  Step 3 : Select the language
/*
        We have using C programig
*/
//
/////////////////////////////////

////////////////////////////////
//
//   Step 4 : Write the programe
//
////////////////////////////////


#include<stdio.h>

////////////////////////////////
//
// Function Name :  Addition  
//  Input        :   Integer,Integer
//  output       :   Integer
//  Description  :   Perform addition
//  Date         :   04/10/2026
//  Author       :   Sumit Bhausaheb Arsul
//
////////////////////////////////

int  Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;              // Buisness logic

    return iAns;
}

///////////////////////////////////
//
//  Entery point of the Application
//
////////////////////////////////////

int main ()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1); 

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    
    iResult = Addition(iValue1, iValue2);   

    printf("Addition is : %d\n",iResult);

    return 0;
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