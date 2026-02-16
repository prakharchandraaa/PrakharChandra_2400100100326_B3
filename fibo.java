import java.util.Scanner;

class Fibo {
	void Fiboprint(int num)
	{
		int n = 0;
		int n1 = 1;
		int n2 = 0; 
		System.out.println("Series: \n" + n + "  " + n1 + "  ");
		while( num > 2)
		{
			n2 = n + n1;
			System.out.println(n2 + " ");	
			n = n1;
			n1 = n2;
			num --;
		}
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no of terms: ");
		int term = sc.nextInt();
		Fibo fibo = new Fibo();
		fibo.Fiboprint(term);
	}
}