import java.util.*;
class step
{
	public static void main(String srgs[])
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0)
		{
			int x=sc.nextInt();
			int y=sc.nextInt();
			int r;
			if(x==y)
			{
				if(x%2==0)
				{
				r=2*x;
				}
				else
				{
				r=2*x-1;
				}
				System.out.println(r);
			}
			else if(x==y+2)
			{
				if(x%2==0)
				{
				r=x+y;
				}
				else
				{
				r=x+y-1;
				}
				System.out.println(r);
			}
			else
			{
				System.out.println("No Number");
			}
			t--;
		}
	}
}
 
