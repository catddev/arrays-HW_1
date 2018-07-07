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
			cout << "a[" << i << "] -> ";
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
		// 3. Написать программу, которая вычисляет среднее арифметическое ненулевых элементов
		// введенного с клавиатуры массива целых чисел.
		// Ниже приведен рекомендуемый вид экрана во время работы программы

		const int n = 10;
		int a[n];
		cout << "Введите в одной строке элементы массива (10 целых чисел) и нажмите <Enter>" << endl;
		double k = 0;
		double sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] != 0)
			{
				sum += a[i];
				k++;
			}
		}
		cout << "Сумма элементов массива: " << sum << endl;
		cout << "Количество ненулевых элементов: " << k << endl;
		cout << "Среднее арифметическое ненулевых элементов: " << sum / k << endl << endl;
	}
	break;
	case 4:
	{
		// 4. Написать программу, которая вычисляет среднее арифметическое элементов массива
		// без учета минимального и максимального элементов массива.
		// Ниже приведен рекомендуемый вид экрана во время работы программы

		const int n = 10;
		int a[n];
		cout << "Введите массив(10 целых чисел в одной строке) ";
		int k = 0;
		double sum = 0;
		int min_v = INT_MAX;
		int max_v = INT_MIN;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] < min_v) min_v = a[i];
			else if (a[i] > max_v) max_v = a[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (a[i] > min_v && a[i] < max_v)
			{
				sum += a[i];
				k++;
			}
		}
		cout << sum << " " << k << endl;
		cout << "Минимальный элемент: " << min_v << endl;
		cout << "Максимальный элемент: " << max_v << endl;
		cout << "Среднее арифметическое без учета min и max значений: " << double(sum / k) << endl << endl;
	}
	break;
	case 5:
	{
		// 5. Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве.
		// Массив должен вводиться во время работы программы.

		const int n = 10;
		int a[n];

		int x;
		cout << "Введите число для поиска в массиве:" << endl;
		cin >> x;

		cout << "Введите значения элементов массива, после каждого нажимая <Enter> :" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == x)
			{
				cout << "число находится в массиве" << endl << endl;
				break;
			}
			else if (i == 9 && a[i] != x) cout << "число не находится в массиве" << endl << endl;
		}
	}
	break;
	case 6:
	{
		// 6. Написать программу, которая вычисляет,
		// сколько раз введенное с клавиатуры число встречается в массиве.

		const int n = 10;
		int a[n];
		int count = 0;
		int x;
		cout << "Введите число для поиска в массиве:" << endl;
		cin >> x;

		cout << "Введите значения элементов массива:" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == x) count++;
		}
		cout << "число встречается в массиве " << count << " раз/-a" << endl << endl;
	}
	break;
	case 7:
	{
		// 7. Написать программу, которая проверяет,
		// есть ли во введенном с клавиатуры массиве элементы с одинаковым значением.

		const int n = 10;
		int a[n];
		bool flag = false;

		cout << "Введите значения элементов массива:" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; i++)
		{
			for (int k = i + 1; k < n; k++)
			{
				if (a[i] == a[k])
				{
					flag = true;
					break;
				}
			}
		}
		if (flag) cout << "в массиве есть элементы с одинаковым значением" << endl << endl;
		else cout << "в массиве нет элементов с одинаковым значением" << endl << endl;
	}
	break;
	case 8:
	{
		// 8. Написать программу, которая определяет количество учеников в классе
		// чей рост превышает средний.

		const int n = 5;
		int a[n];
		int count = 0;
		double sum = 0;
		int i = -1;

		cout << "Введите рост (см) 5 учеников и нажмите Enter" << endl;
		cout << "Для завершения введите 0 и нажмите Enter" << endl;
		while (a[i]!=0)
		{
			i++;
			cin >> a[i];
			sum += a[i];
		}
	
		for (int i = 0; i < n; i++)
		{
			if (a[i] > double(sum / n)) count++;
		}
		cout << "Средний рост: " << double(sum / n) << " см" << endl;
		cout << "У " << count << " человек рост превышает средний" << endl << endl;
	}
	break;
	case 9:
	{
		// 9. Написать программу, которая обрабатывает результаты экзамена.
		// Для каждой оценки программа должна вычислить процент от общего количества оценок.

		int a[4];
		float sum = 0;
		float percent;

		cout << "Введите исходные данные:" << endl;

		int i, j;
		for (i = 0, j=5; i < 4; i++, j-=2)
		{
			cout << "оценок " << j << " -> ";
			cin >> a[i];
			sum += a[i];
		}
		cout << endl;

		cout << "Результаты экзамена:" << endl;
		for (i = 0, j = 5; i < 4; i++, j -= 2)
		{
			percent = a[i] / sum * 100;
			cout << "оценок " << j << " -> " << percent << "%" << endl;
		}
		cout << endl;
	}
	break;
	case 10:
	{
		// 10. Дан массив символов s1,..sn.Подсчитать сколько раз встречается в массиве символ К

		const int n = 10;
		char a[n];
		int count = 0;
		char K;
		cout << "Введите символ:" << endl;
		cin >> K;

		cout << "Введите символы массива:" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == K) count++;
		}
		cout << "символ " << K << " встречается в массиве " << count << " раз/-a" << endl << endl;
	}
	break;
	case 11:
	{
		// 11. Дан массив символов S1,...,Sn.
		// Распечатать все буквы, непосредственно перед которыми находится буква С.

		const int n = 10;
		char a[n];
		char C='C';

		cout << "Введите 10 символов массива:" << endl;
		cout << "Для завершения введите 0 и нажмите Enter" << endl;

		int j = 0;
		while (j<10)
		{
			j++;
			cin >> a[j];
		}

		for (int i = 0; i < n; i++)
		{
			if (a[i] == C) cout << a[i + 1] << " ";
		}
		cout << endl << endl;

		// почему-то если исп-ть for вместо while,
		// в ответе появится неизвестный символ, когда 'С' в конце массива.
		/*for (int i = 0; i < n; i++)
		{
		cin >> a[i];
		}*/
	}
	break;
	case 12:
	{
		// 12. Даны действительные числа а1,..a16. Получить min(a1*a9,a2*a10,...,a8*a16)

		const int n = 16;
		double a[n];

		for (int i = 1; i <= n; i++)
		{
			cout << "a[" << i << "] = ";
			cin >> a[i];
		}

		double min_v = INT_MAX;
		int element1;
		int element2;

		for (int i = 1; i <= n/2; i++)
		{
			if (a[i] * a[i + n / 2] < min_v)
			{
				min_v = a[i] * a[i + n / 2];
				element1 = i;
				element2 = i + n / 2;
			}		
		}
		cout << "минимальное значение = " << min_v;
		cout << " (произведение пары элементов a[" << element1 << "] и a[" << element2 << "] )" << endl << endl;
	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}