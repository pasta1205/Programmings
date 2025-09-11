import java.util.Scanner;

public class SumNatural
{
    public static int sum(int n) 
    {
        if (n == 1)
            return 1;
        else
            return n + sum(n - 1);
    }
    
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        
        if (n <= 0)
            System.out.println("Please enter a positive number.");
        else 
        {
            int result = sum(n);
            System.out.println("Sum of first " + n + " natural numbers = " + result);
        }
    }
}
