#include <iostream>
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "ru");

	/* 
	
		Математические: + - / * % =-присваиватель 
		Сравнительные: > < == <= >= !=
		Логические: && ||
	   

	double one, two;
	char simvol;

	one = 0;
	two = 0;

	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите + или - , или * , или / ";
	std::cin >> simvol;
	std::cout << "Введите второе число: ";
	std::cin >> two;

	if (simvol == '+')
	{
		std::cout << "Сумма: " << one + two;
	}
	else if (simvol == '-')
	{
		std::cout << "Разность: " << one - two;
	}
	else if (simvol == '*')
	{
		std::cout << "Умножение: " << one * two;
	}
	else if (simvol == '/')
	{
		if (two == 0)
		{
			std::cout << "Деление на 0 нельзя!";
			return 0;
		}
		std::cout << "Деление: " << one / two;
	}
	else
	{
		std::cout << "Неверный символ!";
	}

	int agra = 0;

	std::cout << "Введите число >> ";
	std::cin >> agra;
	
	if (agra > 0) std::cout << "Привет";

	else if (agra < 0) std::cout << "Пока";

	else std::cout << "Повар";

	double rub{};
	int choose{};
	double dollar = 103.27, euro = 108.56, yuan = 13.58, farit = 37.0, yena = 0.68;
	double commision = 0.05;
	std::cout << "Конвертер валют\nВведите кол-во рублей для обмена: ";
	std::cin >> rub;

	double commissionbank = rub * commision;
	rub = rub - rub * commision;

	std::cout << "Выберите валюту для обмена\n";
	std::cout << "1 - доллар, 2 - евро, 3 - юань, 4 - фарит, 5 - йена\n";
	std::cout << "Ввод: ";
	std::cin >> choose;

	if (choose == 1)
	{
		std::cout << "Всего куплено: " << rub / dollar << "\n";
		std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
	}
	else if (choose == 1)
	{
		std::cout << "Всего куплено: " << rub / euro << "\n";
		std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
	}
	else if (choose == 1)
	{
		std::cout << "Всего куплено: " << rub / yuan << "\n";
		std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
	}
	else if (choose == 1)
	{
		std::cout << "Всего куплено: " << rub / farit << "\n";
		std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
	}
	else if (choose == 1)
	{
		std::cout << "Всего куплено: " << rub / yena << "\n";
		std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
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

	std::cout << "\tРасчёт потребления топлива у самолёта\t";

	while (true)
	{
		std::cout << "\nВведите вес груза: ";
		std::cin >> gryz;
		if (gryz >= 0 && gryz <= 2000)
		{
			break;
		}
		else
		{
			std::cout << "\nНедопустимый вес! Он не должен быть меньше 0 и больше 2000";
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
		std::cout << "\nВведите расстояние от A до B: ";
		std::cin >> ab;
		std::cout << "\nВведите расстояние от B до C: ";
		std::cin >> bc;
		
		if (ab >= 0 && bc >= 0 && ab <= maxdist && bc <= maxdist)
		{
			break;
		}
		else
		{
			std::cout << "\nНедопустимое расстояние! Min - 0, Max - " << maxdist;
		}
	}

	ac = ab + bc;

	float abfuel = ab * k;
	float bcfuel = bc * k;

	if (maxdist >= ac)
	{
		std::cout << "\nЗаправка самолёта не требуется!";
	}
	else
	{
		std::cout << "\nВ пункте б необходимо заправится на: " << bcfuel - (fuel - abfuel);
	}
		
	return 0;
}