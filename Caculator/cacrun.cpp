#include <windows.h> //color
#include "cacrun.h"
#include <conio.h> 
#include "clearscreen.h"
#include "colormenu.h"

#include <cmath>
#include <algorithm> // lower_bound, upper_bound
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;
float num1, num2;
float result = 0;
char op;

void SetColor(int value) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void cacmenu()
{
	SetColor(2);
	string s = "\n\nEnter (NUMBER)(+ - * /)(NUMBER)\nThere is no need for spaces.\nFor example: 8+11\n";
	cout<<s;
}

void cac()
{
	Sleep(20);
	ClearScreen();
	cacmenu();
	cout << "\nEnter your caculations here: "; cin >> num1 >> op >> num2;

	switch (op)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
	}

	cout << "\nResult: " << result;
	cout << "\n\n";

}

void bmi_cac()
{
	int choice;
	float h, w;
	float bmi = 0;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Standard. (in/lb)\n";
		cout << " 2 - Metric. (cm/kg)\n";
		cout << " 3 - Return to menu.\n";
		cout << " 4 - Exit.\n";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Standard bmi Caculator\n\n";
			cout << "Enter height (in): "; cin >> h;
			cout << "Enter weight (lb): "; cin >> w;
			bmi = w / (h * h) * 703;
			cout << "Your BMI is: " << bmi;
			break;
		case 2:
			cout << "Metric bmi Caculator\n";
			cout << "Enter height (cm): "; cin >> h;
			cout << "Enter weight (kg): "; cin >> w;
			bmi = w / pow(h, 2)* 10000;
			cout << "Your BMI is: " << bmi;
			break;
		case 3:
			cout << "Return to Menu.\n";
			gameOn = false;
			ClearScreen();
			menu();
		case 4:
			cout << "Goodbye! VERITAS will miss you!\n";
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

		//classification

		char q;
		if (bmi < 18.5) {
		q = 1;
		}
		else if (bmi >= 18.5 && bmi < 25.0) {
			q = 2;
		}
		else if (bmi >= 25.0 && bmi < 30.0) {
			q = 3;
		}
		else if (bmi >= 30.0 && bmi < 35) {
			q = 4;
		}
		else {
			q = 5;
		}

		switch (q)
			{
			case 1: cout << " \nYou are under weighted\n\n" << endl; break;
			case 2: cout << " \nYou are a normal weighted\n\n " << endl; break;
			case 3: cout << " \nYou are over weighted\n\n" << endl; break;
			case 4: cout << "\nYou are obese\n\n" << endl; break;
			case 5: cout << " \nYou are gravely over weighted\n\n" << endl; break;
			}
}
	return;
}


//MENU 3 ARITHMETIC 

void distance()
{

}

void percom_explain()
{
	SetColor(2);
	cout << "WHAT IS PERMUTATION?\n\n";
	cout << "\nA permutation is an arrangement of objects in a definite order. \n The members or elements of sets are arranged here in a sequence or linear order.\n For example, the permutation of set A={1,6} is 2, such as {1,6}, {6,1}.\n\nFormula: nPr = (n!) / (n - r)!\n\n";

	cout << "WHAT IS COMBINATION?\n\n";
	cout << "\n	Combinations refer to the combination of n things taken k at a time without repetition. \n	For example, Choosing 3 desserts from a menu of 10. C(10,3) = 120.\n\n	Formula: nCr = n! / ((n ¡V r)! r!) n = the number of items\n\n\n";
}

void num()
{
	double n=0, m=0;
	cout << "Enter tuple("; cin >> n; cout << " ,"; cin >> m; cout << ")";



}

void word()
{

	
}



void per_comb()
{
	int choice;
	float h, w;
	float bmi = 0;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Number--Permutation/ Combination.\n";
		cout << " 1 - Words--Permutation/ Combination.\n";
		cout << " 3 - Return to menu.\n";
		cout << " 4 - Exit.\n";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			percom_explain();
			num();
			break;
		case 2:
			percom_explain();
			word();
			break;
		case 3:
			cout << "Return to Menu.\n";
			gameOn = false;
			ClearScreen();
			menu();
		case 4:
			cout << "Goodbye! VERITAS will miss you!\n";
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
	}
}

void ArithmeticCaculator()
{
	int choice;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Distance.\n";
		cout << " 2 - Permutation & Combination\n";
		cout << " 3 - Return to menu.\n";
		cout << " 4 - Exit.\n";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			distance();
			break;
		case 2:
			per_comb();
			break;
		case 3:
			cout << "Return to Menu.\n";
			gameOn = false;
			ClearScreen();
			menu();
		case 4:
			cout << "Goodbye! VERITAS will miss you!\n";
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
	}
}



/*https://www.youtube.com/watch?v=OegTA6QrbDw&t=4s */
