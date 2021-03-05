/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elovegoo <elovegoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:34:33 by elovegoo          #+#    #+#             */
/*   Updated: 2021/02/09 17:13:39 by elovegoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// using namespace std;
// using namespace ft;

void converter(char *str)
{
	while (*str)
	{
		std::cout << (char)std::toupper(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;

	argv++;
	while (*argv)
	{
		converter(*argv);
		i++;
		argv++;
		if (i < argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
