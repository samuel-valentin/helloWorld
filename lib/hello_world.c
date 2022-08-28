//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "hello_world.h"

void simple_hello(){
    printf("Hello World!\n");
}

void greet(char* target){
    printf("Hello %s!\n", target);
}

void say_goodbye(char* target){
    printf("Good bye %s!\n", target);
}
void reverse_greet(char* target){
    printf("Hello %c%c%c!", target[2],target[1],target[0]);
}
