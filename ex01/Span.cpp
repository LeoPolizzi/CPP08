/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:38:23 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/25 13:47:22 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)
{
}

Span::Span(size_t n) : _size(n)
{
}

Span::Span(Span const &src) : _vector(src._vector), _size(src._size)
{
}

Span::~Span()
{
}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_vector = src._vector;
		_size = src._size;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_vector.size() < _size)
		_vector.push_back(n);
	else
		throw Span::SpanFullException();
}

int Span::shortestSpan()
{
	int	min;

	if (_vector.size() < 2)
		throw Span::SpanNoSpanException();
	std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	min = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	return (min);
}

int Span::longestSpan()
{
	if (_vector.size() < 2)
		throw Span::SpanNoSpanException();
	std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vector.size() + std::distance(begin, end) > _size)
		throw Span::SpanFullException();
	_vector.insert(_vector.end(), begin, end);
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::SpanNoSpanException::what() const throw()
{
	return ("No span to find");
}
