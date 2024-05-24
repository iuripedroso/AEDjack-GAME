#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <string>
using namespace std;

struct no {
    string info;
    no *link;
};

no *inicializaPilha() {
    return NULL;
}

void imprimePilha(no *L) {
    no *P;
    P = L;

    while (P != NULL) {
        cout << P->info << endl;
        P = P->link;
    }
}

no *PUSH(no *L, const string &x) {
    no *N = new no;
    N->info = x;
    N->link = L;
    L = N;
    return L;
}

no *POP(no *L, string *n) {
    no *AUX;

    if (L != NULL) {
        *n = L->info;
        AUX = L;
        L = L->link;
        delete AUX;
    } else {
        *n = "";
    }
    return L;
}

#endif
