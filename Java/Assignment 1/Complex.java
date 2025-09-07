import java.util.Scanner;

class ComplexNo
{
    float real, imgn;

    ComplexNo()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Real part of the Complex: ");
        real = sc.nextFloat();
        System.out.print("Enter Imaginary part of the Complex: ");
        imgn = sc.nextFloat();
    }
}

class Complex
{
    public static void main(String[] args)
    {
        ComplexNo c1 = new ComplexNo();
        ComplexNo c2 = new ComplexNo();

        float sumr, sumi;
        sumr = c1.real + c2.real;
        sumi = c1.imgn + c2.imgn;

        System.out.println(c1.real + " + " + c1.imgn + "i" + " + " + c2.real + " + " + c2.imgn + "i = " + sumr + " + " + sumi + "i");
    }
}