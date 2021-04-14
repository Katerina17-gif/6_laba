#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int m;
	
	cout << "Введите колличество элементов в массиве: ";
	cin >> m ;

	int* M = new int[m];

	

	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		M[i] = -20 + rand() % 200;

	}

	for (int i = 0; i < m; i++)
	{

		cout << "[" << i + 1 << "] = " << M[i] << endl ;
		

	}

	cout << "Отсортированный массив: \n";

	int temp;

	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (M[j + 1] > M[j]) {
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
	
	
	return 0;
}