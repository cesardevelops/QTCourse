#include <QCoreApplication>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
    {
        QCoreApplication a(argc, argv);
        int short age;
        std::cout << "Please enter your age: "<< std::endl;
        std::cin >> age;
        std::cout << "Your age is: " << age << std::endl;

        return a.exec();
    }
