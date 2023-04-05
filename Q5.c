#include <stdio.h>

int main(){
	int a=1, b=1, c=0, i=2, sum=2;
	do{
		c=a+b;
		sum += c;
		i++;
		if(i == 5) break;
		a = b;
		b = c;
	}while(1); //while (i <= 5)
	printf("%d", sum);
}
