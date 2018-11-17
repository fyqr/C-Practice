#include <stdio.h>
#include <stdlib.h>
#include "Common.h"

void PauseAndTip() {
	puts("Please input \"ENTER\" key to continue!");
	system("pause");
}

void welcome() {
	printf("====================================\n");
	printf("        Welcome to XXX system        \n");
	printf("====================================\n");
}

void show_menu() {
	puts("======================================");
	puts(" Here is the choice     ");
	puts(" 1. menu_one");
	puts(" 2. menu_two");
	puts(" 0. quit");
}

void ClearBuffer() {
	char ch;
	while( '\n' != (ch = getchar())) {
		printf("The dirty data is:  ");
		putchar(ch);
		printf("\n");
	}

}

int get_a_int() {
	int input;

	while( 1 != scanf("%d", &input)) {
		puts("That is not a number. Please input a number again...");
		ClearBuffer();
	}

	return input;
}
