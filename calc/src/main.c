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

    printf("�v�Z������͂��Ă��������B\n");

    fgets(formula, MAX_NUM, stdin);
    strtok(formula, "\r\n");

    // �o�O
    //if (!validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "�댟�o" */
    if (validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "�댟�o" */
    {
        printf("%s", errorMess);
        return 0;
    }

    toPolishNotation(formula);

    int calcResult = calcPolishNotation(array);
    // ����
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

    printf("�v�Z���ʂ�%d�ł��B", calcResult);

    return 0;
}
