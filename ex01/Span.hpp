/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:24:46 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/25 13:47:16 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <numeric>
# include <vector>

class Span
{
  private:
	std::vector<int> _vector;
	size_t _size;
	Span();

  public:
	Span(size_t n);
	Span(Span const &src);
	~Span();

	Span &operator=(Span const &src);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class SpanFullException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};

	class SpanNoSpanException : public std::exception
	{
	  public:
		virtual const char *what() const throw();
	};
};

#endif
