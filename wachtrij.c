#include "wachtrij.h"

Wachtrij::Wachtrij(){

}

void Wachtrij::voegToe(Scenario *s){
if (!doorzoekWachtrij(s))
rij.push_back(s);
}

bool Wachtrij::doorzoekWachtrij(Scenario *s){
return rij.komtAlVoor(s);
}

void Wachtrij::haalEersteUitWachtrij(){
rij.pop_front();
}

Scenario* Wachtrij::geefEersteInWachtrij(Scenario *s){
return rij.krijgKop();
}
