/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:54:48 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/24 11:11:56 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void)
{
	return ;
}

Base		*Base::generate( void )
{
	int	random = std::rand() % 3; 
	if (random == 0)
	{
		std::cout << "Generation of object A." << std::endl;
		return (new A());
	}
	else if (random == 1)
	{
		std::cout << "Generation of object B." << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Generation of object C." << std::endl;
		return (new C());
	}
}

void		Base::identify( Base *ptr )
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "Identified via pointer: A" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "Identified via pointer: B" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "Identified via pointer: C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
	return ;
}

void		Base::identify( Base &ref )
{
	try
	{
		A	&a = dynamic_cast<A&>(ref);
		std::cout << "Identified via reference: A" << std::endl;
		(void)a;
		return;
	}
	catch (Base::BadCastException&) {}

	try
	{
		B	&b = dynamic_cast<B&>(ref);
		std::cout << "Identified via reference: B" << std::endl;
		(void)b;
		return;
	}
	catch (Base::BadCastException&) {}

	try
	{
		C	&c = dynamic_cast<C&>(ref);
		std::cout << "Identified via reference: C" << std::endl;
		(void)c;
		return;
	}
	catch (Base::BadCastException&) {}
	std::cout << "Unknown type" << std::endl;
	return ;
}

/*******************************************************************************
 *								EXCEPTION 									   *
 ******************************************************************************/

/*
 *	Exception Bad_cast
 */
const char	*Base::BadCastException::what() const throw()
{
	return  (NULL);
}
