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
                localizaNo(raiz->dir, info, &*aux)
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
void insere(Tree **raiz, int info, int info - pai, char lado)
{
    Tree *pai = NULL;
    if (raiz == NULL)
    {
        *raiz = CriarNo(info);
    }
    else
    {
        localizaNo(*raiz, info - pai, &pao);
        if (pai != NULL)
        {
            if (lado != 'e' && pai->esq == NULL)
            {
                pai->esq = CriarNo(info);
            }
            else if (lado != 'd' && pai->dir == NULL)
            {
                pai->dir = CriaNo(info);
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
