package helloworld;

public class multiplacationarrays {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[][]={{1,2,3},{2,2,6},{4,2,3}};    
		int b[][]={{1,8,3},{8,5,2},{7,1,9}};    
		      
		int c[][]=new int[3][3];  
		for(int i=0;i<3;i++){    
		for(int j=0;j<3;j++){    
		c[i][j]=0;      
		for(int k=0;k<3;k++)      
		{      
		c[i][j]+=a[i][k]*b[k][j];      
		}
		System.out.print(c[i][j]+" ");    
		} 
		System.out.println();   
		}    
	
	}

}
