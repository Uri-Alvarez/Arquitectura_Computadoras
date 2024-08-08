#include <stdio.h>
#include "lexy.h"
using namespace std;

enum t_token lexyer ()
{
    char c;
    while ((c=getc(stdin))!= EOF)
    {
        putc(c, stdout);
    }
    return eof;

}