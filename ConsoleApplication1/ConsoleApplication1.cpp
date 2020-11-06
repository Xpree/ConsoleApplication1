// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void helloWorldFunc(int x) 
{
	for (int i = 0; i < x; i++)
	{
		cout << "Hello World!\n";
	}
	return;
}

int main()
{
    std::cout << "Hello World!\n";
	helloWorldFunc(5);
}