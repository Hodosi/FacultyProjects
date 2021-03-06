//
// Created by Hodosi on 3/5/2021.
//

#include "userInterface.h"

#include "../business/service.h"
#include "../domain/valueObject.h"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


/*
void showBlock(Block block){

    /*
    int number_of_apartments = getNumberOfApartments(block);
    for(int number_of_apartment = 0; number_of_apartment < number_of_apartments; number_of_apartment++){
        printf("%d ", number_of_apartment);

        Apartment apartment = getApartment(block, number_of_apartment);
        int number_of_expenses = getNumberOfExpenses(apartment);

        for(int number_of_expense = 0; number_of_expense < number_of_expenses; number_of_expense++){
            Expense expense = getExpense(apartment, number_of_expense);

            char type[10];
            getType(expense, type);
            printf("%s ", type);

            float cost = getCost(expense);
            printf("%f ", cost);
        }

        printf("\n");
    }
    printf("\n");

}
*/

void addExpensesUI(){

}
void modifyExpenseUI(){

}
void deleteExpenseUI(){

}
void viewExpensesByPropertyUI(){

}
void viewExpensesOrderedUI(){

}

void showMenu(){
    printf("0. Generate apartments\n");
    printf("1. Add expenses for an apartment\n");
    printf("2. Modification of an existing expense (type, amount)\n");
    printf("3. Delete the expense\n");
    printf("4. View the list of expenses filtered by a property (amount, type, apartment)\n");
    printf("5. View the list of expenses ordered by amount or type (ascending / descending)\n");
    printf("exit\n");
    printf("\n");
}

void userInterface(){
    char command[10];
    //Block block;
    //block = generateApartmentsUI();

    while (true){
        //showBlock(block);
        showMenu();
        scanf("%s", &command);
        if(strcmp(command, "exit") == 0){
            printf("Good Bye!\n");
            return;
        }
        else if(strcmp(command, "0") == 0){
            //block = generateApartmentsUI();
        }
        else if(strcmp(command, "1") == 0){
            addExpensesUI();
        }
        else if(strcmp(command, "2") == 0){
            modifyExpenseUI();
        }
        else if(strcmp(command, "3") == 0){
            deleteExpenseUI();
        }
        else if(strcmp(command, "4") == 0){
            viewExpensesByPropertyUI();
        }
        else if(strcmp(command, "5") == 0){
            viewExpensesOrderedUI();
        }
        else{
            printf("Invalid command!\n");
        }
    }
}