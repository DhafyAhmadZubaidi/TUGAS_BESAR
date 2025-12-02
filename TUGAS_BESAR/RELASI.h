#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include <iostream>

using namespace std;

struct Parent;
struct Child;

typedef Relasi *adrRelasi;

struct Relasi {
    Parent *parent;
    Child *child;

    Relasi *next;
};

#endif // RELASI_H_INCLUDED
