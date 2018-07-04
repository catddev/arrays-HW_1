#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	cout << "Задача № ";
	cin >> tn;

	switch (tn)
	{
	case 1:
	{
		//1.Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел,
		// после чего выводит количество ненулевых элементов.
		// Перед вводом каждого элемента должна выводиться подсказка с номером элемента

		int a[5];
		int k = 0;
		cout << "Ввод массива целых чисел. После ввода каждого числа нажмите <Enter>" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "a" << "[" << i << "]" << " -> ";
			cin >> a[i];
			if (a[i] != 0) k++;
		}
		cout << "В массиве " << k << " ненулевых элементов(-а)" << endl << endl;
	}
	break;
	case 2:
	{
		// 2. Написать программу, которая выводит минимальный элемент введенного с клавиатуры массива целых чисел.
		
		cout << "Введите в одной строке элементы массива (5 целых чисел) и нажмите <Enter>" << endl;
		int a[5];
		int min_v = INT_MAX;

		for (int i = 0; i < 5; i++)
		{
			cin >> a[i];
			if (a[i] < min_v) min_v = a[i];
		}
		cout << "Минимальный элемент массива: " << min_v << endl << endl;
	}
	break;
	case 3:
	{
		// 3. Написать программу, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива целых чисел.
		// Ниже приведен рекомендуемый вид экрана во время работы программы

		const int n = 10;
		int a[n];
		cout << "Введите в одной строке элементы массива (10 целых чисел) и нажмите <Enter>" << endl;
		int k = 0;
		int sum = 0;

		for (int i = 0; i < 5; i++)
		{
			cin >> a[i];
			if (a[i] != 0)
			{
				sum = sum + a[i];
				k++;
			}
		}
		cout << "Сумма элементов массива: " << sum << endl;
		cout << "Количество ненулевых элементов: " << k << endl;
		cout << "Среднее арифметическое ненулевых элементов: " << double(sum / k) << endl << endl;
	}
	break;
	case 4:
	{

	}
	break;
	case 5:
	{

	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	case 11:
	{

	}
	break;
	case 12:
	{

	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}