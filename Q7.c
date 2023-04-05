#include <stdio.h>

int main(){
	int j = 0,n; int k = 1;
	scanf("%d", &n);
	do{
		j++;
		k *= j;
	}while(j < n);
	printf("%d ÆÑÅä¸®¾ó = %u\n", n, k);
}
