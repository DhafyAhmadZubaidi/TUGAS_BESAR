#include "parent.h"
#include <iostream>

using namespace std;

void createListParent(adrParent &L) {
    L = nullptr;
}

adrParent createParent(string id, string nama, string negara) {
    adrParent p = new Parent;
    p->idMerk = id;
    p->namaMerk = nama;
    p->negaraAsal = negara;
    p->next = nullptr;
    p->firstRelasi = nullptr;

    return p;
}

void insertParent(adrParent &L, adrParent p) {
    p->next = L;
    L = p;
}

adrParent findParent(adrParent L, string id) {
    adrParent p = L;
    while (p != nullptr) {
        if (p->idMerk == id) {
            return p;
        }
        p = p->next;
    }
    return nullptr;
}
