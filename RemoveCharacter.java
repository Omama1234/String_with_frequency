/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class RemoveCharacter
{
	public static void main(String[] args) {
	    System.out.println(RemoveA("bhacahdia",""));
	    
	}
	static String RemoveA(String up,String p){
	    
	    if(up.length()==0)
	    {
	        return p;
	    }
	    char ch=up.charAt(0);
	    if(ch=='a')
	    {
	        return RemoveA(up.substring(1),p);
	    }
	    else{
	        return RemoveA(up.substring(1),p+ch);
	    }
	    
	   // String s1="";
	   // for(int i=0;i<str.length();i++){
	        
	   //     if(str.charAt(i)!='a'){
	   //         s1=s1+str.charAt(i);
	   //     }
	   //     else{
	   //         s1=s1+"@40";
	   //     }
	   // }
	   // return s1;
	}
	
}
