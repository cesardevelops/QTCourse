#include <QCoreApplication>
#include <QDebug>
#include <string>
#include <iostream>
using std::string;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    struct person
        {
            string firstName = "Cesar";
            string middleName = "Alejandro";
            string lastName = "Montero Orozco";
            unsigned short int age = 0;
            unsigned short int height = 0;
            bool isEmployed = false;
        };

    person Cesar;
    Cesar.age = 39;
    Cesar.firstName = "Cesar";
    Cesar.middleName="Alejandro";
    Cesar.lastName = "Montero";
    Cesar.age = 39;
    Cesar.height = 181;
    Cesar.isEmployed = true;


    cout  << "My name is ";
    cout  << Cesar.firstName << " ";
    cout  << Cesar.middleName << " ";
    cout  << Cesar.lastName << ". " << endl;
    cout <<"I am " << Cesar.age << " years old." << endl;
    cout << "I am " << Cesar.height << " cm in height." << endl;
    if (Cesar.isEmployed){cout << "I am employed." << endl;} else { cout << "I am unemployed" << endl;}

    return a.exec();
}
