/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:04:11 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/25 14:44:47 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <iostream>
# include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
  public:
	MutantStack()
	{
	}
	MutantStack(MutantStack const &src)
	{
		*this = src;
	}
	MutantStack &operator=(MutantStack const &src)
	{
		if (this != &src)
			this->c = src.c;
		return (*this);
	}
	~MutantStack()
	{
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}

	const_iterator begin() const
	{
		return (this->c.begin());
	}
	const_iterator end() const
	{
		return (this->c.end());
	}

	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend()
	{
		return (this->c.rend());
	}

	const_reverse_iterator rbegin() const
	{
		return (this->c.rbegin());
	}
	const_reverse_iterator rend() const
	{
		return (this->c.rend());
	}
};

#endif
