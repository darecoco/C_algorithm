#include <stdio.h>

int main(){
	int x = 0;
	printf("���� �Է� : ");
	scanf("%d", &x);
	if(x%2!=0 && x%3!=0)
		printf("2��3�� ����� �ƴ�\n");
	else if(x%2==0 && x%3==0)
		printf("2�� 3�� �����\n");
	else if(x%2==0)
		printf("2�� �����\n");
	else
		printf("3�� �����\n");
}
