/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:46:16 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/25 11:48:50 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
		d.push_back(i);
	}
	try
	{
		std::cout << easyfind(v, 5) << std::endl;
		std::cout << easyfind(l, 5) << std::endl;
		std::cout << easyfind(d, 5) << std::endl;
		std::cout << easyfind(v, 10) << std::endl;
	}
	catch (NotFoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
