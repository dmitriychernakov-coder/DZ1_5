// Name        : dz_1_5_4_sort_massive.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Sort massive C++, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;

int main()
{
	int massive[10]{51, 22, 54, 47, 76, 83, 55,13, 92, 3 };
	int minimum_ = massive[0];
	int maximum_ = massive[0];
	std::cout << "\n";
	std::cout <<"Массив до сортировки: ";

	for (int i = 0; i < 10; i++)
	{

		std::cout << massive[i] ;
		if (i < 9)
		{
			std::cout << ", " ;
		}

	}

	std::cout << "\n";


	for (int i = 0; i < 10; i++)
		{
		for (int j = 0; j < 10 - i - 1; j++)
			{
				if (massive[j + 1] < massive[j])
					{
						minimum_ = massive[j + 1];
						massive[j + 1] = massive[j];
						massive[j] = minimum_;
					}

			}
		}
	std::cout << "\n";
	std::cout <<"Массив после сортировки: ";

	for (int i = 0; i < 10; i++)
	{

		std::cout << massive[i] ;
		if (i < 9)
		{
			std::cout << ", " ;
		}

	}

	std::cout << "\n\n";


	return EXIT_SUCCESS;
}
