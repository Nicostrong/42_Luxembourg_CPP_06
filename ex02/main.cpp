/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:38:12 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 09:21:16 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main( void )
{
	std::srand(std::time(NULL));

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "Object #" << (i + 1) << std::endl;

		Base	*obj = Base::generate();

		Base::identify(obj);
		Base::identify(*obj);

		delete obj;
		std::cout << "--------------------------" << std::endl;
	}

	Base	obj;

	Base::identify(&obj);
	Base::identify(obj);
	
	return (0);
}