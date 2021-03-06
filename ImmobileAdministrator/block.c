//
// Created by Hodosi on 3/5/2021.
//

#include "domain.h"


Block createBlock(int number_of_block){
    Block new_block;

    new_block.number = number_of_block;
    new_block.number_of_apartments = 0;

    return new_block;
}