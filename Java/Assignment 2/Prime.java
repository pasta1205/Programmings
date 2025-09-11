import java.util.Scanner;

public class Prime 
{
    public static boolean PrimeCheck(int num) 
    {
        if (num <= 1) 
            return false;
        for (int i = 2; i <= Math.sqrt(num); i++) 
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        int number = sc.nextInt();
        
        if (PrimeCheck(number))
            System.out.println(number + " is a Prime Number.");
        else
            System.out.println(number + " is NOT a Prime Number.");
    }
}
