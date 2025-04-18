/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:37:52 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 09:53:07 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <exception>


# define RESET		"\033[0m"
# define RED		"\033[31m"

class Base
{

	public:

		virtual ~Base( void );

		/*	Method	*/
		static Base	*generate( void );
		static void	identify( Base *ptr );
		static void	identify( Base &ref );
	
};

#endif
