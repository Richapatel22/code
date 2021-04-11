package helloworld;

import java.util.Scanner;

public class Minutes {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		    Scanner input = new Scanner(System.in);
		    System.out.println("Enter the number of minutes:");
		    int minutes = input.nextInt();
		    int year = minutes / 525600;
		    int day = minutes / 1440;
		  
		   System.out.println(day + " day " + year + " years " );
		   
	}

}
