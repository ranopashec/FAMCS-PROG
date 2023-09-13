Если число было 1234, то станет 4321
```cpp
int reverse (int num)
{
	int rnum = 0;                        // от reverse_number (перевёрнутое число)
	while (num != 0)
	{            			     // пока число не станет равным нулю мы выполняем:
		rnum = rnum * 10 + num % 10; // перевёрнутое число на каждом этапе цикла становится больше в 10 раз и складывается с остатком от деления изначального числа на 10.
		num /= 10;
	}
	return rnum;
}
```