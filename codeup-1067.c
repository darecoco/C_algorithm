#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	if(x > 0){
		printf("양, "); 
		if(x%2==0)
			printf("짝\n");
		else
			printf("홀\n");
	}else{
		printf("음, "); 
		if(x%2==0)
			printf("짝\n");
		else
			printf("홀\n");
	}
}

//근데 저리할거면 중첩if문 안해도 되지만 뭐..
//문제가 그렇게 하라고 하니 조건에 맞춰 코딩함 
