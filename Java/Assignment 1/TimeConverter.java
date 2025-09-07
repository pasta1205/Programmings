import java.util.Scanner;

public class TimeConverter
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter time in second: ");
		int sec = sc.nextInt();
		
		int hr = sec / 3600;
		int min = (sec % 3600)/60;
		sec = sec % 60;
		
		System.out.println("Time in HH:MM:SS format: " +hr + ":" +min + ":" +sec); 
	}
}