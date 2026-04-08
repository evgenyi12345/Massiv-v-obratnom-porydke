#include <iostream>
#include <string>
#include <cstring>
void PrintInfo(const char* str) {
	int lenght1= std::strlen(str);
	int reversed_index = 0;
	char* reversed_string = new char[lenght1 + 1];
	// Выводим первую строку Hello World на экран используя цикл for
	std::cout << "\n";
	std::cout << "Вывод первой строки на экран-";
	for (int i = 0; i < str[i]; i++) {
		std::cout << str[i];
	}
	
	// Выводим первую строку Hello World на экран в обратном порядке используя цикл for 
	std::cout << "\nВывод второй строки в обратном порядке-";
	for (int i = lenght1 - 1; i >= 0; --i) {
		std::cout << str[i];
	    reversed_index = str[i];
		reversed_index++;
	}
	delete[]reversed_string;
	std::cout << "\n";
}
void PrintInfoInPlace(char* str) {
	int lenght3 = std::strlen(str);
	char* start = str;                       // Указатель на начало строки
	char* end = str + lenght3 - 1;           // Указатель на последний символ
	std::cout << "\nИсходная строка для 'PrintInfoInPlace' - " << str;
	while(start<end) {
		//Меняем местами символы *start и *end
		char red = *start;     // Сохраняем символ в начале
		*start = *end;         // Помещаем символ с конца в начало
		*end = red;            // Помещаем сохраненный символ начала в конец
		++start;
		--end;
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "===Программа начала свою работу!=== " << "\n";
	
	char string[] = { "Hello World,Teremoc,Factorial"};
	char string2[] = { "dlroW olleH,comereT,lairotcaF" };
	PrintInfo(string);
	PrintInfo(string2);
	PrintInfoInPlace(string);
	PrintInfoInPlace(string2);
	
}

