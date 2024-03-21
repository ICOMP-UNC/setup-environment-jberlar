#include <greetings.h>
#include <stdio.h>
#include "dynamic.h"
#include "static.h"

int main(int argc, char* argv[]){
    printf("Hello\n");
    greetings();
    printf("Calling shared lib: '%d'\n", dynamic_greetings("Aloha"));
    printf("Calling static lib: '%d'\n", static_greetings("Sayonara"));
    return 0;
}
