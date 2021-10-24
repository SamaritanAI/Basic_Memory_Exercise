//TODO Add logic for storing reverse numbers
//TODO Add a win/lose logic
//TODO Add difficulty options

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <iomanip>

int main() {

	int randomNumbers[10] = {}, userNumbers[10] = {}, counter = 0;
	int difficulty = 0;
	bool win;
	
	srand(time(0));


	//storing random numbers in array
	for (int i = 0; i < 10; i++) {
		randomNumbers[i] = rand() % 10 + 1;

	}

	//outputting array of random number
	for (int i = 0; i < 10; i++) {
		std::cout << randomNumbers[i] << std::setw(4);
	}

	//waiting 5 seconds before clearing the display
	Sleep(5000);
	system("cls");

	//storing user input
	for (int j = 0; j < 10; j++) {

		std::string word = "";

		if ((j + 1) == 1)
			word = "st";
		else if ((j + 2) == 2)
			word = "nd";
		else if ((j + 1) == 3)
			word = "rd";
		else
			word = "th";

		std::cout << "Enter the " << j + 1 << word << " number: ";
		std::cin >> userNumbers[j];

	}

	//checking if user input is same as random number
	for (int checker = 0; checker < 10; checker++) {
		if (randomNumbers[checker] == userNumbers[checker]) {
			counter++;
		}
	}

	//clearing the output for a neater display
	std::cout << "\nLoading...\n";
	Sleep(5000);
	system("cls");

	//outputting the original array and the array of user input
	std::cout << "This was the original list of numbers: " << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << randomNumbers[i] << std::setw(4);
	}
	
	std::cout << std::endl << "These are the numbers you entered: " << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << userNumbers[i] << std::setw(4);
	}

	std::cout << std::endl << "You have " << counter << " correct." << std::endl;
	win = counter > 8 ? true : false;
	if (win)
		std::cout << "You win!" << std::endl;
	else
		std::cout << "Too bad, You lost. You might wanna work on your memory" << std::endl;


	
	std::cout << std::endl;
	//uses Windows.h anyways so it it's gonna be platform dependant  
	system("PAUSE");
	return 0;
}