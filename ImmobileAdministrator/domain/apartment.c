//
// Created by Hodosi on 3/5/2021.
//

#include "valueObject.h"
#include <stdlib.h>

Apartment* createApartment(int number_of_apartment){
    Apartment* apartment = (Apartment*)malloc(sizeof(Apartment));

    apartment -> number_of_apartment = number_of_apartment;
    apartment -> number_of_expenses = 4;
    apartment -> expenses = (Expense*)malloc(sizeof(Expense) * 4);

    return apartment;
}

void destroyApartment(Apartment* apartment){
    free(apartment -> expenses);
    free(apartment);
}

int getApartmentNumber(Apartment *apartment){
    return apartment -> number_of_apartment;
}



/*
Apartment getApartment(Block block, int number_of_apartment){

}

int getNumberOfApartments(Block block){

}

Block setNumberOfApartments(Block block, int number_of_apartments){

}
 */