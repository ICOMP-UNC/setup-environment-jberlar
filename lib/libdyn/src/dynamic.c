#include <dynamic.h>
#include <stdio.h>
#include <string.h>

int dynamic_greetings(char* message){
    printf("'%s' from the dynamic side \n", message);
    return strlen(message);
}
