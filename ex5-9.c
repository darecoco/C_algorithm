#include <stdio.h>

int main(void){
	int score = 0;
	printf("���� �Է� : ");
	scanf("%d", &score);
	if(score <= 100 && score >= 70)
		printf("����\n");
	else if(score <= 69 && score >= 0)
		printf("����\n");
	else
		printf("����\n");
		
	if(score < 0 || score > 100) 
		printf("����\n");
	else if(score < 70)
		printf("����\n");
	else
		printf("����\n");
}
