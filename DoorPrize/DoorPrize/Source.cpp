#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int doorGame() {
	int userDoorChoice;


	cout << "Pick one of the three doors\nDoor1\nDoor2\nDoor3\n>> ";
	cin >> userDoorChoice;

	if (userDoorChoice == 1) {
		cout << "Dumb";
	}
	else if (userDoorChoice == 2) {
		//prize here
		cout << "Bad";
	}
	else if (userDoorChoice == 3) {
		//prize
		cout << "Smart" << endl;
	}
	else
		//option not available
		cout << "Not available";

	return 0;
}

int randomGame2()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 100 + 1;

	cout << "Please choose a number between 1 and 100. >> ";
	cin >> numChoice;

	if (numChoice == secret) {
		cout << "You are correct!";
	}
	else if (numChoice != secret) {
		cout << "You are so dumb!";
	}

	return 0;
}

int randomGame()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	cout << "Please choose a number between 1 and 10. >> ";
	cin >> numChoice;

	if (numChoice == secret) {
		cout << "You are correct!";
	}
	else if (numChoice != secret) {
		cout << "You are so dumb!";
	}

	return 0;
}

int main()
{
	int pickGame;
	do{
	
	cout << "Welcome to my fabulous Game\nGame 1 or Game 2 or Game 3" << endl;
	cin >> pickGame;

	if (pickGame == 1) {
		doorGame();
	}
	else if (pickGame == 2) {
		randomGame();
	}
	else if (pickGame == 3) {
		randomGame2();
	}

	} while (pickGame != 4);
	system("pause");
	return 0;
}