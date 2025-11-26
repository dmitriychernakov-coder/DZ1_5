// Name        : dz_1_5_4_sort_massive.cpp
// Author      : dim
// Version     : 2.1.1
// Copyright   : Your copyright notice
// Description : Sort massive C++, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;

int main()
{
//	int massive[10]{51, 22, 54, 47, 76, 83, 55,13, 92, 3 };
	int massive[]{10, 9, 8, 7, 6, 5, 4,3, 2, 1 };
//	int minimum_ = massive[0];
//	int maximum_ = massive[0];
	int size = sizeof(massive)/sizeof(int);
	std::cout << "\n";
	std::cout <<"Массив до сортировки: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << massive[i] ;
		if (i < size -1)
		{
			std::cout << ", " ;
		}
	}

	std::cout << "\n";

	int i = 0;
	do
		{
		for (int j = size - 1; j > i ; j--)
			{
				if (massive[j] < massive[j - 1])
					{
						int minimum_ = massive[j];
						massive[j] = massive[j - 1];
						massive[j - 1] = minimum_;
					}

				std::cout << "\n";
				std::cout <<"Массив после сортировки: ";

				for (int i = 0; i < size; i++)
				{
					std::cout << massive[i] ;
					if (i < size -1)
					{
						std::cout << ", " ;
					}
				}
			}
		i++;
		}
	while (i < size);

	std::cout << "\n\n";
	std::cout <<"Массив после сортировки: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << massive[i] ;
		if (i < size -1)
		{
			std::cout << ", " ;
		}
	}

	std::cout << "\n\n";

	return EXIT_SUCCESS;
}
