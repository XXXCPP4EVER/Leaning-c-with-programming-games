
//Глава 1 игра "утраченный клад". Типы, переменные, стандартный ввод-вывод
//
//#include <iostream> // директива препроцессора. Выполняет подстановку текста в зависемости от различных дирректив, заголовочный файл.
//
//using namespace std; //Пространство имен
//
//int main() //Функция. Единица в составе программного кода. Функция должна выполнять определенную работу и вернуть значение. 
//
// Функция main исходная точка программы. 
//
//{
//	cout << "Game Over" << endl; //cout - это объект, который требуется для отправки данных в поток стандартного вывода
//
//	// << отправка строки в cout. Оператор.
//	
//	//Все инструкция заканчиваются ;
//
//	return 0; //Способ сообщить, что программа завершилась в штатном режиме.
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Калькулятор, но без возможности выбрасывать исключения

//#include <iostream> 
//
//using namespace std;
//
//int main()
//
//{
//	setlocale(LC_ALL, "Ru");
//	int first_number, second_number, result;
//
//	char signle;
//
//	while (true)
//	{
//		cout << "Введите первое число" << endl;
//
//		cin >> first_number;
//
//		cout << "Введите второе число" << endl;
//
//		cin >> second_number;
//
//		cout << "Введите знак" << endl;
//
//		cin >> signle;
//
//		if (signle == '+')
//			cout << first_number + second_number << endl;
//	
//		if (signle == '-')
//			cout << first_number - second_number << endl;
//
//		if (signle == '*')
//			cout << first_number * second_number << endl;
//
//		if (signle == '/' && second_number != 0)
//		{
//			cout << first_number / second_number << endl; 
//		}
//
//		else
//			cout << "вы сделали что-то не так или ввели второе число = 0" << endl;
//		
//	}
//
//	return 0;
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------

// игра угадай число

#include "Chapter1.h"

void Hello()
{
	cout << "Добро пожаловать в игру Угадай число" << endl;
	cout << " " << endl;
	cout << "Вам нужно угадать число от 1 до 100 включительно" << endl;
	cout << " " << endl;
	cout << "В начале игры вам начисляется 100$" << endl;
	cout << " " << endl;
	cout << "С каждой попыткой количестdо денег будет отниматься, но каждый раз рандомно в диапозоне от 1 до 20" << endl;
	cout << " " << endl;
	cout << "Когда вы угадаете число, вам будет начислено 50 $" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

void generate_secret_num()
{
	
	srand(static_cast <unsigned int> (time(0))); // запускаем генератор случайных чисел
	secret_number = rand() % 100 + 1; // генерируем случайное число между 1 и 100

}

void input_num()
{
	cout << "Введите число от 1 до 100" << endl;
	cout << " " << endl;
	cout << "Количество денег = " << scores << endl;
	cout << " " << endl;
	cin >> guess_number;
}

void game_logic()
{
	if (guess_number > secret_number)
	{
		cout << "Слишком много" << endl;
		cout << " " << endl;
		scores -= rand() % 20 + 1;
	}
	else
	{
		cout << "Слишком мало" << endl;
		cout << " " << endl;
		scores -= rand() % 20 + 1;
	}
}

void Game_End()
{
	scores += 50;

	cout << "Вы угадали!!!" << endl;
	cout << " " << endl;
	cout << "Загаданное число = " << secret_number << endl;
	cout << " " << endl;
	cout << "Количество попыток = " << tries << endl;
	cout << " " << endl;
	cout << "вам  начислено 50 $" << endl;
	cout << " " << endl;
	cout << "Количество денег = " << scores << "$" << endl;
	cout << " " << endl;
	cout << "Cпасибо за игру!!!!! " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

void one_game_circle()
{
	do
	{
		tries++; // подсчет попыток
		input_num();
		game_logic();
		
	} while (secret_number != guess_number); //Цикл выполняется, пока мы не угадаем число
}

void main_circle()
{
	while (true)
	{
		Hello();
		generate_secret_num();
		one_game_circle();
		Game_End();
	}
}

int main()
{
	setlocale(LC_ALL, "Ru"); //Введение русскоязычной директивы

	main_circle();

	return 0;
}