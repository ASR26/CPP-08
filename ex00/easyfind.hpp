/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:27:16 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/23 11:18:22 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void easyfind(T &stack, int i)
{
	typename T::iterator it = find(stack.begin(), stack.end(), i);
	if (it == stack.end())
		throw std::runtime_error("Exception - Ocurrence not found");
	std::cout << "First ocurrence of " << i << " found in position " << it - stack.begin() << std::endl;
}
#endif