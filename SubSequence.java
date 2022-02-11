/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class SubSequence
{
	public static void main(String[] args) {
	SubSeq("","ABC");
	}
	static void SubSeq(String p,String up)
	{
	    if(up.length()==0)
	    {
	        System.out.println(p);
	        return;
	    }
	    SubSeq(p,up.substring(1));
	    SubSeq(p+up.charAt(0),up.substring(1));
	}
}
