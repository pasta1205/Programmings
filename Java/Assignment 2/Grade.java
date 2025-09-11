import java.util.Scanner;

class Grade
{
	public static char GradeCalc(float avg)
	{
		if(avg >= 90)
			return 'O';
		else if(avg >= 80)
			return 'E';
		else if(avg >= 70)
			return 'A';
		else if(avg >= 60)
			return 'B';
		else if(avg >= 50)
			return 'C';
		else
			return 'F';
	}
	
	public static void main(String[] arg)
	{
		int sum = 0;
		int mark[] = new int[4];
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter your mark in 4 subjects:");
		for(int i=0; i < 4; i++)
		{
			System.out.print("Subject " + (i+1) + ": ");
			mark[i] = sc.nextInt();
			sum += mark[i];
		}
		
		float avg = sum / 4;
		
		System.out.println("Your Average Mark: " + avg);
		System.out.println("Grade: " + GradeCalc(avg));
	}
}