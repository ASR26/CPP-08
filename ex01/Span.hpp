/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:46:11 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/27 11:23:00 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int> vec;
		unsigned int current;
		unsigned int max;
	public:
		Span();
		Span (const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		Span(unsigned int n);
		void addNumber(int n);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
};

#endif