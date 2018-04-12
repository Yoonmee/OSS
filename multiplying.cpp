#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 9; i++)
	{
		cout << i + 1 << "´Ü : " << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << i + 1 << "*" << j + 1 << " = " << (i + 1)*(j + 1) << endl;
		}
		cout << endl;
	}
	for (int i = 1;i<10; i++)
	{
		cout << i * 9 << endl;
	}
}