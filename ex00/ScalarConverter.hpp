/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:33:47 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/23 11:17:50 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <iomanip>
# include <cmath>
# include <cstdlib>
# include <cctype>

class	ScalarConverter
{
	private:

		/*	Canonical form	*/
		ScalarConverter( void );
		ScalarConverter( std::string input );
		ScalarConverter( ScalarConverter const &src_object );
		~ScalarConverter( void );

		ScalarConverter	&operator=( ScalarConverter const &src_object );

		/*	private method	*/
		static void		convertChar( double input );
		static void		convertInt( double input );
		static void		convertFloat( double input );
		static void		convertDouble( double input );

	public:

		/*	Method	*/
		static void		convert( const std::string &input );

};

#endif
