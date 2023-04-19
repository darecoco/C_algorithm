#include <stdio.h>

int main(){
	int x = 0;
	printf("정수 입력 : ");
	scanf("%d", &x);
	if(x%2!=0 && x%3!=0)
		printf("2와3의 배수가 아님\n");
	else if(x%2==0 && x%3==0)
		printf("2와 3의 배수임\n");
	else if(x%2==0)
		printf("2의 배수임\n");
	else
		printf("3의 배수임\n");
}
