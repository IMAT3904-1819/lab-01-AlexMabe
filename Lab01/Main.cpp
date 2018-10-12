#include "stdafx.h"
#include <time.h>												//Includes
#include <iostream>



int main()														//Enter the program
{
	int Random;													//Used for random number		
	int Guess;													//Used to hold the guess
	bool Win = false;											//Has the player won?

	srand(time(NULL));											//Used to ensure randomness
	Random = rand() % 100;										//Randomis between 1-100

	for (int i = 5; i >= 0; i--)								//Loop the amount of guesses left
	{
		std::cout << "Turns Remaining: " << i << std::endl;		//Output turns remaining
		std::cout << "Guess The Number: ";						//As player to guess
		std::cin >> Guess;										//Guess input
		if (Guess == Random)									//Has the player guessed correctly
		{
			system("CLS");										//Clear the screen
			std::cout << "CORRECT! Well Done!" << std::endl;	//Notify the player
			Win = true;											//Set win as true
			break;												//Break out of the loop
		}
		else													//Else the player has not guessed correctly
		{
			system("CLS");										//Clear the screen
			if (Guess < Random)									//If the guess is less than the number
			{
				std::cout << "Try a Higher Number" << std::endl;//Tell player to enter a higher number
			}
			else												//Else player has guessed less than number
			{
				std::cout << "Try a Lower Number" << std::endl;	//Tell the player to enter a lower number
			}
		}
	}
	if (!Win)													//If the player has won
	{
		std::cout << "Sorry.. You're Out of Turns" << std::endl //Tell the player they are out of turns
		<< "The Correct Answer Was: " << Random << std::endl;	//Tell the player the correct answer
	}


	system("Pause");											//Pause the console
	return 0;													//Exit the program
}