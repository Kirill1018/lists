#include "list.cpp"
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
int main()
{
	setlocale(LC_ALL, "ru");
	int size = 10;
	char* text = new char[size];
	completion(text, size);
	print(text, size);
	input();
	entry(text);
	removal();
	withdrawal(text);
}
void completion(char* text, int size)
{
	text[0] = 'h';
	text[1] = 'e';
	text[2] = 'l';
	text[3] = 'l';
	text[4] = 'o';
	text[5] = ',';
	text[6] = ' ';
	text[7] = '"';
	text[8] = 'c';
	text[9] = '"';
}
void print(char* text, int size)
{
	int x = 0;//������ ������� �������
	while (x < size)
	{
		SetColor(1, 0);
		cout << text[x];
		x++;
	}
	cout << endl;
}
void input()
{
	SetColor(2, 0);
	cout << "����������� ������ - ";
}
void entry(char* text)
{
	char symbol;
	cin >> symbol;
	int x;
	SetColor(3, 0);
	cout << "������ �������=";
	cin >> x;
	text[x] = symbol;
}
void removal()
{
	SetColor(4, 0);
	cout << "������ ���������� �������=";
}
void withdrawal(char* text)
{
	int x;
	cin >> x;
	delete &text[x];
}