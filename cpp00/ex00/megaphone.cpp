#include <iostream>
#include <string>

// string은 stl인가..? 모르게씀

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (islower(argv[i][j]))
				str.push_back(toupper(argv[i][j]));
			else
				str.push_back(argv[i][j]);
		}
	}
	std::cout << str << std::endl;
	return (0);
}
