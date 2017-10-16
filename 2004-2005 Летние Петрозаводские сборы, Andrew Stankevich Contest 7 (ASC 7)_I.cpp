import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Ideone
{
	
	
	static BigInteger gcd (BigInteger x, BigInteger y) {
		if (y.equals(BigInteger.ZERO)) return x;
		else
		return (gcd(y, x.mod(y)));
	}
	
	public static void main (String[] args) throws java.lang.Exception
	{
	   Scanner sc = new Scanner(new File("toral.in"));
	   PrintWriter pr = new PrintWriter(new File("toral.out"));
	   
	 BigInteger a = sc.nextBigInteger(), b = sc.nextBigInteger();
	 
	 if (a.equals(b)) pr.print(a);
	 else pr.print(gcd(a,b));
	 pr.close();
	 sc.close();
	   
	   
	   
	}
}