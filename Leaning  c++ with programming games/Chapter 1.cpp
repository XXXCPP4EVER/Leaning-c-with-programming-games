
//����� 1 ���� "���������� ����". ����, ����������, ����������� ����-�����
//
//#include <iostream> // ��������� �������������. ��������� ����������� ������ � ����������� �� ��������� ���������, ������������ ����.
//
//using namespace std; //������������ ����
//
//int main() //�������. ������� � ������� ������������ ����. ������� ������ ��������� ������������ ������ � ������� ��������. 
//
// ������� main �������� ����� ���������. 
//
//{
//	cout << "Game Over" << endl; //cout - ��� ������, ������� ��������� ��� �������� ������ � ����� ������������ ������
//
//	// << �������� ������ � cout. ��������.
//	
//	//��� ���������� ������������� ;
//
//	return 0; //������ ��������, ��� ��������� ����������� � ������� ������.
//}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// �����������, �� ��� ����������� ����������� ����������

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
//		cout << "������� ������ �����" << endl;
//
//		cin >> first_number;
//
//		cout << "������� ������ �����" << endl;
//
//		cin >> second_number;
//
//		cout << "������� ����" << endl;
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
//			cout << "�� ������� ���-�� �� ��� ��� ����� ������ ����� = 0" << endl;
//		
//	}
//
//	return 0;
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------

// ���� ������ �����

#include "Chapter1.h"

void Hello()
{
	cout << "����� ���������� � ���� ������ �����" << endl;
	cout << " " << endl;
	cout << "��� ����� ������� ����� �� 1 �� 100 ������������" << endl;
	cout << " " << endl;
	cout << "� ������ ���� ��� ����������� 100$" << endl;
	cout << " " << endl;
	cout << "� ������ �������� ��������d� ����� ����� ����������, �� ������ ��� �������� � ��������� �� 1 �� 20" << endl;
	cout << " " << endl;
	cout << "����� �� �������� �����, ��� ����� ��������� 50 $" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

void generate_secret_num()
{
	
	srand(static_cast <unsigned int> (time(0))); // ��������� ��������� ��������� �����
	secret_number = rand() % 100 + 1; // ���������� ��������� ����� ����� 1 � 100

}

void input_num()
{
	cout << "������� ����� �� 1 �� 100" << endl;
	cout << " " << endl;
	cout << "���������� ����� = " << scores << endl;
	cout << " " << endl;
	cin >> guess_number;
}

void game_logic()
{
	if (guess_number > secret_number)
	{
		cout << "������� �����" << endl;
		cout << " " << endl;
		scores -= rand() % 20 + 1;
	}
	else
	{
		cout << "������� ����" << endl;
		cout << " " << endl;
		scores -= rand() % 20 + 1;
	}
}

void Game_End()
{
	scores += 50;

	cout << "�� �������!!!" << endl;
	cout << " " << endl;
	cout << "���������� ����� = " << secret_number << endl;
	cout << " " << endl;
	cout << "���������� ������� = " << tries << endl;
	cout << " " << endl;
	cout << "���  ��������� 50 $" << endl;
	cout << " " << endl;
	cout << "���������� ����� = " << scores << "$" << endl;
	cout << " " << endl;
	cout << "C������ �� ����!!!!! " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

void one_game_circle()
{
	do
	{
		tries++; // ������� �������
		input_num();
		game_logic();
		
	} while (secret_number != guess_number); //���� �����������, ���� �� �� ������� �����
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
	setlocale(LC_ALL, "Ru"); //�������� ������������� ���������

	main_circle();

	return 0;
}