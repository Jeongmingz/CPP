// �й� : 201930319
// ���� : ������(Lee Jeong Min)



/*
�߰����

����) ���� ���ǵ�� �Ʒ� ���α׷� ������ �׸��� main�Լ��� �����Ͽ� Pokemon Ŭ������ cpp �ڵ�� �����Ͻÿ�.

����1) Pokemon Ŭ�������� �̸�, ����, ü��(�⺻ ���� 100) 3���� �ʵ�(�ν��Ͻ� ����)�� ���´�
����2) Pokemon Ŭ�������� ���α׷����� ������ ���ϸ��� ��ü ���� �����ϴ� ���� �ʵ�(Ŭ���� ����)�� ������
����3) �� 4���� �ʵ�� ��� ĸ��ȭ ��Ų��
����4) ������ �����ε� �� �޼��� �����ε� ����� �����Ѵ� (�޼���� attack �޼��常)
����5) main�Լ� �� �ڵ�� �������� �־��� �״�� ����Ѵ�
����6) ���α׷� �ֻ�ܿ� �й��� ������ �ּ����� ó���Ѵ� (�̱���� 0�� ó��)

���α׷� ���� ���)
0
���ϸ� ��ü ����(�⺻ ������)!
���ϸ� ��ü ����(�Ű�����(1��) ������!)
2
���ϸ� ��ü ����(�Ű�����(2��) ������!)
3
��ī���� ü���� 100�̰� ������ 1�Դϴ�.
���α��� ������ 2���� ����!
�̸� : ���α�
ü�� : 100
���α��� ������ 3���� ����!
���ڸ��� ü���� 100�̰� ������ 36�Դϴ�.
���ڸ��� ������ 37���� ����!
��ī���� ������ 2���� ����!
��ī���� ������ 3���� ����!
������
�������� ������ 4���� ����!
�������� ü���� 100�̰� ������ 4�Դϴ�.
���ڸ���(��) ���α⿡�� ������ �����մϴ�
���α���(��) ���� ���� ������ �����մϴ�
���α���(��) �����򿡰� ������ �����մϴ�

D:\CPP\week08_midterm_20230420\x64\Debug\week08_midterm_20230420.exe(���μ��� 29616��)��(��) ����Ǿ����ϴ�(�ڵ�: 0��).
�� â�� �������� �ƹ� Ű�� ��������...
*/

#include <iostream>
#include <string>

using namespace std;

class Pokemon {
public:
    Pokemon();
    Pokemon(string value);
    Pokemon(string value, int intvalue);
    static int getPokemonCount();
    string getName() const;
    int getLevel() const;
    int getHp() const;
    void setName(string value);
    void setLevel(int level);
    void setHp(int hp);
    void attack();
    void attack(Pokemon *pokemon);
    void evolve(Pokemon *pokemon);
private:
    string name;
    int level = 1;
    int hp = 100;
    static int count;
};

// Ŭ���� ���� �ʱ�ȭ
int Pokemon::count = 0;

//������ �����ε�
Pokemon::Pokemon() {
    cout << "���ϸ� ��ü ����(�⺻ ������)! \n";
    count++;

}
Pokemon::Pokemon(string value){
    cout << "���ϸ� ��ü ����(�Ű�����(1��) ������!) \n";
    name = value;
    count++;

}
Pokemon::Pokemon(string value, int intvalue) {
    cout << "���ϸ� ��ü ����(�Ű�����(2��) ������!) \n";
    name = value;
    level = intvalue;
    count++;

}

// �޼ҵ� ���� �� �����ε�
void Pokemon::attack()
{
    cout << this->name << "��(��) ���� ���� ������ �����մϴ� \n";
}
void Pokemon::attack(Pokemon *pokemon)
{
    cout << this->name << "��(��) " << pokemon->name << "���� ������ �����մϴ� \n";
}

void Pokemon::evolve(Pokemon* pokemon)
{
    cout << name << "�� ������ " << this->level + 1 << " �� ����!\n";
    this->level = this->level + 1;
}


// getter setter
int Pokemon::getPokemonCount() // static
{
    return count;
}

string Pokemon::getName() const
{
    return name;
}

int Pokemon::getHp() const
{
    return hp;
}

int Pokemon::getLevel() const
{
    return level;
}


void Pokemon::setName(string value)
{
    name = value;
}


void Pokemon::setLevel(int value)
{
    level = value;
}

void Pokemon::setHp(int value)
{
    hp = value;
}



int main() {
    cout << Pokemon::getPokemonCount() << endl;
    Pokemon* charizard = new Pokemon();
    Pokemon* pikachu = new Pokemon("��ī��");
    cout << Pokemon::getPokemonCount() << endl;
    Pokemon* squirtle = new Pokemon("���α�", 1);
    cout << Pokemon::getPokemonCount() << endl;

    cout << pikachu->getName() << "�� ü���� " << pikachu->getHp() << "�̰� ������ " << pikachu->getLevel() << "�Դϴ�." << endl;
    squirtle->evolve(squirtle);
    cout << "�̸� : " << squirtle->getName() << endl;
    cout << "ü�� : " << squirtle->getHp() << endl;
    squirtle->evolve(squirtle);
    charizard->setName("���ڸ�");
    charizard->setLevel(36);

    cout << charizard->getName() << "�� ü���� " << charizard->getHp() << "�̰� ������ " << charizard->getLevel() << "�Դϴ�." << endl;
    charizard->evolve(charizard);

    pikachu->evolve(pikachu);
    pikachu->evolve(pikachu);
    pikachu->setName("������");
    cout << pikachu->getName() << "\n";
    pikachu->evolve(pikachu);
    cout << pikachu->getName() << "�� ü���� " << pikachu->getHp() << "�̰� ������ " << pikachu->getLevel() << "�Դϴ�." << endl;

    charizard->attack(squirtle);
    squirtle->attack();
    squirtle->attack(pikachu);

    delete charizard;
    delete pikachu;
    delete squirtle;
    charizard = nullptr;
    pikachu = nullptr;
    squirtle = nullptr;

    return 0;
}
