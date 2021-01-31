#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

void displayMessage(int &hellotimes)
    {
        for (int i = 0; i < hellotimes; i++)
            {
                cout << i + 1 <<". Hello World" << endl;
            }
    }

void getNumberFromUser(int &hellotimes)
    {
        int userInput;
        cout << "How many times do you want to print Hello World?: " << endl;
        cin >> userInput;

        if (userInput <= 0 || userInput > 10)
            {
                qFatal("Invalid input");
            }
        else
            {
                hellotimes = userInput;
            }

    }

int main(int argc, char *argv[])
    {
        QCoreApplication a(argc, argv);
        int hellotimes;
        getNumberFromUser(hellotimes);
        displayMessage(hellotimes);
        return a.exec();
    }
