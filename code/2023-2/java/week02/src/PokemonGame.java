import Pokemon.Charizard;
import Pokemon.Picachu;
import Pokemon.Squirtle;

public class PokemonGame {
    public static void main(String[] args) {
        Picachu picachu = new Picachu();
        Squirtle squirtle = new Squirtle();
        Charizard charizard = new Charizard();
        picachu.setHp(30);
        squirtle.setHp(44);

        System.out.println(picachu.getHp());
        charizard.fly();
        squirtle.fly();
    }
}
