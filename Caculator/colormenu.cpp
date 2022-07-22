#include<iostream>
#include <Windows.h> //color
#include <conio.h> 
#include "colormenu.h"
#include "cacrun.h"

using namespace std;

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void menu()
{
    int Set[] = { 7,7,7,7 }; //Default colors
    int counter=2;
    char key;
    char ans;

    do {

        for (int i = 0;;) //;; for unlimited conditions
        {

            gotoxy(10, 5);
            color(Set[0]);
            cout << "1. Basic Calculator";

            gotoxy(10, 6);
            color(Set[1]);
            cout << "2. BMI Calculator";

            gotoxy(10, 7);
            color(Set[2]);
            cout << "3. Arithmetic Caculator";

            gotoxy(10, 8);
            color(Set[3]);
            cout << "4. Exit";


            key = _getch();

            if (key == 72 && (counter >= 2 && counter <= 4)) //72 upkey
            {
                counter--;
            }

            if (key == 80 && (counter >= 1 && counter <= 3)) //80 down
            {
                counter++;
            }


            //enter is clicked highlight on 1 will run code
            if (key == '\r') //enter
            {
                if (counter == 1)
                {
                    cout << "\n\nOpening Menu 1: Basic Calculator...\n";
                    return cac();
                }

                if (counter == 2)
                {
                    cout << "\n\nOpening Menu 2: BMI Calculator...\n";
                    return bmi_cac();
                }

                if (counter == 3)
                {
                    cout << "\n\nOpening Menu 3: Arithmetic Caculator...\n";
                    return ArithmeticCaculator();
                }

                if (counter == 4)
                {
                    cout << "\n\nOpening Menu 4: Exit...\n";
                    break;
                }
            }

            Set[0] = 7;
            Set[1] = 7;
            Set[2] = 7;
            Set[3] = 7;

            if (counter == 1)
            {
                Set[0] = 12;
            }
            if (counter == 2)
            {
                Set[1] = 12;
            }
            if (counter == 3)
            {
                Set[2] = 12;
            }
            if (counter == 4)
            {
                Set[3] = 12;
            }
        }
        cout << "Do you want to exit (Y/N)?\n";
        cout << "You must type a 'Y' or an 'N' :";
        cin >> ans;

    } while (ans != 'y' && ans != 'Y');
    return;
}