#include <stdio.h>
//소인수분해하는 코드 
int main(){
	int N, i, j;
	printf("소인수 분해 할 데이터 = ");
	scanf("%d", &N);
	for(i=2; i<=N; i++){
		while(N % i == 0){
			printf("%d\n",i);
			N = N/i;
		}
	}
} 
