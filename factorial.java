class factorial
{
public static void main(String args[])
{
	int a, fact=1;
	a = Integer.parseInt(args[0]);
	for(int i=1 ; i<=a ; i++)
	{
		fact = fact*i;
	}
	System.out.println("Factorial of " + a + " is " + fact);

}
}