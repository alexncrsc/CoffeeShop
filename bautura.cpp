//
// Created by alexn on 12/14/2022.
//

#include "bautura.h"
using namespace std;

bautura::bautura(int pret_, int cantitate_) {
    pret = pret_;
    cantitate = cantitate_;
}

bautura::bautura(const bautura &rhs):bautura(rhs.pret, rhs.cantitate){};

bautura & bautura::operator= (const bautura& rhs){
    if(this != &rhs){
        pret = rhs.pret;
        cantitate = rhs.cantitate;
    }
    return *this;
}

int bautura::getPret() const{
    return pret;
}


int  bautura::getCantitate() const{
    return cantitate;
}

void bautura::setPret(const int newPret){
    pret = newPret;
}

void bautura::setCantitate(const int newCantitate){
    cantitate = newCantitate;
}

bautura::~bautura() = default;