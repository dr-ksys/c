#include <stdio.h>
#include <stdlib.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define VIOLET "\033[1;35m"
#define RESET "\033[0m"

int main() {
	system("clear");
	system("date");

	int vibor;

	printf("%sВыберите радио%s\n", RED, RESET);
	printf("%s1 - FreeCode\n2 - Choco%s\n", GREEN, RESET);
	printf("%s***********%s\n", VIOLET, RESET);
	scanf("%d", &vibor);
	printf("%s %d !COOL! %s\n", VIOLET, vibor);

	switch (vibor) {
		case 1: system ("mpg123 https//coderadio-admin-v2.freecodecamp.org/listen/coderadio/radio.mp3");
		case 2: system ("mpg123 http://choco.hostingradio.ru:10010/fm");
		case 3: system ("clear");
		case 'q': break;
		default: printf("Неправильно набран номер"); break;

	}
printf("%s___________Sayonara!__________%s\n", RED, RESET);

}
