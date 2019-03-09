import java.util.Random;

public class Dice {

    protected Dice() {
    }

    protected int rolling() {
        Random rand = new Random();
        int rollWithDice = 1 + rand.nextInt(6);
        return rollWithDice;
    }
}
