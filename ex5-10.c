#include <stdio.h>
//�� �ڵ�� �ܹ����ε� ���� ���ؼ� ������ �ٲٽô� �˰������� �ϼ̴�.
//Ȯ���� if���� ����� ó�������� �پ������� ��ƴ�. 
int main(){
	double a,b,c,temp;
	printf("�Ǽ� 3�� �Է� : ");
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
