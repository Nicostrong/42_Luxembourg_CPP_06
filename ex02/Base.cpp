/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:54:48 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 09:54:01 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
 *	Destructor
 */
Base::~Base( void)
{
	return ;
}

/*
 *	We generate a random number between 0 and 2, and we return a pointer to
 *	the object created. We print the type of the object created.
 */
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
/*
 *	To check the type of the object passed by pointer, we check the return of 
 *	the dynamic_cast, if the return is nullptr, the object is not of the type 
 *	we are checking.
 */
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

/*
 *	To check the type of the object passed by reference, we need to try to 
 *	cast the reference to the type we are checking, if the cast fails, we
 *	catch the exception and print the error message. A reference can't be NULL.
 */
void		Base::identify( Base &ref )
{
	try
	{
		A	&a = dynamic_cast<A&>(ref);
		std::cout << "Identified via reference: A" << std::endl;
		(void)a;
		return;
	}
	catch (std::exception &)
	{
		std::cout << RED"Failed cast: in A"RESET << std::endl;
	}

	try
	{
		B	&b = dynamic_cast<B&>(ref);
		std::cout << "Identified via reference: B" << std::endl;
		(void)b;
		return;
	}
	catch (std::exception &)
	{
		std::cout << RED"Failed cast: in B"RESET << std::endl;
	}

	try
	{
		C	&c = dynamic_cast<C&>(ref);
		std::cout << "Identified via reference: C" << std::endl;
		(void)c;
		return;
	}
	catch (std::exception &)
	{
		std::cout << RED"Failed cast: in C"RESET << std::endl;
	}
	std::cout << "Unknown type" << std::endl;
	return ;
}
