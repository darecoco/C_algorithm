#include <stdio.h>

int main(){
	int a=1, b=1, s=a+b;
	int n=2, c=789777;
	printf("�Ǻ���ġ���� = %d ", a);
	printf("%d ", a);
	while(1){
		c=a+b;
		s+=c;
		a=b;
		b=c;
		n++;
		printf("%d ",b);
		if(n==5) break;
	}
	printf("\n �� = %d",s);
}
