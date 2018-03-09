#ifndef PLAYER_H
#define PLAYER_H
using namespace std;

class Player{

private:
    double PlayerHealth;
    double PlayerHealthMax;
    double PlayerMana;
    double PlayerManaMax;
public:
    Player::Player(double PlayerHealth, double PlayerHealthMax, double PlayerMana, double PlayerManaMax);
    void setHealth(double current, double max);
    void setMana(double current, double max);
    double getPlayerHealth() const;
    double getPlayerHealthMax() const;
    double getPlayerMana() const;
    double getPlayerManaMax() const;
};

#endif // PLAYER_H
