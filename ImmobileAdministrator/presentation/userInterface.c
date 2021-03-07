//
// Created by Hodosi on 3/5/2021.
//

#include "userInterface.h"

#include "../business/service.h"
#include "../domain/valueObject.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

UserInterfaceImmobile* createUserInterface(ServiceImmobile* service){
    UserInterfaceImmobile* user_interface = (UserInterfaceImmobile*)malloc(sizeof(UserInterfaceImmobile));

    user_interface -> service_immobile = service;

    return user_interface;
}

void destroyUserInterface(UserInterfaceImmobile* user_interface){
    destroyService(user_interface -> service_immobile);
    free(user_interface);
}

void showApartmentsUI(UserInterfaceImmobile* ui){

    Element items = getApartments(ui -> service_immobile);

    //DynamicVector *vector = items;
    DynamicStaticVector *vector = items;

    Apartment* apartment;

    char type[256];

    for(int number_of_apartment = 0; number_of_apartment < vector -> length; number_of_apartment++){
        apartment = vector -> items[number_of_apartment];
        printf("%d ", apartment -> number_of_apartment);
        for(int number_of_expense = 0; number_of_expense < apartment -> number_of_expenses; number_of_expense++){
            getType(apartment -> expenses[number_of_expense], type);
            printf("%s ", type);
            printf("%f ",  getCost(apartment -> expenses[number_of_expense]));
        }
        printf("\n");
    }
    printf("\n");
}

int generateApartmentsUI(UserInterfaceImmobile* ui){
    char number_of_apartments_str[256];
    printf("Give the number of apartments you want to be menage:\n");
    scanf("%s", number_of_apartments_str);

    int number_of_apartments = atoi(number_of_apartments_str);

    if(number_of_apartments == 0){
        return 2;
    }

    generateApartments(ui -> service_immobile, number_of_apartments);

    return 0;
}

int addExpensesUI(UserInterfaceImmobile* ui){
    char number_of_apartments_str[64];
    char cost_str[64];
    char type[64];

    printf("Give the number of apartment:\n");
    scanf("%s", number_of_apartments_str);

    printf("Give the cost:\n");
    scanf("%s", cost_str);

    printf("Give the type:\n");
    scanf("%s", type);

    int number_of_apartments = atoi(number_of_apartments_str);
    double cost = atof(cost_str);

    if(number_of_apartments == 0){
        return 2;
    }
    if(fabs(cost - 0.0) < 0.0001){
        return 2;
    }

    if(addExpense(ui -> service_immobile, number_of_apartments, cost, type) != 0){
        return 2;
    }

    return 0;
}
int modifyExpenseUI(UserInterfaceImmobile* ui){
    char number_of_apartments_str[64];
    char cost_str[64];
    char type[64];

    printf("Give the number of apartment:\n");
    scanf("%s", number_of_apartments_str);

    printf("Give the cost:\n");
    scanf("%s", cost_str);

    printf("Give the type:\n");
    scanf("%s", type);

    int number_of_apartments = atoi(number_of_apartments_str);
    double cost = atof(cost_str);

    if(number_of_apartments == 0){
        return 2;
    }
    if(fabs(cost - 0.0) < 0.0001){
        return 2;
    }

    if(modifyExpense(ui -> service_immobile, number_of_apartments, cost, type) != 0){
        return 2;
    }

    return 0;
}
void deleteExpenseUI(UserInterfaceImmobile* ui){

}
void viewExpensesByPropertyUI(UserInterfaceImmobile* ui){

}
void viewExpensesOrderedUI(UserInterfaceImmobile* ui){

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

void runUserInterface(UserInterfaceImmobile* ui){
    char command[10];
    int valid_command;

    valid_command = generateApartmentsUI(ui);
    if(valid_command != 0){
        printf("Invalid input!");
        return;
    }

    while (true){
        showApartmentsUI(ui);
        showMenu();
        scanf("%s", command);
        if(strcmp(command, "exit") == 0){
            printf("Good Bye!\n");
            return;
        }
        else if(strcmp(command, "1") == 0){
            if(addExpensesUI(ui) != 0){
                printf("Invalid input!\n");
            }
        }
        else if(strcmp(command, "2") == 0){
            if(modifyExpenseUI(ui) == 0){
                printf("Invalid input!\n");
            }
        }
        else if(strcmp(command, "3") == 0){
            deleteExpenseUI(ui);
        }
        else if(strcmp(command, "4") == 0){
            viewExpensesByPropertyUI(ui);
        }
        else if(strcmp(command, "5") == 0){
            viewExpensesOrderedUI(ui);
        }
        else{
            printf("Invalid command!\n");
        }
    }
}