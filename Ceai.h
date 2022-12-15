//
// Created by alexn on 12/15/2022.
//

#ifndef UNTITLED2_CEAI_H
#define UNTITLED2_CEAI_H

#include <iostream>
#include "bautura.h"



using namespace std;

class Ceai : public bautura{
private:
    string tip;
    string nume;
public:
    explicit Ceai(int pret_ = 0, int cantitate_ = 0, string tip = "",   string nume_ = "");
    Ceai(const Ceai &rhs);
    Ceai& operator= (const Ceai &rhs);


    void settip(string newtip);

    string gettip()const;

    void setnume(string newnume);

    string getnume()const;


    void prntall() const ;

    ~Ceai() override;
};


#endif //UNTITLED2_CEAI_H
