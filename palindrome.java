import java.util.Scanner;
class palindrome
{
	public static void main(String args[])
	{
		int n, num, rev = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number: ");
		n = sc.nextInt();
		num = n;
		while(num!=0)
		{	
			rev = rev * 10 + (num % 10);
			num = num/10;
		}
		if(rev == n)
		{
			System.out.println("Palindrome");
		}
		else
		{
			System.out.println("Not Palindrome");
		}
	}
}