#include "Cafea.h"

using namespace std;

Cafea::Cafea(int pret_, int cantitate_, string origine_, int punctaj_) : bautura(pret_, cantitate_){
    origine = std::move(origine_);
    punctaj = punctaj_;
}

Cafea::Cafea(const Cafea &rhs):bautura(rhs.pret, rhs.cantitate), origine(rhs.origine), punctaj(rhs.punctaj) {}

Cafea& Cafea::operator=(const Cafea& rhs) {
    if (this != &rhs) {
        this->origine = (rhs).origine;
        this->punctaj = (rhs).punctaj;
        this->pret = (rhs).pret;
        this->cantitate = (rhs).cantitate;
    }
    return *this;
}
int Cafea::getPunctaj()const{
    return punctaj;
}
void Cafea::setPunctaj(const int &newPunctaj){
    punctaj = newPunctaj;
}
string Cafea::getOrigine()const{
    return origine;
}
void Cafea::setOrigine(const string &newOrigine){
    origine = newOrigine;
}

void Cafea::prntall() const{
    cout << origine << (punctaj >= 80 ? ", de specialitate" : ", nu e de specialitate") << ", cantitate " << cantitate << " grame, pret " << pret <<" lei\n";
}

Cafea::~Cafea() = default;
