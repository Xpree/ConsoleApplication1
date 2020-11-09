// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void helloWorldFunc() 
{
	int x;
	cout << "Hur många loopar vill du köra?: ";
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
	cout << "Hur många loopar vill du köra?: ";
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
	cout << "Hur många loopar vill du köra?: ";		
	cin >> x;	//input värdet blir till x
	do {
		cout << "Hello World (do)\n";
		i = i + 1;
	} 
	while (i < x);
}

int main()
{
    //anropar på functionerna
	helloWorldFunc();
	helloWorldWhile();
	helloWorldDo();
}