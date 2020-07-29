//Big Integer in Java | Powerful lot of inbuilt functions
/*
Modular Airthmatic
GCD Calculation
Base Conversion
Power Calculation
Bitwise Operators
Prime Generation
and more.
*/
//..................CODE...........................//

import java.util.Scanner;
import java.math.BigInteger;

class main {

	static void playWithBigInt() {
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();

		BigInteger b1 = new BigInteger(s1);
		BigInteger b2 = new BigInteger("1255899999841233123155");
		b1 = b1.add(b2);
		System.out.println(b1);

		b1 = b1.multiply(b2);
		System.out.println(b1);

		//Bit Count - Total Set Bit
		System.out.println(b1.bitCount());

		//Bit Count - Total No. of Bits
		System.out.println(b1.bitLength());

		//Integer into Big Integer

		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.println(a+b);

		BigInteger b3 = BigInteger.valueOf(a);
        BigInteger b4 = BigInteger.valueOf(b);

        //Print GCD

        System.out.println(b3.gcd(b4));

	}

	public static void main(String args[]) {
		playWithBigInt();
	}

}



