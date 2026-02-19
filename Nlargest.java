class ABC
{
	static int Large( int a[] , int n, int pos)
	{
		for (int i=0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n-1-i ; j++)
			{
				if (a[j] < a[j+1])
				{
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		return a[pos-1];
	}
	public static void main(String args[])
	{	
		int n= Integer.parseInt(args[0]);
		int pos= Integer.parseInt(args[1]);
		int a[] = new int[n];
		for(int i=0 ; i < n ; i++)
		{
			int value = Integer.parseInt(args[i+2]);
			a[i]= value;
		}
		int largno = ABC.Large(a,n,pos);
		System.out.println( pos + " Largest = " + largno);
				
	}	
}
