#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void drawFortune();

int main(void) {
	//printf("Hello World\n");
	printf("���݂����������܂��B\n");
	drawFortune();
	getchar();
}

void drawFortune(void) {
	int fortuneKey;
	static char fortune[6][10] = { "��g", "���g", "�g", "���g", "��", "�勥" };
	//1~6�܂ł̐��l�������_���Ő���
	srand((int)time(NULL));
	fortuneKey = rand() % 6 + 1;
	printf("�����̂��Ȃ��̉^���́A%s�ł��B", fortune[fortuneKey - 1]);
}