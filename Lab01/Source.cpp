#include "stdafx.h"
#include <time.h>
#include <iostream>



int main()
{
	int Random;
	int Guess;
	bool Win = false;

	srand(time(NULL));
	Random = rand() % 100;

	for (int i = 5; i >= 0; i--)
	{
		std::cout << "Turns Remaining: " << i << std::endl;
		std::cout << "Guess The Number: ";
		std::cin >> Guess;
		if (Guess == Random)
		{
			system("CLS");
			std::cout << "CORRECT! Well Done!" << std::endl;
			bool Win = true;
			break;
		}
		else 
		{
			system("CLS");
			if (Guess < Random)
			{
				std::cout << "Try a Higher Number" << std::endl;
			}
			else
			{
				std::cout << "Try a Lower Number" << std::endl;
			}
		}
	}
	if (!Win)
	{
		std::cout << "The Correct Answer Was: " << Random << std::endl;
	}


	system("Pause");
	return 0;
}