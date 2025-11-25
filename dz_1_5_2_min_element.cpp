// Name        : dz_1_5_2_min_element.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Minimal element C++, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;

int main()
{
	int massive[10]{51, 22, 54, 63, 76, 83, 55,13, 92, 3 };
	int minimum_ = massive[0];
	int maximum_ = massive[0];
	std::cout << "\n";
	std::cout <<"Массив: ";

	for (int i = 0; i <= 9; i++)
	{

		std::cout << massive[i] ;
		if (i <=8)
		{
			std::cout << ", " ;
		}

	}

	std::cout << "\n\n";


	for (int j = 0; j < 10; j++)
	{
		if (massive[j] < minimum_)
		{
			minimum_ = massive[j];
		}

	}
	std::cout << "Минимальный элемент: " << minimum_ << std::endl;


	std::cout << "\n";


	for (int k = 0; k < 10; k++)
	{
		if (massive[k] > maximum_)
		{
			maximum_ = massive[k];
		}

	}
	std::cout << "Максимальный элемент: " << maximum_ << std::endl;
	std::cout << "\n";

	return EXIT_SUCCESS;
}
