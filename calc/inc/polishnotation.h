#ifndef _POLISHNOTATION_H_
#define _POLISHNOTATION_H_

#include "mydef.h"

void push(char*,
          char,
          int*);
char pop(char*, int*);
void pushDouble(double*,
                double,
                int*);
double popDouble(double*, int*);
int calcPriority(char);
void toPolishNotation(char*);
double calcPolishNotation(char*);

#endif
