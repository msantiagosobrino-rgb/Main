#include <iostream>
#include "lectura.h"

using namespace std;

void lerCadea (const char mensaxe[], char cad[])
{
    cout << mensaxe;
    cin.getline(cad, MAXCAD);
}

int lerEnteiro (const char mensaxe[])
{
    char cad[MAXCAD];
    lerCadea(mensaxe, cad);
    return atoi(cad);
}

float lerReal (const char mensaxe[])
{
    char cad[MAXCAD];
    lerCadea(mensaxe, cad);
    return atof(cad);
}

char lerCaracter (const char mensaxe[])
{
    char cad[MAXCAD];
    lerCadea(mensaxe, cad);
    return cad[0];
}
