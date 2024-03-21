#include <static.h>
#include <stdio.h>
#include <string.h>

int static_greetings(char* message)
{
    printf("'%s' from the static side \n", message);
    return strlen(message);
}
