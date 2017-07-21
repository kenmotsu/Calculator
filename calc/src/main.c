#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mydef.h"
#include "polishnotation.h"
#include "validate.h"

extern char array[ARRAY_POLISH_NUM];
extern char inputErrorMess[MESS_NUM];
extern char calcResultErrorMess[MESS_NUM];

int
main(void)
{
    char formula[MAX_NUM] = {0};

    printf("計算式を入力してください\n");
    fgets(formula, MAX_NUM, stdin);
    strtok(formula, "\r\n");

    if (!validateInputFormula(formula))
    {
        printf("%s", inputErrorMess);
        return 0;
    }

    toPolishNotation(formula);

    double calcResult = calcPolishNotation(array);
    if (!validateCalcResult(calcResult))
    {
        printf("%s", calcResultErrorMess);
        return 0;
    }

    printf("計算結果は%.0fです", calcResult);


    return 0;
}
