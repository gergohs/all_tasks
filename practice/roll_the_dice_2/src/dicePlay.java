import java.util.Random;

public class dicePlay {

    public static void main(String[] args) {

        Dice dice1 = new Dice();
        Dice dice2 = new Dice();
        Dice dice3 = new Dice();
        Dice dice4 = new Dice();
        Dice dice5 = new Dice();
        Dice dice6 = new Dice();

        int firstDice, secondDice, thirdDice, fourthDice, fifthDice, sixthDice;
        int roundCounter = 0;

        do {
            roundCounter++;
            firstDice = dice1.rolling();
            secondDice = dice2.rolling();
            thirdDice = dice3.rolling();
            fourthDice = dice4.rolling();
            fifthDice = dice5.rolling();
            sixthDice = dice6.rolling();
            System.out.println("---------------------------------------Round nr. " + roundCounter +
                    "---------------------------------------|");
            System.out.println("Dice nr. 1\t|\tDice nr.2\t|\tDice nr.3\t|\tDice nr. 4\t|\tDice nr.5\t|\tDice nr.6\t|");
            System.out.println(String.format("\t%s\t\t|\t\t%s\t\t|\t\t%s\t\t|\t\t%s\t\t|\t\t%s\t\t|\t\t%s\t\t|",
                    firstDice,secondDice,thirdDice,fourthDice,fifthDice,sixthDice));
        } while (!(firstDice == secondDice && firstDice == thirdDice && firstDice == fourthDice &&
                firstDice == fifthDice && firstDice == sixthDice));

        System.out.println("\nNr of rounds to find 6 match: " + roundCounter);
    }
}

