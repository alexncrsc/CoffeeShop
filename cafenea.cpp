//
// Created by alexn on 12/14/2022.
//

#include "cafenea.h"

void cafenea::addBautura(const shared_ptr<bautura>(&newbautura)){
    v.emplace_back(newbautura);
}

shared_ptr<bautura> cafenea::getBautura(int bauturanr){
    return v[bauturanr];
}

unsigned long cafenea::no_items(){
    return v.size();
}

void cafenea::printCafea(){
    for(auto &i: v){
        if(typeid(Cafea) == typeid(*i)) {
            cout<<i;
        }
    }
}
void cafenea::printCeai(){
    for(auto &i : v){
        if(typeid(Ceai) == typeid(*i))
            cout<<i;
    }
}

void cafenea::printAll(){
    for(auto &i: v){
        cout<<i;
    }
}

void cafenea::addDefault(){
    addBautura(make_shared<Cafea>(50, 250, "ConfortBlend", 0));
    addBautura(make_shared<Cafea>(65, 250, "Guatemala Nueva G", 0));

}




cafenea::~cafenea() = default;