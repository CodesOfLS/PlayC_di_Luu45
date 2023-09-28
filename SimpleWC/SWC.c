#include <stdio.h>
/*
    Simple WC

    SWC <op> <default: -w>
        -l   Contar linhas
        -c   Contar caracteres
        -w   Contar palavras
*/
int main(int argc, char *argv[])
{
    int c, cw, cl;
    c = cw = cl = 0;
    
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    
    /* ... */

    return 0;
}