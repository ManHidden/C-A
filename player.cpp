using namespace std;

class Player{
private:
    double PlayerHealth;
    double PlayerHealthMax;
    double PlayerMana;
    double PlayerManaMax;

public:
    Player(double PlayerHealth, double PlayerHealthMax, double PlayerMana, double PlayerManaMax);
    void setHealth(double current, double max);
    void setMana(double current, double max);
    double getPlayerHealth() const{
        return PlayerHealth;
    };
    double getPlayerHealthMax() const{
        return PlayerHealthMax;
    }
    double getPlayerMana() const{
        return PlayerMana;
    }
    double getPlayerManaMax() const{
        return PlayerManaMax;
    }
};

Player::Player(double PlayerH, double PlayerHM, double PlayerM, double PlayerMM):
    PlayerHealth(PlayerH),
    PlayerHealthMax(PlayerHM),
    PlayerMana(PlayerM),
    PlayerManaMax(PlayerMM)
{

}


void Player::setHealth(double current, double max){
    PlayerHealth = current;
    PlayerHealthMax = max;
}

void Player::setMana(double current, double max){
    PlayerMana = current;
    PlayerManaMax = max;
}

