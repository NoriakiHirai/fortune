#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void drawFortune();

int main(void) {
	//printf("Hello World\n");
	printf("‚¨‚İ‚­‚¶‚ğˆø‚«‚Ü‚·B\n");
	drawFortune();
	getchar();
}

void drawFortune(void) {
	int fortuneKey;
	static char fortune[6][10] = { "‘å‹g", "’†‹g", "‹g", "¬‹g", "‹¥", "‘å‹¥" };
	//1~6‚Ü‚Å‚Ì”’l‚ğƒ‰ƒ“ƒ_ƒ€‚Å¶¬
	srand((int)time(NULL));
	fortuneKey = rand() % 6 + 1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA%s‚Å‚·B", fortune[fortuneKey - 1]);
}