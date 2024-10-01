// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Output hello world and welcome to my program
    std::cout << "Hello World!\n";
    std::cout << "Welcome to my program\n";

    //Intitialise integer variables
    int a = 0;
    int b = 3;

    //Ask user to enter a number
    std::cout << "Please enter a number: ";

    //read in the user's number into varable a
    std::cin >> a;

    //Ask user to enter a number
    std::cout << "Please enter a second number: ";

    //read in the user's number into varable b
    std::cin >> b;

    //Sum of a and b
    int c = a + b;

    //output variable a to the command line
    std::cout << "Your number is " << c << std::endl;

    return 0;
}
