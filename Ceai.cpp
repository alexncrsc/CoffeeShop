//
// Created by alexn on 12/15/2022.
//

#include "Ceai.h"
#include <utility>

Ceai::Ceai(int pret_, int cantitate_, string tip_,  string nume_):bautura(pret_, cantitate_){
    tip= tip_;
    nume = std::move(nume_);
}

Ceai::Ceai(const Ceai &rhs):bautura(rhs.pret, rhs.cantitate), tip(rhs.tip), nume(rhs.nume){}

Ceai & Ceai::operator= (const Ceai &rhs){
    if(this != &rhs){
        tip = rhs.tip;
        nume = rhs.nume;
        pret = rhs.pret;
        cantitate = rhs.cantitate;
    }
    return *this;
}

void Ceai::settip(string newTip){
    tip = newTip;
}
void Ceai::setnume(string newNume){
    nume = std::move(newNume);
}

string Ceai::gettip()const{
    return tip;
}
string Ceai::getnume()const{
    return  nume;
}

void Ceai::prntall()const{
    cout  << ", tip " << tip << ", nume " << nume << ", cantitate " << cantitate << " grame , pret " << pret << " lei\n";
}

Ceai::~Ceai() = default;