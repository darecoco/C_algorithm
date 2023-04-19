#include <stdio.h>
//이 코드는 쌤버전인데 각각 비교해서 순서를 바꾸시는 알고리즘으로 하셨다.
//확실히 if문만 쓰라는 처리조건이 붙어있으니 어렵다. 
int main(){
	double a,b,c,temp;
	printf("실수 3개 입력 : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c){
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c){
		temp = b;
		b = c;
		c = temp;
	}
	printf("%lf %lf %lf", a, b, c);
}
