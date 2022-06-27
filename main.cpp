#include<iostream>
#include"listaLigada.h"

using namespace std;

int main()
{
    ListaLigada<int> lista;
    lista.pushFront(1);
    lista.pushFront(2);
    lista.pushFront(3);
    lista.pushFront(4);

    cout << lista.size() << endl;
    lista.popFront();
    cout << lista.size() << endl;

    return 0;
}

