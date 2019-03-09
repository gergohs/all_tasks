import java.util.*;

public class dice {

    public static void main(String[] args) {

        int x;
        int nrOfDices = 6;
        int rolls[] = new int[6];
        int roundCounter = 0;
        int match = 0;

        do {
            for (int i = 0; i < nrOfDices; i++) {
                Random rand = new Random();
                x = 1 + rand.nextInt(nrOfDices);
                rolls[i] = x;
                System.out.println("Dice nr. " + (i + 1) + ": " + rolls[i]);
                roundCounter++;
             }
        }
        while (!(rolls[0] == rolls[1] && rolls[0] == rolls[2] && rolls[0] == rolls[3] && rolls[0] == rolls[4] && rolls[0] == rolls[5]));

        System.out.println("Rounds for the first match: " + (roundCounter / 6));


/*
***************************  roll until X=6; *************************
        do {
            x = 1 + rand.nextInt(6);
            System.out.println(x);
        } while (x != 6);
**********************************************************************
*/

    }
}

