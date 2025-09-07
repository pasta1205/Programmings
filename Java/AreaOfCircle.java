import java.util.Scanner;

public class AreaOfCircle 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        double radius = sc.nextDouble();
        double area = 3.12159 * radius * radius;
        //System.out.printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
        System.out.println("The area of the circle with radius " + radius + " is " + area);
    }
}