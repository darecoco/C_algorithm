#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	if(x > 0){
		printf("��, "); 
		if(x%2==0)
			printf("¦\n");
		else
			printf("Ȧ\n");
	}else{
		printf("��, "); 
		if(x%2==0)
			printf("¦\n");
		else
			printf("Ȧ\n");
	}
}

//�ٵ� �����ҰŸ� ��øif�� ���ص� ������ ��..
//������ �׷��� �϶�� �ϴ� ���ǿ� ���� �ڵ��� 
