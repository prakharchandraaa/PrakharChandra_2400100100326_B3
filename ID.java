import java.util.Scanner;
class IDCARD
{
	int id;
	String name;
	String city;
	String DOB;
void Input(int id, String name, String city, String DOB)
	{
		this.id=id;
		this.name=name;
		this.city=city;
		this.DOB=DOB;
		System.out.println("All values entered!");
	}
void Display()
	{
		System.out.println(id + " " + name + " " + city + " " + DOB);
	}
public static void main(String args[])
	{	Scanner sc= new Scanner(System.in);
		System.out.println("Enter ID: ");
		int i = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter name: ");
		String n = sc.nextLine();
		System.out.println("Enter address: ");
		String a = sc.nextLine();
		System.out.println("Enter DOB: ");
		String d = sc.nextLine();
		IDCARD idc = new IDCARD();
		idc.Input(i, n, a, d);
		idc.Display();
	}
}