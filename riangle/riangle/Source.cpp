#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int rightTriangleCalcA(double b, double c)
{
	double aMissSide;
	aMissSide =sqrt((c * c) - (b * b));

	return aMissSide;

}
int rightTriangleCalcB(double a, double c)
{
	double aMissSide;
	aMissSide =sqrt ((c * c) - (a * a));

	return aMissSide;

}
int rightTriangleCalcC(double a, double b)
{
	double aMissSide;
	aMissSide = (b * b) + (a * a);

	return aMissSide;

}
int rightTriangleMissSide()
{
	double result;
	double a = 0;
	double b = 0;
	double c = 0;
	int miss;

	cout << "Which side are you missing?\n1 - a\n2 - b\n3 - c\n >> ";
	cin >> miss;

	if (miss == 1)
	{
		cout << "What is your b side length? >> ";
		cin >> b;
		cout << "What is your c side length? >> ";
		cin >> c;

		result = rightTriangleCalcA(b, c);
		cout << "Your missing side = " << result << endl;
	}
	else if (miss == 2)
	{
		cout << "What is your a side length? >> ";
		cin >> a;
		cout << "What is your c side length? >> ";
		cin >> c;

		result = rightTriangleCalcB(a, c);
		cout << "Your missing side = " << result << endl;
	}
	else if (miss == 3)
	{
		cout << "What is your a side length? >> ";
		cin >> a;
		cout << "What is your b side length? >> ";
		cin >> b;

		result = rightTriangleCalcC(a, b);
		cout << "Your missing side = " << result << endl;
	}
	return 0;

}
int rightTrianglePerimeter()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double perimeter;

	cout << "What is your A side length? >> ";
	cin >> a;
	cout << "What is your B side length? >> ";
	cin >> b;
	cout << "What is your C side length? >> ";
	cin >> c;

	perimeter = a + b + c;

	cout << "The perimeter = " << perimeter << endl;

	return 0;

}
int rightTriangleSolveQ()
{
	int choice;

	cout << "Would you like to \n1 - Find a missisng side.\n2 - Find perimeter\n >> ";
	cin >> choice;

	if (choice == 1)
	{
		rightTriangleMissSide();
	}
	else if (choice == 2)
	{
		rightTrianglePerimeter();
	}
	else
		cout << "Please stop messing around!";
	return 0;
}
int isocelesMissSide()
{
	double result;
	double a = 0;
	double b = 0;
	double c = 0;
	int miss;

	cout << "Which side are you missing?\n1 - a\n2 - b\n3 - c\n >> ";
	cin >> miss;

	if (miss == 1)
	{
		cout << "What is your b side length? >> ";
		cin >> b;
		cout << "What is your c side length? >> ";
		cin >> c;

		result = rightTriangleCalcA(b, c);
		cout << "Your missing side = " << result << endl;
	}
	else if (miss == 2)
	{
		cout << "What is your b side length? >> ";
		cin >> a;
		cout << "What is your c side length? >> ";
		cin >> c;

		result = rightTriangleCalcB(a, c);
		cout << "Your missing side = " << result << endl;
	}
	else if (miss == 3)
	{
		cout << "What is your b side length? >> ";
		cin >> a;
		cout << "What is your c side length? >> ";
		cin >> b;

		result = rightTriangleCalcC(a, b);
		cout << "Your missing side = " << result << endl;
	}
	return 0;


}
int isocelesPerimeter()
{
	double a;
	double b;
	double c;
	double result;

	cout << "What is your a side >> ";
	cin >> a;
	cout << "What is your b side >> ";
	cin >> b;
	cout << "What is your c side >>";
	cin >> c;

	result = a + b + c;

	cout << "Your perimeter is " << result;
	return 0;
}
int isocelesQ()
{
	int choice;
	cout << "Would you like to find,\n 1 - A missing side\n 2 - Perimeter\n >> ";
	cin >> choice;

	if (choice == 1)
	{
		isocelesMissSide();
	}
	else if (choice == 2)
	{
		isocelesPerimeter();
	}
	else
		cout << "Die";
	return 0;
}
int perimeterEqual()
{
	double side;
	double perimeter;

	cout << "Name one side length >> ";
	cin >> side;

	perimeter = side + side + side;

	cout << "Your perimeter is " << perimeter << endl;

	return 0;

}
int equalMissSide()
{
	double side;
	double missSide;

	cout << "Name one side length >> ";
	cin >> side;

	missSide = side;

	cout << "Your missing side is " << missSide << endl;

	return 0;
}
int equalateralQ()
{
	int choice;

	cout << "What are you solving for\n1 - Missing Side\n2 - Perimeter\n >> ";
	cin >> choice;

	if (choice == 1)
	{
		equalMissSide();
	}
	else if (choice == 2)
	{
		perimeterEqual();
	}
	else
		cout << "DIE";
	return 0;
}
int main()
{
	int choiceTriangle;

	cout << "Welcome to the triangle calculator" << endl;
	cout << "What type of triangle are you solving for?" << endl;
	cout << "1 - Right Triangle\n2 - Isoceles\n3 - Equilateral\n >> ";
	cin >> choiceTriangle;

	if (choiceTriangle == 1)
	{
		rightTriangleSolveQ();
	}
	else if (choiceTriangle == 2)
	{
		isocelesQ();
	}
	else if (choiceTriangle == 3)
	{
		equalateralQ();
	}
	else
	cout << "LEAVE NOW";



	system("pause");
	return 0;
}