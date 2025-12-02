#include "child.h"
#include <iostream>

using namespace std;

void createListChild(adrChild &L) {
    L = nullptr;
}

adrChild createChild(string id, string nama, string jenis, int harga, int ukuran) {
    adrChild c = new Child;
    c->idSepatu = id;
    c->namaSepatu = nama;
    c->jenis = jenis;
    c->harga = harga;
    c->ukuran = ukuran;
    c->next = nullptr;
    c->firstRelasi = nullptr;

    return p;
}

void insertChild(adrChild L, string id) {
    c->next = L;
    L = c;
}

adrChild findChild(adrChild L, string id) {
    adrChild c = L;
    while (c != nullptr) {
        if (c->idSepatu == id) {
            return c;
        }
        c = c->next;
    }
    return nullptr;
}
