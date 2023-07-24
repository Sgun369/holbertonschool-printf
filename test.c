#include "main.h"
#include <stdio.h>
int main()
{
    int a = 0;
    char *ch = "sgun";
    a = _printf("%s", ch);
    printf("%d", a);
    return 0;
}