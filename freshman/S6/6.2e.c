#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n,count=0;
	double sum=0,average=0;
	
	n=10;

	if(n<=10&&n>=1){
		int num[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
			sum=sum+num[i];
			}
		average=sum/n;
		printf("均值=%.2lf\n",average);	
		for(i=0;i<n;i++)			
			if(num[i]>average){
				printf("%d,",num[i]);
				count++;
			}	
	}
	else
		printf("Invalid."); 
	if(count==0) printf("\n");
		
	return 0;
}
