#include <iostream>
#include <player.h>
using namespace std;

int main(){

    cout << "Hello world!\n" << endl;
    cout << "?\n" << endl;
    Player OMG(100, 100, 50, 50);

    cout << "¯ycie: " << Player.getPlayerHealth() << "¯ycie max: " << Player.getPlayerHealthMax() << "Mana: " << Player.getPlayerMana() << "Mana max: " << Player.getPlayerManaMax() << endl;

    return 0;

}
