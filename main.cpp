#include<iostream>

using namespace std;

template<typename I>
struct Nodo
{
    I dato;
    Nodo *ptr;

    Nodo(const I &dato, Nodo *ptr = nullptr)
    :dato(dato), ptr(ptr) {}
};

int main()
{
    Nodo<int> *a = new Nodo<int>(1);
    Nodo<int> *b = new Nodo<int>(2, a);
    Nodo<int> *c = new Nodo<int> (3, b);

    cout << a << endl;
    cout << a->dato << endl;
    cout << a->ptr << endl << endl;

    cout << b << endl;
    cout << b->dato << endl;
    cout << b->ptr << endl << endl;

    cout << c << endl;
    cout << c->dato << endl;
    cout << c->ptr << endl << endl;

    return 0;
}

