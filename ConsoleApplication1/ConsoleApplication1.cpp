// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void helloWorldFunc() 
{
	int x;
	cout << "Hur m�nga loopar vill du k�ra?: ";
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cout << "Hello World!\n";
	}
}

void helloWorldWhile()
{
	int i = 0;
	int x;
	cout << "Hur m�nga loopar vill du k�ra?: ";
	cin >> x;
	while (x > i) 
	{
		cout << "Hello World (While)\n";
		i = i + 1;
	}
}

void helloWorldDo()
{	
	int x;
	int i = 0;
	cout << "Hur m�nga loopar vill du k�ra?: ";		
	cin >> x;	//input v�rdet blir till x
	do {
		cout << "Hello World (do)\n";
		i = i + 1;
	} 
	while (i < x);
}

int main()
{
    //anropar p� functionerna
	helloWorldFunc();
	helloWorldWhile();
	helloWorldDo();
}