#include "mydef.h"
#include "validate.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char inputErrorMess[MESS_NUM] = {0};
char calcResultErrorMess[MESS_NUM] = {0};

bool
validateInputFormula(char* formula)
{
    if (formula[0] == '\n')
    {
        strcpy(inputErrorMess, INPUT_ERROR_NONE);
        return false;
    }
    else if (strlen(formula) >= ARRAY_NUM)
    {
        strcpy(inputErrorMess, INPUT_ERROR_LONG);
        return false;
    }

    if (!isdigit(formula[0]) && formula[0] != '(')
    {
        strcpy(inputErrorMess, INPUT_ERROR_NOT_FORMULA);
        return false;
    }


    int pSCount = 0;
    int pECount = 0;
    int figCount = 0;
    int opeCount = 0;
    for (int i = 0; i < ARRAY_NUM; i++)
    {
        if (!isdigit(formula[i]) && formula[i] != '+' && formula[i] != '-' &&
            formula[i] != '*' && formula[i] != '/' && formula[i] != '(' &&
            formula[i] != ')' && formula[i] != '\0')
        {
            strcpy(inputErrorMess, E);
            return false;
        }

        if (isdigit(formula[i]))
        {
            figCount++;
        }
        else if (formula[i] == '(')
        {
            pSCount++;
            if (formula[i+1] == ')')
            {
                strcpy(inputErrorMess, INPUT_ERROR_NOT_FORMULA);
                return false;
            }
        }
        else if (formula[i] == ')')
        {
            pECount++;
            if (formula[i+1] == '(')
            {
                strcpy(inputErrorMess, INPUT_ERROR_NOT_FORMULA);
                return false;
            }
        }

        if (i > 0)
        {
            if (formula[i] == '+' || formula[i] == '-' ||
                formula[i] == '*' || formula[i] == '/')
            {
                opeCount++;

                if (formula[i-1] == '(' || formula[i+1] == ')')
                {
                    strcpy(inputErrorMess, INPUT_ERROR_NOT_FORMULA);
                    return false;
                }
            }
        }
    }

    if (figCount == 0 || opeCount == 0 || pSCount != pECount)
    {
        strcpy(inputErrorMess, INPUT_ERROR_NOT_FORMULA);
        return false;
    }

    return true;
}

bool
validateCalcResult(double calcResult)
{
    /*
    char digit[MAX_NUM] = {0};

    snprintf(digit, MAX_NUM, "%.0f", calcResult);

    if (strlen(digit) >= ARRAY_NUM)
    {
        strcpy(calcResultErrorMess, OUTPUT_ERROR_LONG);
        return false;
    }*/

    return true;
}
