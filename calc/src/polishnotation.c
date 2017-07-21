#include "polishnotation.h"
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char array[ARRAY_POLISH_NUM] = {0};
char arrayTemp[ARRAY_NUM] = {0};
double calcArray[ARRAY_NUM] = {0};

int sp = 0;
int spTemp = 0;
int calcsp = 0;

void
push(char* stack,
     char data,
     int* sp)
{
    if (*sp < ARRAY_NUM)
    {
        stack[(*sp)++] = data;
    }
}

char
pop(char* stack, int* sp)
{
    if (*sp > 0)
    {
        return stack[--(*sp)];
    }
    else
    {
        return 0;
    }
}

void
pushDouble(double* stack,
           double data,
           int* sp)
{
    if (*sp < ARRAY_NUM)
    {
        stack[(*sp)++] = data;
    }
}

double
popDouble(double* stack, int* sp)
{
    if ( *sp > 0 )
    {
        return stack[--(*sp)];
    }
    else
    {
        return 0;
    }
}

int
calcPriority(char chara)
{
    int priority = 0;

    if (chara == '/')
    {
        priority = 3;
    }
    else if (chara == '*')
    {
        priority = 2;
    }
    else if (chara == '+' || chara == '-')
    {
        priority = 1;
    }

    return priority;
}

void
toPolishNotation(char* formula)
{
    char temp = 0;

    for (int i = 0; i < ARRAY_NUM; i++)
    {
        if (formula[i] == '(')
        {
            push(arrayTemp, formula[i], &spTemp);
        }
        else if (formula[i] == ')')
        {
            while ((temp = pop(arrayTemp, &spTemp)) != '(')
            {
                push(array, temp, &sp);
                push(array, ',', &sp);
            }
        }
        else if (isdigit(formula[i]))
        {
            push(array, formula[i], &sp);

            while (true)
            {
                if (isdigit(formula[i+1]))
                {
                    push(array, formula[i+1], &sp);
                    i++;
                }
                else
                {
                    push(array, ',', &sp);

                    break;
                }
            }
        }
        else if (formula[i] == '+' || formula[i] == '-' ||
                 formula[i] == '*' || formula[i] == '/')
        {
            while (true)
            {
                char formulaTemp = pop(arrayTemp, &spTemp);

                int priorityA = calcPriority(formula[i]);
                int priorityB = calcPriority(formulaTemp);

                if (priorityA > priorityB)
                {
                    push(arrayTemp, formulaTemp, &spTemp);
                    push(arrayTemp, formula[i], &spTemp);

                    break;
                }
                else
                {
                    push(array, formulaTemp, &sp);
                    push(array, ',', &sp);
                    push(arrayTemp, formula[i], &spTemp);
                }
            }
        }
    }

    while (spTemp != 0)
    {
        push(array, pop(arrayTemp, &spTemp), &sp);
        push(array, ',', &sp);
    }
}

double
calcPolishNotation(char* polishFormula)
{
    double calcResult = 0;

    for (int i = 0; i < ARRAY_POLISH_NUM; i++)
    {
        if (isdigit(polishFormula[i]))
        {
            char temp[ARRAY_NUM] = {0};
            temp[0] = polishFormula[i];

            int j = 1;
            while (true)
            {
                if (isdigit(polishFormula[i+1]))
                {
                    temp[j++] = polishFormula[i+1];
                    i++;
                }
                else
                {
                    pushDouble(calcArray, atof(temp), &calcsp);
                    break;
                }
            }
        }
        else if (polishFormula[i] != '\0' && polishFormula[i] != ',')
        {
            double numA = popDouble(calcArray, &calcsp);
            double numB = popDouble(calcArray, &calcsp);

            double result = 0;

            if (polishFormula[i] == '/')
            {
                if (numA == 0)
                {
                    printf(CALC_ERROR);
                    exit(1);
                }

                result = numB / numA;
            }
            else if (polishFormula[i] == '*')
            {
                result = numB * numA;
            }
            else if (polishFormula[i] == '+')
            {
                result = numB + numA;
            }
            else if (polishFormula[i] == '-')
            {
                result = numB - numA;
            }

            pushDouble(calcArray, result, &calcsp);
        }
    }

    calcResult = round(calcArray[0]);

    return calcResult;
}
