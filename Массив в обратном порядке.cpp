#include <iostream>
#include <string>
#include <cstring>
void PrintInfo(const char* str) {
	int lenght = std::strlen(str);
	std::cout << "Вывод строки на экран-";
	for (int i = 0; i < str[i]; i++) {
		std::cout << str[i];
	}
	std::cout << "\nВывод строки в обратном порядке-";
	for (int i = lenght - 1; i >= 0; --i) {
		std::cout << str[i] ;
	}
}

int main() {
	setlocale(LC_ALL, "RU");

	char string[] = { "Hello World" };
	
	PrintInfo(string);
}