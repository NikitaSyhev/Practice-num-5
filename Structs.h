#pragma once


struct book {
	std::string book_name;
	std::string author_name_sirname;
	int year;
	int pages;
	int price;
};

void show_book(book& P);
std::string author_name(book& P);

void save_book(book& P, std::string path);

void clear_arr(book* arr, int length);
void add_book(book*& arr, int& length);