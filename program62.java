import java.util.Scanner;

class program61
{
    
    public static void main(String A[])
    {
        Iteration iteration = new Iteration();
        Scanner scanner = new Scanner(System.in);
        int iValue =0;

        System.out.println("Enter the frequency");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
} 
class Iteration
{
    public void Display(int iNo)
    {
         int iCnt = 0;

         for(iCnt=1; iCnt<=iNo; iCnt++)
         {
            System.out.println("-------------");
            System.out.println(iCnt + " Jay Ganesh...");
            System.out.println("-------------");
         }
    }
}