#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
class list
{
public:
	list()
	{
		size = 0;//размер массива
	}
	int size = 30;
};
void completion(char *text, int size);
void print(char *text, int size);
void input();
void entry(char *text);
void removal();
void withdrawal(char *text);