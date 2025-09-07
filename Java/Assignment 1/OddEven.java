import java.util.Scanner;

public class OddEven
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of x: ");
        int x = sc.nextInt();

        if(x%2 == 0)
        System.out.println("It is an Even No.");

        else
        System.out.println("It is an Odd No.");
    }
}