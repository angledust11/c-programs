#include<stdio.h>
  int main(){
  int i,j,k;
  int r=2,n=3,h=3;
  
  	//3
	for(i=0;i<r;i+=1)
	  {
	  	
		  	for(j=0;j<n+1;j++)  
			{
				printf("  ");
		    }
		  	for(j=0;j<n;j++)
		  	{
			  printf("\& ");
			}	  
	  }
	  printf("\n");
	  
	//2	
	for(j=0;j<=h;j++)
		{
			for(k=0;k<2*r;k++)
			{
				for(i=0;i<n;i++)
					{
						printf("  ");
					}
				printf("*");
			}
			
		 printf("\n");
		}
		
  	//1
  	for(i=0;i<r;i++)
		{
			for(j=0;j<n;j+=1)
			{
			  printf("\& ");
			}
			  
			for(j=0;j<n+1;j++)  
			{
				printf("  ");
			}	  
		}
	
//	//2	
//	for(j=0;j<=h;j++)
//		{
//			for(i=0;i<n;i++)
//			{
//				printf("  ");
//			}
//			printf("* ");
//		 printf("\n");
//		}
}
