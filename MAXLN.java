import java.util.*;
class circ
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int i=1;
		while(i<=t)
		{
			int r=sc.nextInt();
			double area=(double)r*(double)r*4+0.25;
			System.out.format("Case %d: %.2f\n",i,area);
			i++;
		}
	
	}
}
