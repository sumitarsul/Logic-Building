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


//////////////////////////////////
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

/////////////////////////////////
//
//  Step 3 : Select the language
/*
        We have using C programig
*/
//
/////////////////////////////////

///////////////////////////////
//
//   Step 4 : Write the programe
//
///////////////////////////////


#include<stdio.h>

int main ()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    
    iResult = iValue1+ iValue2;     // Buisness logic

    printf("Addition is : %d\n",iResult);

    return 0;
}

