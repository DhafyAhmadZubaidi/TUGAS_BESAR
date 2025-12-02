#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>

using namespace std;

struct Child;
struct Relasi;

typedef Parent *adrParent;

struct Parent {
    string idMerk;
    string namaMerk;
    string negaraAsal;

    Parent *next;
    Relasi *firstRelasi;
};



#endif // PARENT_H_INCLUDED
