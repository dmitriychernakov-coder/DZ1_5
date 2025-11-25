// Name        : dz_1_5_3_two_massive.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Two dimension massive C++, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;

int main()
{
	int massive[3][6]
	{
		{51, 22, 54, 63, 76, 83},
		{55,13, 9, 3, 44 , 82},
		{22, 91, 71, 89, 17, 87}
	};

	int minimum_ = massive[0][0];
	int maximum_ = massive[0][0];
	int min_row = 0;
	int min_col = 0;
	int max_row = 0;
	int max_col = 0;

	std::cout << "\n";
	std::cout <<"Массив: \n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n";
		for (int j = 0; j < 6; j++)
			{
			std::cout << massive[i][j] ;

			if (massive[i][j] < minimum_)
			{
				minimum_ = massive[i][j];
				min_row = i;
				min_col = j;
			}

			if (massive[i][j] > maximum_)
			{
				maximum_ = massive[i][j];
				max_row = i;
				max_col = j;
			}


			if (i < 2 || j < 5)
				{
					std::cout << "\t" ;
				}
			}
	}
	std::cout << std::endl;

	std::cout << "\n";
	std::cout << "Индекс минимального значения:\t" << min_row << " " << min_col << std::endl;
	std::cout << "Индекс максимального значения:\t" << max_row << " " << max_col << std::endl;
	std::cout << "\n";

	return EXIT_SUCCESS;
}


