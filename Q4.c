#include <stdio.h>

int main(){
	int sum = 0, i = 0, a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	} 
	for(i = a; i <= b; i++){
		sum += i;
	}
	printf("%d",sum);
}
