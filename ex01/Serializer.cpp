/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:42:59 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/23 19:10:08 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	All private not necessary to implement this all => fordibben
 */

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	serialize method
 */
uintptr_t	Serializer::serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/*
 *	deserialize method
 */
Data	*Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}