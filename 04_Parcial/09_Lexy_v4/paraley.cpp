#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "paraley.h"
#include "lexy.h"


int S()
{
    printf("init_S/n");
    if( T() )
    {
        tokens toky = lexyer();

        if(toky.token == suma || toky.token == resta)
        {
            if ( S() )
            {
                printf("\tS_:%s:%s ", token2string(toky.token), toky.valor);

                return 1;
            }
            else
                return 0;
        }
        backToken(toky);
        return 1;
    }
    return 0;
}

int T()
{
    printf("init_T/n");
    if( F() )
    {
        tokens toky = lexyer();

        if(toky.token == multi || toky.token == division)
        {
            if ( T() )
            {
                printf("\tT_:%s:%s ", token2string(toky.token), toky.valor);

                return 1;
            }
            else
                return 0;
        }
        backToken(toky);
        return 1;
    }
    return 0;
}

int F()
{
    printf("init_F\n");
    tokens toky = lexyer();

    if (toky.token == numero)
    {
        printf("\tF_:%s:%s ", token2string(toky.token), toky.valor);
        return 1;
    }

    //backToken(toky);
    return 0;
}
