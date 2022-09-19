#include <iostream>

// Напишите функцию, которая обрезает пробелы в конце переданной ей строки. 
// Функция должна быть написана в расчёте на работу с очень длинными строками 
// с очень большим количеством пробелов, оптимизирована по количеству обращений к памяти.

void TrimRight(char* s)
{
	char currentElem{NULL};
	char* firstSpace_ptr{ nullptr };

	// пока не дойдем до конца строки, сравниваем скопированное из строки значение
	while ((currentElem = *s++) != '\0')
	{
		if (currentElem == ' ')
		{
			// если первый встретившийся пробел, запоминаем
			if (firstSpace_ptr == nullptr)
				firstSpace_ptr = s - 1;
		}
		else
			firstSpace_ptr = nullptr;
	}
	*firstSpace_ptr = '\0';
};

int main()
{
	char array[7] = { 'a','b',' ', ' ', 'd',' '};
	TrimRight(array);
	std::cout << array << array;
}

