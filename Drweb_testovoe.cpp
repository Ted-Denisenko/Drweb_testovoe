#include <iostream>

// �������� �������, ������� �������� ������� � ����� ���������� �� ������. 
// ������� ������ ���� �������� � ������� �� ������ � ����� �������� �������� 
// � ����� ������� ����������� ��������, �������������� �� ���������� ��������� � ������.

void TrimRight(char* s)
{
	char currentElem{NULL};
	char* firstSpace_ptr{ nullptr };

	// ���� �� ������ �� ����� ������, ���������� ������������� �� ������ ��������
	while ((currentElem = *s++) != '\0')
	{
		if (currentElem == ' ')
		{
			// ���� ������ ������������� ������, ����������
			if (firstSpace_ptr == nullptr)
				firstSpace_ptr = s - 1;
		}
		else
			firstSpace_ptr = nullptr;
	}
	if(firstSpace_ptr)
		*firstSpace_ptr = '\0';
};

int main()
{
	char array[4] = {'a','b', ' '};
	TrimRight(array);
	std::cout << array << array;
}

