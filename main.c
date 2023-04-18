#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include "tree.h"

char menu()
{
    system("cls");
    printf("## MENU ##\n");
    printf("[1] - inserir\n");
    printf("[2] - PreOrd\n");
    printf("[3] - InOrd\n");
    printf("[4] - PosOrd\n");
    printf("[5] - Excluir\n");
    printf("[6] - inserir automatico\n");
    printf("[ESX] - Sair\n");

    printf("opcao: ");
    return getche();
    
}

int main()
{
    Tree *raiz = NULL;

    char op,dir;
    int pai,no;

    do
    {
        op = menu();
        system("cls");
        switch (op)
        {
            
            case '1':
                printf("\nno: ");
                scanf("%d",&no);
                if(raiz!=NULL)
                {
                    printf("pai: ");
                    scanf("%d",&pai);

                    printf("\ndirecao: ");
                    fflush(stdin);
                    scanf("%c",&dir);
                    insere(&raiz,no,pai,dir);
                }
                else if(raiz==NULL)
                     insere(&raiz, no,0, ' ');
                break;
            case '2':
                printf("## Pre-Ordem ## \n");
	            preOrd(raiz);
                getche();
                break;
            case '3':
                printf("\n## InOrdem ##\n");
	            InOrd(raiz);
                getche();
                break;
            case '4':
                printf("\n## PosOrdem ##\n");
	            PosOrd(raiz);
                getche();
                break;
            case '5':
                PosOrdFree(&raiz);
	            printf("\nArvore apagada\n");
                getche();
                break;
            case '6':   
                insere(&raiz, 1, 0, ' ');
                insere(&raiz, 2, 1, 'e'); 
                insere(&raiz, 3, 1, 'd');
                insere(&raiz, 4, 2, 'e');
                insere(&raiz, 5, 3, 'e');
                insere(&raiz, 6, 3, 'd');
                insere(&raiz, 7, 5, 'd');
                insere(&raiz, 8, 6, 'e');
                insere(&raiz, 9, 6, 'd');
                break;
        
        }
    } while (op != 27);
    
    system("cls");
    printf("fim do programa!");
    return 0;
}
