// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>


int main()
{
	int randomNumber, guess;
	int guesses = 0;
	std::cout << "Hello World!\n" << std::endl;;
	srand(time(NULL));
	randomNumber = rand() % 100 + 1;
	do
	{
		
		std::cout << "Guess the random number! :D" << std::endl;
		std::cout << "Number of guesses so far " << guesses << std::endl;
		std::cin >> guess;
		//std::cout << "" << std::endl;
		if (guess < randomNumber)
		{
			std::cout << " Higher boi!" << std::endl << std::endl;
			guesses++;
		}
		else if (guess > randomNumber)
		{
			std::cout << " Lower boi!" << std::endl << std::endl;
			guesses++;
		}
		
		if (guesses >= 5)
		{
			//std::cout << "Guesses be 5" << std::endl;
			break;
		}
	}
	while (guess != randomNumber);
	if (guess == randomNumber)
	{
		std::cout << "Well done :) :D " << std::endl << std::endl;
	}
	else if (guesses == 5)
	{
		std::cout << "Mission failed, we'll get them next time :(" << std::endl << std::endl;
	}
	

	system("pause");

    return 0;
}

