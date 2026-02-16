import java.util.Scanner;
class Sum
{
public static void main(String args[])
{
	int n, s=0;
	Scanner sc = new Scanner (System.in);
	System.out.println("Enter Number");
	n = sc.nextInt();
	while(n!=0)
	{
		s = s + (n % 10);
		n = n/10;
	}
	System.out.println("Sum of digits = " + s );
}
}