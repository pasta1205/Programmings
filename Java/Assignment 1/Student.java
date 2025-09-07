import java.util.Scanner;

public class Student 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the name of the student: ");
        String name = sc.nextLine();
        System.out.print("Enter your Branch: ");
        String branch = sc.nextLine();
        System.out.print("Enter your Roll No.: ");
        String roll = sc.nextLine();
        System.out.print("College Name: ");
        String collegeName = sc.nextLine();
        System.out.println("\n");
        
        System.out.println("Student Name: " + name);
        System.out.println("Student Branch: " + branch);
        System.out.println("Student Roll No.: " + roll);
        System.out.println("College Name: " + collegeName);
    }
}