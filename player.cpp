//
// Created by patryk on 09.03.18.
//
class Player{
private:
    double PlayerHealth;
    double PlayerHealthMax;
    double PlayerMana;
    double PlayerManaMax;
public:
    Player(double PH, double PHM, double PM, double PMM);

    double getPlayerHealth() const;
    double getPlayerHealthMax() const;
    double getPlayerMana() const;
    double getPlayerManaMax() const;

    void setHealth(double current, double max);
    void setMana(double current, double max);

};

Player::Player(double PlayerH, double PlayerHM, double PlayerM, double PlayerMM):
        PlayerHealth(PlayerH),
        PlayerHealthMax(PlayerHM),
        PlayerMana(PlayerM),
        PlayerManaMax(PlayerMM)
{

}

double Player::getPlayerHealth() const{
    return PlayerHealth;
};

double Player::getPlayerHealthMax() const{
    return PlayerHealthMax;
}

double Player::getPlayerMana() const{
    return PlayerMana;
}

double Player::getPlayerManaMax() const{
    return PlayerManaMax;
}

void Player::setHealth(double current, double max){
    PlayerHealth = current;
    PlayerHealthMax = max;
}

void Player::setMana(double current, double max){
    PlayerMana = current;
    PlayerManaMax = max;
}
