#include <string>
#include "Structs.h"
#include <iostream>
#include <fstream>


void show_book(book& P) {
	std::cout << "Name: " << P.book_name << '\n';
	std::cout << "Author: " << P.author_name_sirname << '\n';
	std::cout << "Year: " << P.year << '\n';
	std::cout << "Pages: " << P.pages << '\n';
	std::cout << "Price: " << P.price << '\n';
}

std::string author_name(book& P) {
	return P.author_name_sirname.substr(P.author_name_sirname.find(' '));
}

void save_book(book& P, std::string path) {
	std::ofstream out;
	
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << P.book_name << '\n';
			out << P.author_name_sirname << '\n';
			out << P.year << '\n';
			out << P.pages << '\n';
			out << P.price << '\n';
	}
	else
		std::cout << "ќшибка открыти€ файла.\n";
	out.close();
}



void clear_arr(book* arr, int length) {
	remove("file.txt");
}

void add_book(book*& arr, int& length) {

	book* arr_tmp = new book[length + 1];
	for (int i = 0; i < length; i++) {
		arr_tmp[i] = arr[i];
	}
	delete[]arr;
	arr = arr_tmp;

	std::cout << "”кажите название: \n";
	std::getline(std::cin, arr[length].book_name);
	std::cout << "”кажите фамилию и им€: \n";
	std::getline(std::cin, arr[length].author_name_sirname);
	std::cout << "”кажите год выпуска: \n";
	std::cin >> arr[length].year;
	std::cout << "”кажите количество страниц: \n";
	std::cin >> arr[length].pages;
	std::cout << "”кажите цену: \n";
	std::cin >> arr[length].price;
}
