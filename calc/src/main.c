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

    int temp;
    if (true) {
        temp = 123;
    	printf("%d\n", temp);
    }

    printf("ŒvZ®‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    fgets(formula, MAX_NUM, stdin);
    strtok(formula, "\r\n");

    if (!validateInputFormula(formula)) /* parasoft-suppress BD-PB-CC "ŒëŒŸo" */
    {
        printf("%s", errorMess);
        return 0;
    }

    toPolishNotation(formula);

    int calcResult = calcPolishNotation(array);
    if (errorMess[0] != '\0')
    {
        printf("%s", errorMess);
        return 0;
    }

    printf("ŒvZŒ‹‰Ê‚Í%d‚Å‚·", calcResult);

    return 0;
}
