#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include <conio.h>

struct Movie
{
	std::string title = "Noname";
	int year = 1982;
	std::string genre = "Noname";
	unsigned int duraction = 0;
	unsigned int price = 0;

};

void print_movie(const Movie& movie)
{
	std::cout << "Title - " << movie.title << "\nDate - " << movie.year << "\nGanre - " << movie.genre << "\nDuraction - " << movie.duraction << "\nPrice - " << movie.price << "\n";

}
void expensive(Movie arr[], const int size)
{
	int max = arr[0].price;
	for (int i = 0; i < size; i++) if (arr[i].price > max) max = arr[i].price;
	std::cout << max << " - Most expensive \n";
}
void update_info(Movie* movie)
{
	int option = 0;
	
	std::cout << "Выберите информацию о фильме которую необходимо изменить - \n" <<
		"1. Название\n" <<
		"2. Год выхода\n" <<
		"3. Жанр\n" <<
		"4. Продолжительность\n" <<
		"5. Цена за диск\n";
	std::cin >> option;
	if (option == 1)
	{
		std::cout << movie->title << '\n'<<"Ввeдите новое название:\n";
		std::cin.ignore();
		std::cout << "Введите запись ->";
		std::getline(std::cin, movie->title);
		std::cout << "Информация обновлена.\n";
		
	}
	if (option == 2)
	{
		std::cout << movie->year << '\n' << "Ввeдите новый год выпуска:\n";
	
		std::cout << "Введите запись ->";
		std::cin>>movie->year;
		std::cout << "Информация обновлена.\n";

	}
	if (option == 3)
	{
		std::cout << movie->genre << '\n' << "Ввeдите новое названиеновый жанр:\n";
		std::cin.ignore();
		std::cout << "Введите запись ->";
		std::getline(std::cin, movie->genre);
		std::cout << "Информация обновлена.\n";

	}
	if (option == 4)
	{
		std::cout << movie->duraction << '\n' << "Ввeдите новую продолжительность:\n";
		std::cout << "Введите запись ->";
		std::cin>> movie->duraction;
		std::cout << "Информация обновлена.\n";

	}
	if (option == 5)
	{
		std::cout << movie->price << '\n' << "Ввeдите новую цену:\n";
		std::cout << "Введите запись ->";
		std::cin >> movie->price;
		std::cout << "Информация обновлена.\n";

	}

}


int main()
{
	setlocale(LC_ALL, "Russian");

	Movie movie_1
	{
		"Predator",
		1986,
		"action",
		125,
		100
	};

	print_movie(movie_1);

	const int size = 4;
	Movie catalog[size];
	catalog[0].price= 120;
	catalog[1].price =125;
	catalog[2].price = 130;
	catalog[3].price = 110;

	expensive(catalog, size);

	update_info(&movie_1);
	print_movie(movie_1);


	return 0;
}