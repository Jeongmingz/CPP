// �й� : 
// ���� :



/*
�߰�����

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
private:
   string name;
   int level;
   int hp;
   static int pokemonCount;
public:
   // constructor overloading
   Pokemon();
   Pokemon(string name);
   Pokemon(string name, int level);

   static int getPokemonCount();
   string getName();
   void setName(string name);
   int getLevel();
   void setLevel(int level);
   int getHp();
   void setHp(int level);

   // method overloading
   void attack();
   void attack(Pokemon* pokemon);
   void evolve(Pokemon* pokemon);
};
int Pokemon::pokemonCount = 0; // �������� �ʱ�ȭ

Pokemon::Pokemon() {
   cout << "���ϸ� ��ü ����(�⺻ ������)!\n";
   this->hp = 100;
   pokemonCount++;
}
Pokemon::Pokemon(string name) {
   cout << "���ϸ� ��ü ����(�Ű�����(1��) ������!)\n";
   this->name = name;
   this->level = 1;
   this->hp = 100;
   pokemonCount++;
}
Pokemon::Pokemon(string name, int level) {
   cout << "���ϸ� ��ü ����(�Ű�����(2��) ������!)\n";
   this->hp = 100;
   this->name = name;
   this->level = level;
   pokemonCount++;
}
int Pokemon::getPokemonCount() {
   return pokemonCount;
}
string Pokemon::getName() {
   return name;
}
int Pokemon::getHp() {
   return hp;
}
int Pokemon::getLevel() {
   return level;
}
void Pokemon::setName(string name) {
   this->name = name;
}
void Pokemon::setHp(int hp) {
   this->hp = hp;
}
void Pokemon::setLevel(int level) {
   this->level = level;
}
void Pokemon::evolve(Pokemon* p) {
   p->level = p->level + 1;
   // ���α��� ������ 2���� ����!
   cout << p->getName() << "�� ������ " << p->getLevel() << "���� ����1\n";
}
void Pokemon::attack() {
   // ���α���(��) ���� ���� ������ �����մϴ�
   cout << this->getName() << "��(��) ���� ���� ������ �����մϴ�\n";
}
void Pokemon::attack(Pokemon* enemy) {
   // ���ڸ���(��) ���α⿡�� ������ �����մϴ�
   cout << this->getName() << "��(��) " << enemy->getName() << "���� ������ �����մϴ�\n";
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
