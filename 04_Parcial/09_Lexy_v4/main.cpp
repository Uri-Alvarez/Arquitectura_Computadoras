#include <iostream>
#include "lexy.h"
#include "paraley.h"
using namespace std;

int main()
{
    /*
    tokens toky;

    cout << "Ingresa valores_: " << endl;

    while ((toky=lexyer()).token != eof)
    {
    cout << toky.valor << " " << token2string(toky.token) << endl;
    }
    */

    cout << "Ingresa expresion a evaluar..." << endl;

    if( S() )
    {
        cout << endl << "Buena gramatica" << endl;
    }
    else
    {
        cout << endl << "Mala gramatica" << endl;
    }

    return 0;
}

