#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include "tree.h"

int main()
{
    Tree *raiz = NULL;
    
    insere(&raiz, 1, 0, ' ');
    insere(&raiz, 2, 1, 'e');
    insere(&raiz, 3, 1, 'd');
    insere(&raiz, 4, 2, 'e');
    insere(&raiz, 5, 3, 'e');
    insere(&raiz, 6, 3, 'd');
    insere(&raiz, 7, 5, 'd');
    insere(&raiz, 8, 6, 'e');
    insere(&raiz, 9, 6, 'd');
    
    printf("## Pre-Ordem ## \n");
	preOrd(raiz);
	printf("\n## InOrdem ##\n");
	InOrd(raiz);
	printf("\n## PosOrdem ##\n");
	PosOrd(raiz);
    return 0;
}
