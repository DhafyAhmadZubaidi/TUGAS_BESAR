#include "relasi.h"
#include <iostream>

using namespace std;

void createListRelasi(adrRelasi &L) {
    L = nullptr;
}

adrRelasi createRelasi(Parent *p, Child *c) {
    adrRelasi r = new Relasi;
    r->parent = p;
    r->child = c;
    r->next = nullptr;
    return r;
}

void insertRelasi(adrRelasi &L, adrRelasi r) {
    r->next = L;
    L = r;
}

void connect(Parent *p, Child *c, adrRelasi &Lr) {
    adrRelasi r = createRelasi(p, c);
    insertRelasi(Lr, r);
    r->next = p->firstRelasi;
    p->firstRelasi = r;
    
    r->next = c->firstRelasi;
    c->firstRelasi = r;
}

bool isRelated(adrParent p, adrChild c) {
    if (p == nullptr || c == nullptr) {
        return false;
    }
    adrRelasi r = p->firstRelasi;
    while (r != nullptr) {
        if (r->child == c) {
            return true;
        }
        r = r->next;
    }
    return false;
}
