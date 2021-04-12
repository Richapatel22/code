package helloworld;

import java.util.Scanner;

public class grade {

	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter percentage marks");
		int percentage = scan.nextInt();

		if(percentage >= 90)
			System.out.println("Grade A");
		else if(percentage < 90 && percentage >= 80)
			System.out.println("Grade B");
		else if(percentage < 80 && percentage >= 70)
			System.out.println("Grade C");
		else if(percentage < 70 && percentage >= 60)
			System.out.println("Grade D");
		else if(percentage < 60 && percentage >= 50)
			System.out.println("Grade E");
		else if(percentage < 50 && percentage >= 40)
			System.out.println(" Grade F");
		else 
			System.out.println("Failed!");
	

 }
}
