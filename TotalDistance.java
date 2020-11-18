/*Given acceleration, intial velocity, and initial distance displacement at t=0 of a
physical object, write a java program to find the total distance displaced at some
time t1.*/
package assignment1;

import java.util.Scanner;



public class TotalDistance {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("enter accleration , initial velocity, and initial distance :" );
		int a = sc.nextInt();
		int u = sc.nextInt();
		int d1 = sc.nextInt();
		System.out.print("enter t1 :" );
		int t1 = sc.nextInt();
		float d2 = u * t1 + ((a*t1*t1)/2);
		System.out.print("The total distance displaced at some time t1 :" + d2);
		

	}

}
