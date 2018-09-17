#include <iostream>
#include <string>

using namespace std;

int main()
{
	string college;
	string stringAnswer;
	int age;

	cout << "How old are you? >>";
	cin >> age;

	if (age <= 12 ) {
		stringAnswer = "You are a normie!";
	}
	else if (age >= 13 && age <= 18) {
		stringAnswer = "You are igneranus";
	}
	else if (age >= 19 && age <= 25) {
		cout << "Did you go to college? Yes or No >>";
		cin >> college;
		if (college == "Yes")
		{
			stringAnswer = "I'm broke.";
		}
		else
		{
			stringAnswer = "You are unitellegent.";
		}
	}
	else if (age >= 26 && age <= 30) {
		stringAnswer = "Go out and enjoy life.";
	}
	else if (age >= 31 && age <= 40) {
		stringAnswer = "Are you even married?";
	}
	else if (age >= 41 && age <= 50) {
		stringAnswer = "You probably have kids.";
	}
	else if (age >= 51 && age <= 75) {
		stringAnswer = "You should probably retire.";
	}
	else if (age >= 76 && age <= 100) {
		stringAnswer = "You are way too old.";
	}

	cout << stringAnswer << endl;

	system("pause");
	return 0;


}