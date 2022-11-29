//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <string>
#include "Structs.h"
#include <fstream>

int main() {
	
	setlocale(LC_ALL, "Russian");
	int n = 3;
	book* Array = new book[n];
	book b1 = { "TED Talks", "Anders Kriss", 2015, 350, 1500 };
	book b2 = { "BMW History", "Inblud Rudiger", 2020, 298, 900 };
	book b3 = { "Etagi", "Khusainov Ildar", 2017, 400, 500 };
	Array[0] = b1;
	Array[1] = b2;
	Array[2] = b3;


	int choise;
	std::string path = "file.txt";
	do {
	std::cout << "Выберите пункт меню: \n1.Показ книг.\n2.Показ имени автора книги.\n3.Записать книгу в файл.\n4.Добавить новую книгу.\n5.Удалить все записи.\n6.Завершение работы.";
	std::cin >> choise;
	
		switch (choise) {
		case 1:

			std::cout << "Показываем все книги:\n";
			std::cout << "Книга 1\n";
			show_book(b1);
			std::cout << '\n';
			std::cout << "Книга 2\n";
			show_book(b2);
			std::cout << '\n';
			std::cout << "Книга 3\n";
			show_book(b3);
			std::cout << '\n';

			break;

		case 2:

			std::cout << "Показываем имя автора книги:\n";
			std::cout << "Автор книги 1: " << author_name(b1) << "\n\n";
			std::cout << "Автор книги 2: " << author_name(b2) << "\n\n";
			std::cout << "Автор книги 3: " << author_name(b3) << "\n\n";
			break;

		case 3:

			std::cout << "Записываем книгу в файл:";

			save_book(b1, path);
			save_book(b2, path);
			save_book(b3, path);

			break;
		case 4:

			std::cout << "Добавляем новую книгу: \n";
			add_book(Array, n);
			n++;
			break;
		case 5:

			std::cout << "Удалить книги: \n";
			clear_arr(Array, n);

			break;

		case 6:

			std::cout << "Завершение работы\n";

		}
	}
	while (choise != 6);

	delete[] Array;
	
	
	return 0;
}