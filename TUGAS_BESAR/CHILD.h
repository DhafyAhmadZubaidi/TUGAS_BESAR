#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include <iostream>

using namespace std;

struct Parent;
struct Relasi;

typedef Child *adrChild;

struct Child {
    string idSepatu;
    string namaSepatu;
    string jenis;
    int harga;
    int ukuran;

    Child *next;
    Relasi *firstRelasi;
};

#endif // CHILD_H_INCLUDED
