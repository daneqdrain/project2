#include <iostream>
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "ru");

	/* 
	
		��������������: + - / * % =-������������� 
		�������������: > < == <= >= !=
		����������: && ||
	   

	double one, two;
	char simvol;

	one = 0;
	two = 0;

	std::cout << "������� ������ �����: ";
	std::cin >> one;
	std::cout << "������� + ��� - , ��� * , ��� / ";
	std::cin >> simvol;
	std::cout << "������� ������ �����: ";
	std::cin >> two;

	if (simvol == '+')
	{
		std::cout << "�����: " << one + two;
	}
	else if (simvol == '-')
	{
		std::cout << "��������: " << one - two;
	}
	else if (simvol == '*')
	{
		std::cout << "���������: " << one * two;
	}
	else if (simvol == '/')
	{
		if (two == 0)
		{
			std::cout << "������� �� 0 ������!";
			return 0;
		}
		std::cout << "�������: " << one / two;
	}
	else
	{
		std::cout << "�������� ������!";
	}

	int agra = 0;

	std::cout << "������� ����� >> ";
	std::cin >> agra;
	
	if (agra > 0) std::cout << "������";

	else if (agra < 0) std::cout << "����";

	else std::cout << "�����";

	double rub{};
	int choose{};
	double dollar = 103.27, euro = 108.56, yuan = 13.58, farit = 37.0, yena = 0.68;
	double commision = 0.05;
	std::cout << "��������� �����\n������� ���-�� ������ ��� ������: ";
	std::cin >> rub;

	double commissionbank = rub * commision;
	rub = rub - rub * commision;

	std::cout << "�������� ������ ��� ������\n";
	std::cout << "1 - ������, 2 - ����, 3 - ����, 4 - �����, 5 - ����\n";
	std::cout << "����: ";
	std::cin >> choose;

	if (choose == 1)
	{
		std::cout << "����� �������: " << rub / dollar << "\n";
		std::cout << "���� ��������: " << commissionbank << " ������\n";
	}
	else if (choose == 1)
	{
		std::cout << "����� �������: " << rub / euro << "\n";
		std::cout << "���� ��������: " << commissionbank << " ������\n";
	}
	else if (choose == 1)
	{
		std::cout << "����� �������: " << rub / yuan << "\n";
		std::cout << "���� ��������: " << commissionbank << " ������\n";
	}
	else if (choose == 1)
	{
		std::cout << "����� �������: " << rub / farit << "\n";
		std::cout << "���� ��������: " << commissionbank << " ������\n";
	}
	else if (choose == 1)
	{
		std::cout << "����� �������: " << rub / yena << "\n";
		std::cout << "���� ��������: " << commissionbank << " ������\n";
	}
	else
	{
		std::cout << "Error\n";
	}*/

	/*int a{};
	int count;
	std::cin >> count;
	while (a < count)
	{
		std::cout << a << " ";
		a++;
		if (a == 5)
		{
			continue;
		}
		std::cout << " KEK ";
	}
	

	for (int i = 1; i <= 5; i++)
	{
		std::cout << i << " ";
	}

	int chislo = 0;
	int summa = 0;

	while(true)
	{
		std::cin >> chislo;
		if (chislo == 0)
		{
			break;
		}
		summa = summa + chislo;
	}
	std::cout << summa;*/

	float fuel = 300, ab = 0, bc = 0, ac = 0, k = 0, gryz = 0, maxdist = 0;

	std::cout << "\t������ ����������� ������� � �������\t";

	while (true)
	{
		std::cout << "\n������� ��� �����: ";
		std::cin >> gryz;
		if (gryz >= 0 && gryz <= 2000)
		{
			break;
		}
		else
		{
			std::cout << "\n������������ ���! �� �� ������ ���� ������ 0 � ������ 2000";
		}
	}

	if (gryz < 500 && gryz >= 0)
	{
		k = 1;
	}
	else if (gryz < 1000 && gryz >= 500)
	{
		k = 4;
	}
	else if (gryz < 1500 && gryz >= 1000)
	{
		k = 7;
	}
	else if (gryz <= 2000 && gryz >= 1500)
	{
		k = 9;
	}
	else
	{
		std::cerr << "Error";
	}

	maxdist = fuel / k;

	while (true)
	{
		std::cout << "\n������� ���������� �� A �� B: ";
		std::cin >> ab;
		std::cout << "\n������� ���������� �� B �� C: ";
		std::cin >> bc;
		
		if (ab >= 0 && bc >= 0 && ab <= maxdist && bc <= maxdist)
		{
			break;
		}
		else
		{
			std::cout << "\n������������ ����������! Min - 0, Max - " << maxdist;
		}
	}

	ac = ab + bc;

	float abfuel = ab * k;
	float bcfuel = bc * k;

	if (maxdist >= ac)
	{
		std::cout << "\n�������� ������� �� ���������!";
	}
	else
	{
		std::cout << "\n� ������ � ���������� ���������� ��: " << bcfuel - (fuel - abfuel);
	}
		
	return 0;
}