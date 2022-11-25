//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <string>
#include "Structs.h"
#include <fstream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	n = 3;


	book* mass = new book[n];
	book b1 = { "TED Talks", "Anders Kriss", 2015, 350, 1500 };
	book b2 = { "BMW History", "Inblud Rudiger", 2020, 298, 900 };
	book b3 = { "Etagi", "Khusainov Ildar", 2017, 400, 500 };
	mass[0] = b1;
	mass[1] = b2;
	mass[2] = b3;
	std::cout << "����� 1\n";
	show_book(b1);
	std::cout << '\n';
	std::cout << "����� 2\n";
	show_book(b2);
	std::cout << '\n';
	std::cout << "����� 3\n";
	show_book(b3);
	std::cout << '\n';


	std::cout << "����� ����� 1: " << author_name(b1) << "\n\n";
	std::cout << "����� ����� 2: " << author_name(b2) << "\n\n";
	std::cout << "����� ����� 3: " << author_name(b3) << "\n\n";



	std::string path = "file.txt";
	save_book(b1, path);
	save_book(b2, path);
	save_book(b3, path);

	std::cout << "�������� ����� �����: \n";

	add_book(mass, n);



	std::cout << "������ �� ������� �����. \n";

	clear_arr(mass, n);

	delete[] mass;
	return 0;
}