//
// Created by alexn on 12/15/2022.
//

#ifndef UNTITLED2_MENU_H
#define UNTITLED2_MENU_H


#include <iostream>
#include <string>
#include <memory>
#include "Ceai.h"
#include "Cafea.h"
#include "bautura.h"
#include "cafenea.h"
#include "IOStream.h"

using namespace std;

class menu{
private:
    static void print_options();


public:
    menu() = delete;
    static void start();
};


#endif //UNTITLED2_MENU_H
