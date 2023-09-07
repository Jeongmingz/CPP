// 학번 : 201930319
// 성명 : 이정민(Lee Jeong Min)



/*
중간고사

문제) 다음 조건들과 아래 프로그램 실행결과 그리고 main함수를 참고하여 Pokemon 클래스를 cpp 코드로 설계하시오.

조건1) Pokemon 클래스에는 이름, 레벨, 체력(기본 값은 100) 3가지 필드(인스턴스 변수)를 갖는다
조건2) Pokemon 클래스에는 프로그램에서 생성된 포켓몬의 개체 수를 저장하는 정적 필드(클래스 변수)를 가진다
조건3) 위 4가지 필드는 모두 캡슐화 시킨다
조건4) 생성자 오버로딩 및 메서드 오버로딩 기술을 적용한다 (메서드는 attack 메서드만)
조건5) main함수 쪽 코드는 수정없이 주어진 그대로 사용한다
조건6) 프로그램 최상단에 학번과 성명을 주석으로 처리한다 (미기재시 0점 처리)

프로그램 실행 결과)
0
포켓몬 객체 생성(기본 생성자)!
포켓몬 객체 생성(매개변수(1개) 생성자!)
2
포켓몬 객체 생성(매개변수(2개) 생성자!)
3
피카츄의 체력은 100이고 레벨은 1입니다.
꼬부기의 레벨이 2으로 증가!
이름 : 꼬부기
체력 : 100
꼬부기의 레벨이 3으로 증가!
리자몽의 체력은 100이고 레벨은 36입니다.
리자몽의 레벨이 37으로 증가!
피카츄의 레벨이 2으로 증가!
피카츄의 레벨이 3으로 증가!
라이츄
라이츄의 레벨이 4으로 증가!
라이츄의 체력은 100이고 레벨은 4입니다.
리자몽이(가) 꼬부기에게 공격을 시전합니다
꼬부기이(가) 광역 도발 공격을 시전합니다
꼬부기이(가) 라이츄에게 공격을 시전합니다

D:\CPP\week08_midterm_20230420\x64\Debug\week08_midterm_20230420.exe(프로세스 29616개)이(가) 종료되었습니다(코드: 0개).
이 창을 닫으려면 아무 키나 누르세요...
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

// 클래스 변수 초기화
int Pokemon::count = 0;

//생성자 오버로딩
Pokemon::Pokemon() {
    cout << "포켓몬 객체 생성(기본 생성자)! \n";
    count++;

}
Pokemon::Pokemon(string value){
    cout << "포켓몬 객체 생성(매개변수(1개) 생성자!) \n";
    name = value;
    count++;

}
Pokemon::Pokemon(string value, int intvalue) {
    cout << "포켓몬 객체 생성(매개변수(2개) 생성자!) \n";
    name = value;
    level = intvalue;
    count++;

}

// 메소드 생성 및 오버로딩
void Pokemon::attack()
{
    cout << this->name << "이(가) 광역 도발 공격을 시전합니다 \n";
}
void Pokemon::attack(Pokemon *pokemon)
{
    cout << this->name << "이(가) " << pokemon->name << "에게 공격을 시전합니다 \n";
}

void Pokemon::evolve(Pokemon* pokemon)
{
    cout << name << "의 레벨이 " << this->level + 1 << " 로 증가!\n";
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
    Pokemon* pikachu = new Pokemon("피카츄");
    cout << Pokemon::getPokemonCount() << endl;
    Pokemon* squirtle = new Pokemon("꼬부기", 1);
    cout << Pokemon::getPokemonCount() << endl;

    cout << pikachu->getName() << "의 체력은 " << pikachu->getHp() << "이고 레벨은 " << pikachu->getLevel() << "입니다." << endl;
    squirtle->evolve(squirtle);
    cout << "이름 : " << squirtle->getName() << endl;
    cout << "체력 : " << squirtle->getHp() << endl;
    squirtle->evolve(squirtle);
    charizard->setName("리자몽");
    charizard->setLevel(36);

    cout << charizard->getName() << "의 체력은 " << charizard->getHp() << "이고 레벨은 " << charizard->getLevel() << "입니다." << endl;
    charizard->evolve(charizard);

    pikachu->evolve(pikachu);
    pikachu->evolve(pikachu);
    pikachu->setName("라이츄");
    cout << pikachu->getName() << "\n";
    pikachu->evolve(pikachu);
    cout << pikachu->getName() << "의 체력은 " << pikachu->getHp() << "이고 레벨은 " << pikachu->getLevel() << "입니다." << endl;

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
