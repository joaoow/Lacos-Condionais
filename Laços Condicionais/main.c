#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int contador = 0;
    char c;
    do
    {
        contador += 1;
        printf("Digite 0 para sair do looping\n");
        printf("%i\n", contador);
        c = getchar();

    }

    while(c!='0');
//Se a condição for verdadeira ele saí do looping
// Se for false ele volta pro loop e repete inumeras vezes, tudo que estiver dentro das chaves
//até que a condição dele seja verdadeira


    return 0;
}
