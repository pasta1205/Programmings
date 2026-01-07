
class Triangle
{
    void pattern1(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                System.out.print(" ");
            }

            for (int k = 0; k < 2*i+1; k++)
            {
            System.out.print("*");
            }

            for (int j = 0; j < n-i-1; j++)
            {
                System.out.print(" ");
            }

            System.out.println();
        }
    }

    void pattern2(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                System.out.print(" ");
            }

            for (int k = 0; k < 2*n-(2*i+1); k++)
            {
            System.out.print("*");
            }

            for (int j = 0; j < i; j++)
            {
                System.out.print(" ");
            }

            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        Triangle t = new Triangle();
        t.pattern2(5);
    }
}