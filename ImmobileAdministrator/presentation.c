//
// Created by Hodosi on 3/5/2021.
//

#include "presentation.h"

#include "business.h"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

    while (true){
        showMenu();
        scanf("%s", &command);
        if(strcmp(command, "exit") == 0){
            printf("Good Bye!\n");
            return;
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