/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:42:49 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/24 09:22:47 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data
{
	char	character;
	int		number;
};

class	Serializer
{
	private:

		/*	Canonicalform	*/
		Serializer( void );
		Serializer( Serializer const & src_object );
		~Serializer( void );
		Serializer & operator=( Serializer const &src_object );

	public:

		/*	Method	*/
		static uintptr_t	serialize( Data *ptr );
		static Data 		*deserialize( uintptr_t raw );
};

#endif
