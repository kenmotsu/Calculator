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

    printf("ŒvZ®‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    fgets(formula, MAX_NUM, stdin);
    strtok(formula, "\r\n");

    if (!validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "ŒëŒŸo" */
    {
        printf("%s", inputErrorMess);
        return 0;
    }

    toPolishNotation(formula);

    printf("ŒvZŒ‹‰Ê‚Í%d‚Å‚·", calcPolishNotation(array));

    return 0;
}
