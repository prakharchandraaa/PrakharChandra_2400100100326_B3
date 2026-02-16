import java.util.Scanner;
class Palindromestr
{	
	void isPalindrome(String s)
	{
		String rev = "";
		for(int i = s.length()-1 ; i >= 0 ; i--)
		{
			char ch = s.charAt(i);
			rev = rev + ch;
		}
		if (s.equalsIgnoreCase(rev))
		{
			System.out.println("Palindrome");	
		}
		else
		{
			System.out.println(" Not Palindrome");
		}
	}
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter string: ");
		String str = sc.nextLine();
		Palindromestr pal = new Palindromestr();
		pal.isPalindrome(str);	
	}
}