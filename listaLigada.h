#ifndef LISTALIGADA_H
#define LISTALIGADA_H

#include<iostream>

using namespace std;

template<class I>
class ListaLigada
{
    struct Nodo
    {
        I dato;
        Nodo *ptr;

        Nodo(const I &dato, Nodo *ptr = nullptr)
        :dato(dato), ptr(ptr) {}
    };

    Nodo *head;
    size_t cont;
public:
    ListaLigada();

    void pushFront(const I &dato);
    void popFront();
    size_t size();
};

template<class I>
ListaLigada<I>::ListaLigada()
{
    head = nullptr;
    cont = 0;
}

template<class I>
void ListaLigada<I>::pushFront(const I &dato)
{
    Nodo *nodo = new Nodo(dato, head);
    head = nodo;
    cont++;
}

template<class I>
void ListaLigada<I>::popFront()
{
    if(cont == 0)
    {
        cout << "Lista vacia" << endl << "No se puede eliminar al inicio" << endl;
        return;
    }

    Nodo *temp = head;
    head = head->ptr;
    delete temp;
    cont--;
}

template<class I>
size_t ListaLigada<I>::size()
{
    return cont;
}

#endif//LISTALIGADA_H
