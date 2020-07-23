#include <stdio.h> //입출력 쓸 수 있게 만든 헤더 파일 (standard input & output == stdio.h)
int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n%d\n%d\n%d\n%d",A+B,A-B,A*B,A/B,A%B);
	return 0;
}
