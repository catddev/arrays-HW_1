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
		//1.Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, после чего выводит количество ненулевых элементов.
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
		// Ниже приведен рекомендуемый вид экрана во время работы программы



	}
	break;
	case 3:
	{

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