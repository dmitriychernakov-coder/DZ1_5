// Name        : dz_1_5_1_massive_screen.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Massive screen C++, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;

int main()
{
	int number{0};
	int massive[10]{};
	std::cout << "\n";


	for (int i = 0; i <= 9; i++)
	{

		massive[i] =  i+1;
		std::cout << massive[i] ;
		if (i <=8)
		{
		std::cout << ", " ;
		}

	}

	std::cout << "\n\n";

	return EXIT_SUCCESS;
}
