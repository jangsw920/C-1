#include <stdio.h>

int main(void) {
	int num = 1;

	if (num == 1){
		int num = 7;
		num+=10;
		print("if문 내 지역변수 num : %d", num);
	}
	print("main함수 내 지역변수 num : %d", num);
	return 0;
}