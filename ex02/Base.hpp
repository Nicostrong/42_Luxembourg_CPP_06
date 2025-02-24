/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:37:52 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/24 11:06:18 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <exception>
# include <string>


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
	
		class	BadCastException : public std::exception
		{

			public:

				const char	*what() const throw();
		
		};
	
};


#endif
