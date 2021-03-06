//
// Created by Hodosi on 3/5/2021.
//

#include "service.h"

#include "../persistence/repository.h"
#include "../validation/validator.h"
#include "../domain/valueObject.h"


Block generateApartments(number_of_block, number_of_apartments){
    Block block = createBlock(number_of_block);

    block = setNumberOfApartments(block, number_of_apartments);

    for(int number_of_apartment = 0; number_of_apartment < number_of_apartments; number_of_apartment++){

        block = createApartment(block, number_of_apartment);

        // (water, sewer, heating, gas)
        float cost = 0;
        block = setWaterExpense(block, number_of_apartment, cost);
        block = setSewerExpense(block, number_of_apartment, cost);
        block = setHeatingExpense(block, number_of_apartment, cost);
        block = setGasExpense(block, number_of_apartment, cost);

    }



    return block;
}
