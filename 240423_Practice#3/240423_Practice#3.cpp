//���� for��
#include <iostream>

int main()
{
	/*int result;

	std::cout << "5�� ���\n";

	for (int i = 1; i <= 9; i++)
	{
		result = i * 5;
		std::cout << "5 * " << i << " = " << result << std::endl;
	}*/

	int result;
	int i;
	int j;

	std::cout << "1~9�� ���\n";
	
	for (i = 1; i < 10; i++)
	{
		std::cout << "----" << i << "��----" << std::endl;

		for (j = 1; j < 10; j++)
		{
			result = i * j;
			std::cout << i << " * " << j << " = " << result << std::endl;
		}
	}

	
}