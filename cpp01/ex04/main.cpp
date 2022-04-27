/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:39:08 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/27 21:38:06 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	isValidate(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "wrong argument" << std::endl;
		return (false);
	}
	for (int i = 1; i < 3; i++)
	{
		if (!argv[i] || (!*argv[i]))
		{
			std::cout << "wrong argument" << std::endl;
			return (false);
		}
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	if (!(isValidate(argc, argv)))
		return (0);

	std::string	filename = argv[1];
	std::string	filenameReplace = filename + ".replace";
	std::fstream	fs;
	std::fstream	fs_replace;
	fs.open(filename, std::istream::in);
	fs_replace.open(filenameReplace, std::istream::out);
	if (!fs.is_open()) {
		std::cout << "No File Open Error";
		return (0);
	}
	if (!fs_replace.is_open()) {
		fs.close();
		std::cout << "File_Replace Open Error";
		return (0);
	}

	std::string	line;
	std::string	find_to = argv[2];
	std::string	replace_to = argv[3];
	std::size_t	found_index;
	while (getline(fs, line)) {
		found_index = 0;
		while (true) {
			found_index = line.find(find_to);
			if (found_index != std::string::npos) {
				fs_replace << line.substr(0, found_index) + replace_to;
				line = line.substr(found_index + find_to.length());
			} else
				break;
		}
		fs_replace << line << std::endl;
	}
	fs.close();
	fs_replace.close();
	return (0);

}
