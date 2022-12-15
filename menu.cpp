//
// Created by alexn on 12/15/2022.
//

#include "menu.h"
#include "exceptii.h"
#include <iostream>
#include <exception>
using namespace std;
void menu::print_options(){
    cout << "\ncafea:   1-adauga    11-afiseaza tot\n";
    cout << "ceai: 2-adauga     21-afiseaza tot\n\n";
}

void menu::start(){
    cafenea o1;
    bool go_loop; char auxChar; string auxString2;
    string auxString;
    int auxInt,  auxInt2,  auxBool,  auxInt3;
    shared_ptr<Cafea> auxCafea;
    shared_ptr<bautura> auxCeai;
    go_loop=true;
    while(go_loop){
        print_options();
        int case_val;
        cin >> case_val;
        switch(case_val){
            case(1):
                cout << "origine:      "; cin >> auxString;
                cout << "Punctaj: "; cin >> auxInt;
                auxBool = (auxInt >= 80 ? 1 : 0);
                cout << "cantitate:       "; cin >> auxInt2;
                cout << "pret:      "; cin >> auxInt3;
             //   if(auxInt3>1000)
            //        throw PretMare();
              //  try{}
             //   catch(const PretMare &e)
             //   {
             //        std::cout << e;
             //       continue;
            //    }
             //   if(auxInt>99)
           //         throw Punctaj();
           //     try{}
           //     catch(const Punctaj &e)
            //    {
             //        std::cout << e;
            //        continue;
           //     }
                auxCafea = make_shared<Cafea>(auxInt3, auxInt2, auxString, auxBool);
                o1.addBautura(auxCafea);
                break;
            case(11):
                o1.printCafea();
                break;

            case(2):
                cout << "tip:     "; cin >>auxString;
                cout << "nume    "; cin >> auxString2;
                cout << "pret:     "; cin >> auxInt;
                cout << "cantitate:    "; cin >> auxInt2;
                auxCeai = make_shared<Ceai>(auxInt, auxInt2, auxString, auxString2);
                o1.addBautura(auxCeai);
                break;

            case(21):
                o1.printCeai();
                break;


            default:
                cout << "invalid input\n";
        }
    }
}
