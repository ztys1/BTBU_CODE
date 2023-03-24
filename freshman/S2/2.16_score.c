/**/
#include<stdio.h>
int main(){
	char n;
	int i;
	scanf("%d",&i);
	if(i<0||i>100)
    printf("成绩错误\n");
    else
	switch(i/10)
	{
        case 10:
	    case 9:n='A';printf("%c\n",n);break;
	    case 8:n='B';printf("%c\n",n);break;
	    case 7:n='C';printf("%c\n",n);break;
	    case 6:n='D';printf("%c\n",n);break;
	    default:n='E';printf ("%c\n",n);break;
	}

} 
