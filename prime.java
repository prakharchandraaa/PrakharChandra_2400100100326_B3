class prime
{
public static void main(String args[])
{
	int a, flag=1;
	a = Integer.parseInt(args[0]);
	for(int i=2 ; i<a ; i++)
{
if (a % i ==0)
{
	flag = 0;
}
}
if( flag == 0 )
{
System.out.println("Not Prime");
}
else
{
System.out.println("Prime");
}

}
}