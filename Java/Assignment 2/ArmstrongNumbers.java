public class ArmstrongNumbers 
{
    public static int countDigits(int num) 
    {
        int count = 0;
        int temp = num;
        
        if (num == 0)
            return 1;
        
        while (temp > 0) 
        {
            count++;
            temp /= 10;
        }
        return count;
    }
    
    public static boolean isArmstrong(int num) 
    {
        int original = num;
        int sum = 0;
        
        int digits = countDigits(num);
        
        int temp = num;
        while (temp > 0) 
        {
            int digit = temp % 10;
            sum += Math.pow(digit, digits);
            temp /= 10;
        }
        
        return sum == original;
    }
    
    public static void main(String[] args) 
    {
        System.out.println("Armstrong numbers from 1 to 10000 are:");
        
        for (int i = 1; i <= 10000; i++) 
        {
            if (isArmstrong(i))
                System.out.println(i);
        }
    }
}
