/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:46:08 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/27 11:22:43 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->max = 0;
	this->current = 0;
}

Span::Span(unsigned int n)
{
	this->max = n;
	this->current = 0;
}

Span &Span::operator=(const Span &copy)
{
	this->max = copy.max;
	this->current = copy.current;
	this->vec = copy.vec;
	return *this;
}

Span::Span(const Span &copy)
{
	this->max = copy.max;
	this->current = copy.current;
	this->vec = copy.vec;
}

void Span::addNumber(int n)
{
	if (this->current >= this->max)
		throw std::runtime_error("Exception - Span full, cannot add more integers to it");
	this->vec.push_back(n);
	this->current++;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (abs(begin - end) + this->current > this->max)
		throw std::runtime_error("Exception - Too many elements to add");
	this->vec.insert(vec.end(), begin, end);
	this->current += abs(begin - end);
}

int	Span::shortestSpan()
{
	if (vec.size() == 0 || vec.size() == 1)
		throw std::runtime_error("Exception - No span for 0 or 1 elements");
	int span = abs(vec[0] - vec[1]);
	int i = 0;
	int j;
	while (vec[i])
	{
		j = 1;
		while (vec[i + j])
		{
			if (abs(vec[i] - vec[i + j]) < span)
				span = abs(vec[i] - vec[i + j]);
			j++;
		}
		i++;
	}
	return span;
}

int	Span::longestSpan()
{
	if (vec.size() == 0 || vec.size() == 1)
		throw std::runtime_error("Exception - No span for 0 or 1 elements");
	int span = abs(vec[0] - vec[1]);
	int i = 0;
	int j;
	while (vec[i])
	{
		j = 1;
		while (vec[i + j])
		{
			if (abs(vec[i] - vec[i + j]) > span)
				span = abs(vec[i] - vec[i + j]);
			j++;
		}
		i++;
	}
	return span;
}

Span::~Span()
{
}