//
// Created by alexn on 12/14/2022.
//

#ifndef UNTITLED2_CAFEA_H
#define UNTITLED2_CAFEA_H



#include <iostream>
#include <memory>
#include "bautura.h"

using namespace std;


class Cafea : public bautura{
private:
    string origine;
    int punctaj;

public:
    explicit Cafea(int pret_ = 0, int cantitate_ = 0, string origine_ = "", int punctaj = 0);
    Cafea(const Cafea &rhs);
    Cafea& operator=(const Cafea& rhs);

    void setPunctaj(const int &newPunctaj);
    void setOrigine(const string &newOrigine);

    int getPunctaj()const;
    string getOrigine()const;

    void prntall()const override;

    ~Cafea() override;
};

#endif