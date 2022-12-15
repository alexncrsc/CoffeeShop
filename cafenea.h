//
// Created by alexn on 12/14/2022.
//

#ifndef UNTITLED2_CAFENEA_H
#define UNTITLED2_CAFENEA_H

#include <iostream>
#include <memory>
#include <vector>
#include "cafea.h"
#include "ceai.h"
#include "bautura.h"


using namespace std;

class cafenea{
private:
     vector <shared_ptr<bautura>> v;
public:
    cafenea() = default;

     void addBautura(const shared_ptr<bautura>(&newBautura));
     shared_ptr<bautura> getBautura(int Bauturanr);
     unsigned long no_items();

    void printCafea();
     void printCeai();
     void printAll();

     void addDefault();
     void deleteItem(int a);
     void deleteAll();

    ~cafenea() ;
};





#endif //UNTITLED2_CAFENEA_H
