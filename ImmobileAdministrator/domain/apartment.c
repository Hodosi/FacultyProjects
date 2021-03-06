//
// Created by Hodosi on 3/5/2021.
//

#include "valueObject.h"

Block createApartment(Block block, int number_of_apartment){
    Apartment new_apartment;

    new_apartment.number = number_of_apartment;
    new_apartment.number_of_expenses = 4;
    block.apartments[number_of_apartment] = new_apartment;

    return block;
}

Apartment getApartment(Block block, int number_of_apartment){
    return block.apartments[number_of_apartment];
}

int getNumberOfApartments(Block block){
    return block.number_of_apartments;
}

Block setNumberOfApartments(Block block, int number_of_apartments){
    block.number_of_apartments = number_of_apartments;
    return block;
}