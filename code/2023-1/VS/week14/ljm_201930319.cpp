// �й� : 201930319
// ���� : ������

#include <iostream>
#include <random>
#include <string>
using namespace std;

class Pokemon {
private:
   string name;
public:
    Pokemon();
    Pokemon(string name);

    virtual string getName();
    virtual void attack() const;
};


Pokemon::Pokemon()
{
}

Pokemon::Pokemon(string name) : name(name)
{
}

string Pokemon::getName()
{
    return string();
}
void Pokemon::attack() const
{
}

class Pikachu : public Pokemon {
    string name;
public:
    Pikachu();
    Pikachu(string name);
    string getName() const;
    void attack() const;
};


class Squirtle : public Pokemon {
    string name;

public:
    Squirtle();
    Squirtle(string name);
    string getName() const;
    void attack() const;
};

class Charizard : public Pokemon {
    string name;

public:
    Charizard();
    Charizard(string name);
    string getName() const;
    void attack() const;
};

class Flyable {
    virtual void fly() ;
};

class NoFly : public Flyable {
    void fly() ;
};

class JetPack : public Flyable {
    void fly() ;
};

class Balloon : public Flyable {
public:
    void fly()  {
        std::cout << " ǳ���� Ÿ�� ���ư��� �մϴ�!" << std::endl;
    }
};

class Wing : public Flyable {
    void fly() ;
};

class Trainer {
    /*

    */
    string name;
    Pokemon pm;
    Flyable fa;
public:
    Trainer() {
        std::string people[] = {
            "�Ǽ���", "�ǿ���", "�赵��", "�赿��", "�迬��",
            "������", "������", "�ڼ���", "������", "�����",
            "�ż���", "��ä��", "������", "���ؽ�", "�̰���",
            "�̱Թ�", "�̽���", "������", "������", "������",
            "������", "������", "�ֹ�ȣ", "������", "ȫ�¹�",
            "Ȳ����", "������", "������", "������", "���°�"
        };
        srand(time(0));
        int temp = rand();
        int value = temp % 31;
        this->name = people[temp];
    }
    void setName(string name);
    string getName();
    void catchPokemon(Pokemon* pk);
    void attackWithAllPokemons();
    void setFlyableItem(Flyable* fa);
    void tryToFly();
};

// �Ʒ� main�Լ��� ���� ����
int main() {
    Pikachu pikachu1;
    Pikachu pikachu2;
    Squirtle squirtle;
    Charizard charizard;

    JetPack jetPack;
    Balloon balloon;
    Wing wing;
    NoFly noFly;

    Trainer trainer1;
    Trainer trainer2;
    Trainer trainer3;

    trainer1.catchPokemon(&pikachu1);
    trainer2.catchPokemon(&pikachu2);
    trainer3.catchPokemon(&charizard);
    trainer1.catchPokemon(&squirtle);

    trainer1.attackWithAllPokemons();
    trainer2.attackWithAllPokemons();
    trainer3.attackWithAllPokemons();

    trainer1.setFlyableItem(&jetPack);
    trainer2.setFlyableItem(&noFly);
    trainer3.setFlyableItem(&wing);

    std::cout << trainer1.getName() << std::endl;
    std::cout << trainer2.getName() << std::endl;
    std::cout << trainer3.getName() << std::endl;

    trainer2.tryToFly();
    trainer1.tryToFly();
    trainer3.tryToFly();

    return 0;
}

Pikachu::Pikachu()
{
}

Pikachu::Pikachu(string name): Pokemon(name)
{
}

string Pikachu::getName() const
{
    return this->name;
}

void Pikachu::attack() const
{
    cout << this->getName() << "��(��) �����Ʈ�� ����մϴ�!";
}

void NoFly::fly()
{
    cout << "    ";
}

void JetPack::fly()
{
    cout << "    ";
}

void Wing::fly()
{
    cout << "    ";
}

void Flyable::fly()
{
    cout << "    ";
}
//
//void NoFly::fly(Trainer* tr, Pokemon* pm)
//{
//    cout << "Ʈ���̳� " << tr->getName() << "��(��) " << pm->getName() << "��(��) �����Ͽ��� �� �� �����ϴ�.";
//}
//
//void JetPack::fly(Trainer* tr, Pokemon* pm)
//{
//    cout << "Ʈ���̳� " << tr->getName() << "��(��) " << pm->getName() << "��(��) �����Ͽ� ���� �����⸦ ����ؼ� ���ư��� �մϴ�~";
//}
//
//void Wing::fly(Trainer* tr, Pokemon* pm)
//{
//    cout << "Ʈ���̳� " << tr->getName() << "��(��) " << pm->getName() << "��(��) �����Ͽ� ������ ��ó ���ư��� �մϴ�~";
//}
//
//void Flyable::fly(Trainer* tr, Pokemon* pm)
//{
//}

Squirtle::Squirtle()
{
}

Squirtle::Squirtle(string name):name(name)
{
}

string Squirtle::getName() const
{
    return this->name;
}

void Squirtle::attack() const
{
    cout << this->getName() << "��(��) �������� ����մϴ�~";

}

Charizard::Charizard()
{
}

Charizard::Charizard(string name) : name(name)
{
}

string Charizard::getName() const
{
    return this->name;
}

void Charizard::attack() const
{
    cout << this->getName() << "��(��) ȭ����縦 �����մϴ�...";

}


void Trainer::setName(string name)
{
    this->name = name;
}

string Trainer::getName()
{
    return this->name;
}

void Trainer::catchPokemon(Pokemon* pm)
{
    this->pm = *pm;
}

void Trainer::attackWithAllPokemons()
{
    this->pm.attack();
}

void Trainer::setFlyableItem(Flyable* fa)
{
    this->fa = *fa;
}

void Trainer::tryToFly()
{
    this->fa.fly();
}
