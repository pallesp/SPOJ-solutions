import java.util.*;
import java.lang.*;
class start
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=" ";
		s=sc.nextLine();
		while(!s.equals("*"))
		{
			
			int k=0,flag=0;
			char ch=Character.toLowerCase(s.charAt(0));
			StringTokenizer st=new StringTokenizer(s);
			String[] r=new String[st.countTokens()];
			while(st.hasMoreTokens())
			{
				if(Character.toLowerCase(st.nextToken().toString().charAt(0))==ch)
				{
				flag=1;
				}
				else
				{
				flag=0;
				break;
				}
			}
			
			if(flag==1)
			{
			System.out.println("Y");
			}
			else
			System.out.println("N");
			
			s=sc.nextLine();
		}
	}
}
