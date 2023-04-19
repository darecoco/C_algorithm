#include <stdio.h>

int main(void){
	int score = 0;
	printf("점수 입력 : ");
	scanf("%d", &score);
	if(score <= 100 && score >= 70)
		printf("성공\n");
	else if(score <= 69 && score >= 0)
		printf("실패\n");
	else
		printf("오류\n");
		
	if(score < 0 || score > 100) 
		printf("오류\n");
	else if(score < 70)
		printf("실패\n");
	else
		printf("성공\n");
}
