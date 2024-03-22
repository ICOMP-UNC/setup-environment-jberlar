#include "logic.h"

int add(int first, int second){
    return first + second;
}

int substract(int first, int second){
    return first - second;
}

int multiply(int first, int second){
    return first * second;
}

double divide(int first, int second){
    if (second == 0) return -1;
    else return (double) first / second;
}
