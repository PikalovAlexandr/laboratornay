﻿/*************************************************************
	Практическое занятие №2. 
	
	Инструкции (условная, выбор, циклы)
	Логические операторы, тернарный (условный) оператор 
	Побитовые операторы.
							
*************************************************************/

#include <iostream>
using namespace std;
#include<clocale>


#define	  stop __asm ("nop");	//с помощью директивы препроцессора задаем макроподстановку
/***************************************************************/
int main()
{
	setlocale(LC_ALL, "Russian");
	// ********************************************************
		//Задание 1. Условная инструкция if-else.Переключатель switch 

		//Задание 1.1 Напишите фрагмент кода, который переводит код символа, 
		//хранящийся в переменной ch в противоположный регистр.
		//Требуется предусмотреть проверку ситуации, когда пользователь ввел цифру
		//или нажал другую клавишу, которой символ не соответствует

		//Подсказка: работаем только с символами английского алфавита, для которого в таблице
		// кодов ASCII код каждой буквы нижнего регистра на 0x20 больше кода 
		// соответствующей буквы верхнего регистра.

		//Обратите внимание, что в кодировочной таблице между буквами верхнего и нижнего регистра 
			//расположены некоторые иные символы
	{
		// Сформируйте значение переменной ch с помощью потока ввода
//		char ch;
//		cout << "ch=:";

//		cin >> ch;

//		if (ch >= 'A' && ch <= 'Z') {
//			ch += 0x20; //... изменили регистр
//		}
//		else if (ch >= 'a' && ch <= 'z') {
//			ch -= 0x20; //... изменили регистр
//		}
//		else {
//			cout << "Введено не верное значение или недопустимый символ";
        }
//		cout << ch << '\n';

		// здесь проверили в отладчике значение или вывели "эхо" на экран
        stop

			//Задание 1.2 Напишите фрагмент кода, который реализует с помощью if (if/else)
			//следующую логику: 
            //если x меньше или равен 0, y=0
			//если x больше 0 но меньше 1, то y=x,
			//если x больше или равен 1, то y=1
			//Подумайте: какого типа должны или могут быть x и y?
		{
//            double x, y;
//            if (x <= 0) { //x меньше или равен 0, y=0
//				y = 0;
//			}
//            else if (x < 1) { //x больше 0 но меньше 1, то y=x
//				y = x;
//			}
//			else {
//                y = 1; //x больше или равен 1, то y=1
//			}

   stop
		}

			//Задание 1.3 Напишите фрагмент кода, который реализует с помощью switch
			//следующую логику: 
			//в переменной cInput типа char дано значение символа,введенного любым способом.
			//Если введен символ 'y' (т.е. yes) в любом регистре, то присвоить
			//переменной у значение переменной x
			//Если введен символ 'n' (т.е. no) в любом регистре, то присвоить
			//переменной у значение (x * 2)
			//Если любой другой симол, то вывести сообщение об ошибке
		{
			int x = 10, y = 3;
            char cInput;
			cout << "Enter y/n:";
            cin >> cInput;
            switch (cInput)
			{
			case 'y':
			case 'Y':
				y = x;
				break;
			case 'n':
			case 'N':
				y = x * 2;
				break;
			default:
				cout << "ERROR" << '\n';
				break;
			}
			cout << "y = " << y << '\n';
			//сформировали значение
			//switch
           stop
		}
	// ********************************************************
		//Задание 2. Логические операторы.
		// В Григорианском календаре (которым мы все пользуемся) високосный год
		// определяется по следующему алгоритму: високосным является каждый четвертый год,
		// но каждый сотый високосным НЕ является, при этом каждый 400-й год все таки 
		// високосный. Т.е. 1823 - не високосный, 1824 - високосный, 1900 - не високосный,
		// 2000 - високосный.
		// Напишите фрагмент кода, такой что:
		// логическая переменная isLeapYear принимает значение true, если год, заданный
		// переменной year - високосный.

		// Примечание: НЕ надо пользоваться инструкциями if-else, switch и тернарным оператором 
		//             НАДО написать логическое выражение в одну строку.
		//(*)если возникнут затруднения при решении задачи, то можно сначала решить ее с помощью if-else,
		// а потом уже выполнить предложенное задание.
	{
        //int year = 1823;
        int year = 1824;
		//int year = 1900;
		//int year = 2000;

		//Вычислили значение 
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
        //bool isLeapYear = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
		// проверили значение в отладчике
        stop
	}


	// *******************************************************
		//Задание 3. Тернарный оператор.  
		//С помощью тернарного оператора найдите максимальное из трех значений
		//(*)если возникнут затруднения при решении задачи, то можно сначала решить ее с помощью if-else,
		// а потом уже выполнить предложенное задание.
	{
int a,b,c;
cin >> a >> b >> c;
cout << "max=" << (a > b) && (b > c) ? a : (b > c) ? b : c;
        stop
	}

	// ********************************************************
		//Задание 4. Циклы.

		//Задание 4.1 Напишите фрагмент кода, который реализует с помощью for
		//следующую логику: найти сумму заданного диапазона целых чисел.
		//Задайте границы с помощью потока ввода (или прямо в коде).
		//Предусмотрите защиту от ввода нижней границы больше, чем верхней.
	{
int n,m,k;
cout << "Введите числа  целые положительные числа n и m, (m>n)";
cin >> n >> m;
k=0;
if (n <= m)
{
for (int i = n; i<m+1; i++)
    {
k += i;
    }
}
cout << k;
		//1) сформировать границы диапазона

		//2) проверить корректность значений

		//3) вычислить сумму

		//4) проверить в отладчике значение (или вывести на консоль)

        stop
	}


	//Задание 4.2 Напишите фрагмент кода, который реализует с помощью do-while
	//следующую логику: на каждой итерации цикла ввести с консоли целое значение
	// и покинуть цикл, если значение удовлетворяет условию: 
	// значение больше или равно 10 и четное.

	//Замечание: проверка на четность с использованием операции остатка от деления
	//нацело генерирует очень неэффективный код. Попробуйте реализовать альтернативный
	//вариант.

	{
            int a;
                do
                {
                cin >> a;
                a++;
                } while (!((a >= 10) && ((a & 1) == 0)));
                cout << "Out of \"while-loop\"." << endl
                    << "a = " << a << endl;
        stop
	}

	//Задание 4.3 Напишите фрагмент кода, который реализует с помощью while
	//следующую логику: исходно int x = 0; 
	//на каждой итерации x=x+1, sum=sum+1/x
	//найти значение x, при котором sum>1.7
    { int x = 0;
          double sum = 0;
          while (sum * 10 <= 17)
            {
                x++;
                sum = sum + 1 / static_cast<double>(x);
            }
            cout << "Out of \"while-loop\"" << endl
                << "x = " << x << endl
                << "sum = " << sum << endl;

            system("pause");
            return 0;//код завершения приложения
        }	// Конец функции main()
        stop
	}
	// ********************************************************
	//Задание 5 Побитовая арифметика (and, or, xor, not), сдвиги.
		//5.1 
	{
		//а)Задайте значение пременной типа char с помощью потока ввода.
		//(для отладки можно задать значение с помощью числового литерала в 2-чном или 16-ричном коде)
char val, mask;
cout << "Введите код символа P в двоичном виде 0b 0000 0000 0000 0000 0000 0000 0011 0010" << endl;
//cin >> val;
    val = 0b0000000000000000000000000110010;
   mask = 0b1111111111111111111111110111111;
 val = val & mask;//б)	обнулите значение его 6-го бита
 cout << val << endl;
  stop

			//в)	определите значение его 5го бита

            //stop
			//г)	установите в 1 бит на 4-ой позиции   

            //stop
	}

	//5.2 
	{
		//Если число кодируется более чем одним байтом, то важно, 
		//в каком порядке байты записываются в памяти компьютера или передаются по линиям связи.			//В архитектуре x86  используется порядок от младшего к старшему (англ. little-endian)
		//Для протоколов TCP/IP стандартным является порядок от старшего к младшему (англ. big-endian)  
		//Задайте значение x, например:

		int x = 0xA1B2C3D4;
		//байты числа в памяти следуют в порядке от младшего к старшему
		//поменяйте местами байты так, чтобы они следовали в памяти в обратном порядке 
		//(от старшего к младшему)
		//Например, если x= 0xA1B2C3D4, то после перестановки получим 0xD4C3B2A1

        //stop
	}
	// ********************************************************
		//Задание 6 Побитовая арифметика (and, or, xor, not), сдвиги.
		//6.1 
	{
		int y;//Задайте значение y, например, с помощью потока ввода 
		//или с помощью числового литерала в двоичном или 16-ричном виде

		//С помощью побитовых операторов и операторов сдвига:
		//выведите значение "y"  на консоль в двоичном виде, например:
		// если y==9, то 
		// 0 0 0 0 ...   0 0 1 0 0 1 (количество двоичных цифр зависит от платформы)

	}
	//6.2
	{
		//Выведите значение "y"  на консоль в двоичном виде, 
		//пропустив незначащие нули, например:
		// если y==9, то результат  1 0 0 1


	}
	//6.3 (*)
	{
		//Дана целая переменная
		int y;//Задайте значение y, например, с помощью потока ввода

	//"Сдвиньте" все единицы в этой переменной вправо, например:
	//было:   0100 1111 0000 0000 0110 1111 0000 0010
	//стало:  0000 0000 0000 0000 0000 1111 1111 1111
	//Выведите на консоль полученное значение в двоичном виде ( можно на печати не разделять тетрады пробелом)

        //stop
	}
	//6.4 (*)
	//Какие операции следует применить к заданному ниже операнду sNum для
	//того, чтобы переменная sRes приняла требуемое значение?

	//Замечание 1: значения подобраны таким образом, что в каждом случае достаточно
	//использовать один оператор (и при необходимости маску) 

	//Замечание 2: посредством оператора xor (подобрав соответствующую маску)
	//можно получить любое значение => этот оператор предполагается использовать
	//в том случае, когда все остальные уже "не сасают" 

        {//short sNum = 0x8008;
		short sRes;

		//0x7ff7

		//0x8ff8

		//0x0008

		//0x7f08

		//0xf001

		//0x0010

        //stop
    }


	return 0;//код завершения приложения
	}	// Конец функции main()

