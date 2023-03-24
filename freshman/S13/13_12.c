/*
从键盘上输入一个数n（0<=n<10），输出第n个同构数。同构数是指一个数的平方的尾数等于该数本身。例如：  
    6^2 =36
  25^2=625
  376^2=141376
  9376^2=87909376
*/
#include<stdio.h>    
#include<math.h>    
int main()    
{    
    int n,i,j,p,k,s,count=0;    
    scanf("%d",&n);    
    for(i=0;;i++)    
    {    
        j=i;k=0;    
        while(j>0)    
        {    
            j=j/10;    
            k++;    
        } 
		p=k;
		s=1.0;
		while(p>0)
		{
			s=10.0*s; 
			p--;
		}  
		if((i*i)%s==i)    
            count++;    
        if(count==n)    
            break;    
    }    
    printf("%d,%d\n",i,i*i);    
    return 0;    
}  