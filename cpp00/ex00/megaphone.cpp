#include <iostream>

int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	int len = 0;
	std::string args;

	if (ac > 1)
	{
		while (j < ac)
		{
			args = av[j];
			len = args.length();
			i = 0;
			while (i < len)
			{
				std::cout << (char)(toupper(args[i]));
				i++;
			}
			std::cout << " ";
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
