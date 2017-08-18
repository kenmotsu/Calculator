#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mydef.h"
#include "polishnotation.h"
#include "validate.h"

extern char array[ARRAY_NUM];
extern char errorMess[MESS_NUM];

int
main(void)
{
    char formula[MAX_NUM] = {0};

    printf("計算式を入力してください。\n");

    fgets(formula, MAX_NUM, stdin);
    strtok(formula, "\r\n");

    // バグ
    //if (!validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "誤検出" */
    if (validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "誤検出" */
    {
        printf("%s", errorMess);
        return 0;
    }

    toPolishNotation(formula);

    int calcResult = calcPolishNotation(array);
    // 改良
    /*if (errorMess[0] != '\0')
    {
        printf("%s", errorMess);
        return 0;
    }*/
    for (int i = 0; i < MESSNUM; i++)
    {
        if (errorMess[i] != '\0')
        {
            printf("%s", errorMess);
            return 0;
        }
    }

    printf("計算結果は%dです。", calcResult);

    return 0;
}
