/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:38:12 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/24 11:01:31 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main( void )
{
	std::srand(std::time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		Base	*obj = Base::generate();

		std::cout << "Object #" << i << std::endl;
		Base::identify(obj);
		Base::identify(*obj);

		delete obj;
		std::cout << "--------------------------" << std::endl;
	}

	return (0);
}