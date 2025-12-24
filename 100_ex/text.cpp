#include <iostream>
#include <fstream>

using namespace std;

int main() {
	//Создаем поток и сразу открывает файл
	ofstream fout("text.txt");

	if (!fout) {
		cout << "Не могу открыть файл для записи!";
		return 1;
	}
	//Записываем в поток две строки
	fout << "Hello, world!\n";
	fout << "Yet another line\n";

	fout.close();

	cout << "Готово!" << endl;
	return 0;
}
