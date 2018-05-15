#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void drawFortune();

int main(void) {
	//printf("Hello World\n");
	printf("おみくじを引きます。\n");
	drawFortune();
	getchar();
}

void drawFortune(void) {
	int fortuneKey;
	static char fortune[6][10] = { "大吉", "中吉", "吉", "小吉", "凶", "大凶" };
	//1~6までの数値をランダムで生成
	srand((int)time(NULL));
	fortuneKey = rand() % 6 + 1;
	printf("今日のあなたの運勢は、%sです。", fortune[fortuneKey - 1]);
}