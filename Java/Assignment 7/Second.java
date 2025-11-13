import java.lang.*;
import java.util.*;

public class Second 
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of x & y: ");
        int x = sc.nextInt(), y = sc.nextInt();

        try {
            if ((x - y) == 0) throw new ArithmeticException("Zero Divison Error!!!");
            System.out.println(x + " / " + (x - y) + ": " + (x / (x - y)));
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}