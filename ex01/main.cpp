/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:15:15 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/27 11:33:15 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    std::vector<int> myvector;
    int myarray [] = { 501,502,503, 504, 555 };
    myvector.insert (myvector.begin(), myarray, myarray+5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try
    {
        sp.addNumber(2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /* try
    {
        sp.addNumbers(myvector.begin(), myvector.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        sp.addNumbers(myvector.begin(), myvector.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } */
    try
    {
         std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
         std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}