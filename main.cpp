#include<iostream>
#include"listaLigada.h"

using namespace std;

int main()
{
    ListaLigada<int> lista;
    lista.pushBack(3);
    lista.pushFront(2);
    lista.pushFront(1);
    lista.pushBack(4);
    lista.pushBack(5);

    cout << "Elementos: " << lista.size() << endl;
    lista.print();

    lista.popBack();
    cout << "Elementos: " << lista.size() << endl;
    lista.print();

    return 0;
}

