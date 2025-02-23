/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:43:06 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/23 19:17:09 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data	data;

	data.number = 42;
	data.character = 'A';

	// Sérialiser
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized data: " << raw << std::endl;

	// Désérialiser
	Data* newData = Serializer::deserialize(raw);
	std::cout << "Deserialized data - number: " << newData->number << ", character: " << newData->character << std::endl;

	// Vérifier si les pointeurs sont égaux
	if (newData == &data)
		std::cout << "The deserialized pointer is equal to the original pointer." << std::endl;
	else
		std::cout << "The deserialized pointer is NOT equal to the original pointer." << std::endl;
	
	Data	data2;

	data2.number = 2147483621;
	data2.character = 35;
	
	// Sérialiser
	uintptr_t raw2 = Serializer::serialize(&data2);
	std::cout << "Serialized data: " << raw2 << std::endl;

	// Désérialiser
	Data* newData2 = Serializer::deserialize(raw2);
	std::cout << "Deserialized data - number: " << newData2->number << ", character: " << newData2->character << std::endl;

	// Vérifier si les pointeurs sont égaux
	if (newData2 == &data2)
		std::cout << "The deserialized pointer is equal to the original pointer." << std::endl;
	else
		std::cout << "The deserialized pointer is NOT equal to the original pointer." << std::endl;
	return (0);
}