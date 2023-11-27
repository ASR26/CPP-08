/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:47:38 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/27 12:00:06 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>

template<typename T>
class MutantStack: public  std::stack<T>
{
	private:
			
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack &operator=(const MutantStack &copy);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
};

#endif