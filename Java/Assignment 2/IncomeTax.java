import java.util.Scanner;

class IncomeTax
{
	public static double IncomeTaxCalc(double income)
	{
		double tax = 0;
		if(income <= 150000)
			tax = 0;
		else if (income <= 500000)
			tax = (150000 * 0.10) + ((income - 30000) * 0.20);
		else
			tax = (150000 * 0.10) + (200000 * 0.20) + ((income - 500000) * 0.30);
		
		return tax;
	}	
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter your Income: ");
		double income = sc.nextDouble();
		
		System.out.println("Your Tax Ammount will be: " + IncomeTaxCalc(income));
	}
}