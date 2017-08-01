#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mydef.h"
#include "polishnotation.h"
#include "validate.h"

extern char array[ARRAY_NUM];
extern char inputErrorMess[MESS_NUM];

int
main(void)
{
    char formula[MAX_NUM] = {0};

    printf("�v�Z������͂��Ă�������\n");
    fgets(formula, MAX_NUM, stdin);
    strtok(formula, "\r\n");

    if (!validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "�댟�o" */
    {
        printf("%s", inputErrorMess);
        return 0;
    }

    toPolishNotation(formula);

    printf("�v�Z���ʂ�%d�ł�", calcPolishNotation(array));

    return 0;
}
