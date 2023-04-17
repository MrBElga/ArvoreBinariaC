#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include "tree.h"

int main()
{
    Tree *raiz = NULL;
    
    insere(&raiz, 30, 0, ' ');
    insere(&raiz, 50, 30, 'd');
    insere(&raiz, 35, 50, 'e');

    return 0;
}
