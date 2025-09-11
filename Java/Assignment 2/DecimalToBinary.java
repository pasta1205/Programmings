import java.util.Scanner;

public class DecimalToBinary
{
    public static String toBinary(int num) 
    {
        String binary = "";
        
        if (num == 0)
            return "0";

        while (num > 0) 
        {
            int remainder = num % 2;
            binary = remainder + binary;
            num = num / 2;
        }
        
        return binary;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a decimal number: ");
        int decimal = sc.nextInt();
        
        String binary = toBinary(decimal);
        System.out.println("Binary equivalent: " + binary);
        
        sc.close();
    }
}
