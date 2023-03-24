/*元旦义卖总共带m件商品，有两种构成，钥匙扣2块一个，漫画书4块一本，要卖出160块要如何搭配？m从键盘输入。*/
#include <stdio.h>
int main(){
	int k,c;//k为钥匙的数量，c为漫画书的数量
	int m;//m件商品
	
	scanf("%d\n",&m);
	for(c=0;c<=m;c++){
		k = m-c;
		if(2*k+4*c==160){
			break;
		}
	}
	if(c<=m){
		printf("%d本漫画书,%d块钥匙扣\n",c,k);
	}else{
		printf("没有解决方案\n");
	}
	return 0;
} 
