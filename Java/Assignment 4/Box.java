import java.util.Scanner;

class Box
{
	double width, length, depth;
	
	Box(double wid, double len, double dep)
	{
		width = wid;
		length = len;
		depth = dep;
	}
	
	double vol()
	{
		return (width * length * depth);
	}
	
	public static void main(String[] arg)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter width of the Box: ");
		double wid = sc.nextDouble();
		System.out.print("Enter length of the Box: ");
		double len = sc.nextDouble();
		System.out.print("Enter depth of the Box: ");
		double dep = sc.nextDouble();
		
		Box b = new Box(wid,len,dep);
		System.out.println("Volume of the box is: " + b.vol());
	}
}