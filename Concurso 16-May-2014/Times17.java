package proy;
import java.util.*;
import java.math.*;
public class Times17 
{
	public static void main(String[]args)
	{Scanner in=new Scanner(System.in);
		String l;
	     BigInteger sum = new BigInteger("0");
	     BigInteger cero=BigInteger.ZERO;
	     BigInteger dos = new BigInteger("2");
	     BigInteger di = new BigInteger("17");
	     int i,p=0;
	     l=in.next();
	     for(i=l.length()-1;i>-1;i--)
	      { if(l.charAt(i)=='1')		  
		      sum =sum.add(dos.pow(p));
	        p++;
	      }
	    sum=sum.multiply(di);
	    l="";
	     while(sum!=cero)
	       { if(sum.mod(dos)==cero)
	          {sum=sum.divide(dos);
	           l+="0"; 
	          }
	        else
	          {sum=sum.divide(dos);
	           l+="1";
	          }
	        }
	     StringBuilder builder=new StringBuilder(l);
	     l=builder.reverse().toString();
	     System.out.println(l);
	}
}
