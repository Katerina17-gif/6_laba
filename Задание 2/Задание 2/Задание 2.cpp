#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int m;

	cout << "Введите колличество элементов в массиве: ";
	cin >> m;

	int* M = new int[m];



	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		M[i] = -20 + rand() % 200;

	}

	for (int i = 0; i < m; i++)
	{

		cout << "[" << i + 1 << "] = " << M[i] << endl;


	}

	cout << "Отсортированный массив: \n";

	int temp;

	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (M[j] > M[j + 1]) {
				// меняем элементы местами
				temp = M[j];
				M[j] = M[j + 1];
				M[j + 1] = temp;
			}
		}
	}

	// Вывод отсортированного массива на экран
	for (int i = 0; i < m; i++)
	{
		cout << "[" << i + 1 << "] = " << M[i] << endl;
	}

	//Пункт б
	int a;
	cout << "Введите элемент а: ";
	cin >> a;

	for (int i = m - 1; i >= 0; i--) {
		if (a != M[i] && a > M[0] && a < M[m - 1])
		{
			if (M[i] < a) {
				cout << "[" << i + 1 << "] = " << M[i];
				break;
			}

		}
	}

	for (int i = 0; i < m; i++) {
		if (a != M[i] && a > M[0] && a < M[m-1])
		{
			if (M[i] > a) {
				cout << "\n[" << i + 1 << "] = " << M[i];
				break;
			}
			
		}
	}

	

	

	return 0;
}