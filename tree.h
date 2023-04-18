struct tree
{
    int info;
    struct tree *esq, *dir;
};
typedef struct tree Tree;

// Criar NO
Tree *CriarNo(int info)
{
    Tree *no = (Tree *)malloc(sizeof(Tree));
    no->info = info;
    no->esq = no->dir = NULL;
    return no;
}

// função para localizar no
void localizaNo(Tree *raiz, int info, Tree **aux)
{
    if (raiz != NULL)
    {
        if (info == raiz->info)
        {
            *aux = raiz;
        }
        else
        {
            localizaNo(raiz->esq, info, &*aux);
            if (*aux == NULL)
            {
                localizaNo(raiz->dir, info, &*aux);
            }
        }
    }
}

// void localizaNo(Tree *raiz, int info-pai, Tree **aux)
// {
//     if(raiz == NULL)
//     {
//         *pai = NULL;
//     }
//     else
//     if(raiz -> info == info-pai)
//     {
//         *pai = raiz;
//     }
//     else
//     {
//         localizaNo(raiz -> esq, info-pai, &*pai) || localizaNo(raiz -> esq, info-pai, &*pai)
//     }

// }

// insere no na arvore
void insere(Tree **raiz, int info, int infoPai, char lado)
{
    Tree *pai = NULL;

    if (*raiz == NULL)
    {
        *raiz = CriarNo(info);
    }
    else
    {
        localizaNo(*raiz, infoPai, &pai);
        if (pai != NULL)
        {
            if (lado == 'e' && pai->esq == NULL)
            {
                pai->esq = CriarNo(info);
            }
            else if (lado == 'd' && pai->dir == NULL)
            {
                pai->dir = CriarNo(info);
            }
            else
            {
                printf("Lado ocupado!");
            }
        }
        else
        {
            printf("Pai nao encontrado!!");
        }
    }
}

void preOrd(Tree *raiz)
{
	if(raiz != NULL)
	{
		printf("%d\n", raiz->info);
		preOrd(raiz->esq);
		preOrd(raiz->dir);
	}
}

void InOrd(Tree *raiz)
{
	if(raiz != NULL)
	{
		InOrd(raiz->esq);
		printf("%d\n", raiz->info);
		InOrd(raiz->dir);
	}
}

void PosOrd(Tree *raiz)
{
	if(raiz != NULL)
	{
		PosOrd(raiz->esq);
		PosOrd(raiz->dir);
		printf("%d\n",raiz->info);
	}
}

void PosOrdFree(Tree **raiz)
{
	if(*raiz != NULL)
	{
		PosOrdFree(&(*raiz)->esq);
		PosOrdFree(&(*raiz)->dir);
		free(*raiz);
	}
    *raiz = NULL;
}
