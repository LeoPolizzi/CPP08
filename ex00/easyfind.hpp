/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:26:06 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/25 11:48:36 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <deque>
# include <iostream>
# include <list>
# include <vector>

class NotFoundException : public std::exception
{
  public:
	virtual const char *what() const throw()
	{
		return ("Element not found");
	}
};

template <typename T>

int	easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFoundException();
	return (*it);
}

#endif
