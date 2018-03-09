//
// Created by patryk on 09.03.18.
//
#ifndef RPG_PLAYER_H
#define RPG_PLAYER_H


class Player{

private:
    double PlayerHealth;
    double PlayerHealthMax;
    double PlayerMana;
    double PlayerManaMax;
public:
    Player(double PlayerHealth, double PlayerHealthMax, double PlayerMana, double PlayerManaMax);

    double getPlayerHealth() const;
    double getPlayerHealthMax() const;
    double getPlayerMana() const;
    double getPlayerManaMax() const;

    void setHealth(double current, double max);
    void setMana(double current, double max);

};


#endif //RPG_PLAYER_H
