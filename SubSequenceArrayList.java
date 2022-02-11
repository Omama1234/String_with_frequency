/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.io.*;
import java.util.*;
public class SubSequenceArrayList
{
	public static void main(String[] args) {
	    
	    ArrayList<String> arrli=new ArrayList<>();
	    
	SubSeq("","ABCD",arrli);
	System.out.println(arrli);
	}
	static void SubSeq(String p,String up,ArrayList<String> arr)
	{
	    
	    if(up.length()==0)
	    {
	        arr.add(p);
	        return;
	    }
	    SubSeq(p,up.substring(1),arr);
	    SubSeq(p+up.charAt(0),up.substring(1),arr);
	}
}
