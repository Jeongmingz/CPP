package Pokemon;

public class Pokemon {
    private String name;
    private int hp;
    private int attack_point;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getHp() {
        return hp;
    }

    public void setHp(int hp) {
        this.hp = hp;
    }

    public int getAttack_point() {
        return attack_point;
    }

    public void setAttack_point(int attack_point) {
        this.attack_point = attack_point;
    }

    public void attack(){
        System.out.println("공격합니다.");
    }
    public void fly(){
        System.out.println(this.getName()+"이(가) 공중날기를 시전했다.");
    }

}
