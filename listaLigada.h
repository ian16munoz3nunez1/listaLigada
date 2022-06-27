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

    void pushBack(const I &dato);
    void popBack();

    void print();
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
void ListaLigada<I>::pushBack(const I &dato)
{
    if(cont == 0)
        pushFront(dato);
    else
    {
        Nodo *nodo = new Nodo(dato);
        Nodo *temp = head;

        while(temp->ptr != nullptr)
            temp = temp->ptr;
        temp->ptr = nodo;
        cont++;
    }
}

template<class I>
void ListaLigada<I>::popBack()
{
    if(cont == 0)
    {
        cout << "Lista vacia" << "No se puede eliminar al final" << endl;
        return;
    }
    else if(cont == 1)
        popFront();
    else
    {
        Nodo *temp = head;
        while(temp->ptr->ptr != nullptr)
            temp = temp->ptr;
        delete temp->ptr;
        temp->ptr = nullptr;
        cont--;
    }
}

template<class I>
void ListaLigada<I>::print()
{
    Nodo *temp = head;
    while(temp != nullptr)
    {
        cout << temp->dato << endl;
        temp = temp->ptr;
    }
}

template<class I>
size_t ListaLigada<I>::size()
{
    return cont;
}

#endif//LISTALIGADA_H
