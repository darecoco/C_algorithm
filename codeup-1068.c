#include <stdio.h>

main(){
	int score;
	scanf("%d",&score);
	char res;
	if(score >= 90)
		res = 'A';
	else if(score >= 70)
		res = 'B';
	else if(score >= 70)
		res = 'C';
	else
		res = 'D';
		
	printf("%c", res);
} 
