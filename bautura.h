//
// Created by alexn on 12/14/2022.
//
#include <iostream>
#ifndef UNTITLED2_BAUTURA_H
#define UNTITLED2_BAUTURA_H
#include "IOStream.h"

class bautura:public IOStream{
protected:
    int pret;
    int cantitate;

public:
    explicit bautura(int pret = 0, int cantitate = 0); //
    bautura(const bautura& rhs);
    bautura & operator= (const bautura& rhs);

    void setCantitate(int newCantitate);
    void setPret(int newPret);

    int getPret() const;
    int getCantitate() const;



    ~bautura() override;
};

#endif //UNTITLED2_BAUTURA_H
