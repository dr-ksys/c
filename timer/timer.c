#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Использование: %s <секунды>\n", argv[0]);
		return 1;
	}

	int total_seconds = atoi(argv[1]);
	if (total_seconds <= 0) {
		printf("Введите число секунд.\n");
		return 1;
	}
	int seconds_left = total_seconds;

	while (seconds_left >= 0) {
		int minutes = seconds_left / 60;
		int seconds = seconds_left % 60;

		//Символ \r возвращает курсор в начало строки
		//позволяя перезаписать предыдущую строку вывода.
		//Форматирование для добавления ведущих нулей (%02d)
		printf("\rОставшееся время: %02d:%02d", minutes, seconds);

		//fflush(stdout) гарантирует, что вывод немедленно отобразится на экране
		//иначе он может буферизироваться
		fflush(stdout);
		//Ждем 1 секунду
		sleep(1);
		seconds_left--;
	}


//После завершения таймера переводим строку
printf("\nВремя вышло!            \n");
return 0;
}
