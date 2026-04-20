#include <string>

class Hero 
{
private:
    int damage;
    int health;
    std::string name;

public:
    virtual void Attack() = 0;
    virtual void SpecialAbulity() = 0;
    virtual void TakeDamage(int damage) = 0;
    virtual void Phrase() = 0;
    virtual ~Hero() {}
};