#include <iostream>
#include "player.h"
using namespace std;

using namespace std;

int main(){

    cout << "Hello world!\n" << endl;
    cout << "?\n" << endl;
    Player OMG(100.0, 100.0, 50.0, 50.0);

    cout << "Zycie: " << OMG.getPlayerHealth() << " /Zycie max: " << OMG.getPlayerHealthMax() << " /Mana: " << OMG.getPlayerMana() << " /Mana max: " << OMG.getPlayerManaMax() << endl;

    OMG.setHealth(30, OMG.getPlayerHealth());
    OMG.setMana(40, OMG.getPlayerManaMax());

    cout << "\nZycie: " << OMG.getPlayerHealth() << " /Zycie max: " << OMG.getPlayerHealthMax() << " /Mana: " << OMG.getPlayerMana() << " /Mana max: " << OMG.getPlayerManaMax() << endl;


    return 0;

}
