/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:43:06 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/24 09:35:04 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void	printData( const std::string &label, Data *data )
{
	if (data)
		std::cout << label << " -> character: " << data->character << ", number: " << data->number << std::endl;
	else
		std::cout << label << " -> nullptr" << std::endl;
	return ;
}

int	main( void )
{
	std::cout << "====== TEST 1: valid pointer ======" << std::endl;
	Data myData;
	myData.character = 'A';
	myData.number = 42;

	printData("Original", &myData);

	uintptr_t raw = Serializer::serialize(&myData);
	Data* deserialized = Serializer::deserialize(raw);

	printData("Deserialized", deserialized);
	std::cout << "Address initiale: " << &myData << std::endl;
	std::cout << "Serialize value: " << raw << std::endl;
	std::cout << "Address after deserialized: " << deserialized << std::endl;
	std::cout << ((&myData == deserialized) ? "✅ Same address." : "❌ Erreur: not same address.") << std::endl;

	std::cout << "\n====== TEST 2: NULL pointeur ======" << std::endl;
	Data* nullPtr = NULL;
	uintptr_t rawNull = Serializer::serialize(nullPtr);
	Data* deserializedNull = Serializer::deserialize(rawNull);
	std::cout << "Serialize value: " << rawNull << std::endl;
	printData("Deserialized of NULL", deserializedNull);

	std::cout << "\n====== TEST 3: multiple serialize ======" << std::endl;
	Data data1 = {'X', 10};
	Data data2 = {'Y', 20};

	uintptr_t raw1 = Serializer::serialize(&data1);
	uintptr_t raw2 = Serializer::serialize(&data2);

	Data* d1 = Serializer::deserialize(raw1);
	Data* d2 = Serializer::deserialize(raw2);

	printData("Data1", d1);
	printData("Data2", d2);

	std::cout << "\n====== TEST 4: Modification after derserialize ======" << std::endl;
	d1->character = 'Z';
	d1->number = 99;
	std::cout << "Serialize value data1: " << raw1 << std::endl;
	std::cout << "Serialize value data2: " << raw2 << std::endl;
	printData("Data1 modified", &data1);
	printData("Deserialized Data1", d1);

	std::cout << ((&data1 == d1) ? "✅ the deserialized is always the same object." : "❌ Error.") << std::endl;

	return (0);
}