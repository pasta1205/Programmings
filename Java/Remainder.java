import java.util.Scanner;

public class Remainder
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the No. (a) (a>b): ");
        double a = sc.nextDouble();
        System.out.print("Enter the No. (b): ");
        double b = sc. nextDouble();
        double remainder = a%b;
        System.out.printf("The remainder when a is divided by b is: %.2f\n",remainder);
        
    }
}