#include <stdio.h>
int main() {
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);
	//%d отображает целочисленное значение символа
	//%c отображает сам символ
	printf("ASCII-код %c = %d\n", c, c);
	return 0;

}
