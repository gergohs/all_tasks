import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class TrickyAverage {
    public static void main(String[] args) {

        int[] numbers = {11, 20, 5, 8, 14, 2, 21};
        System.out.println("Original list: " + Arrays.toString(numbers));

        List<Integer> even = new ArrayList<Integer>();
        List<Integer> odd = new ArrayList<Integer>();

        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] % 2 == 0) {
                even.add(numbers[i]);
            } else {
                odd.add(numbers[i]);
            }
        }

        System.out.println("The even numbers from the list: " + even);
        System.out.println("the odd numbers from the list: " + odd);

        Collections.sort(even);
        Collections.sort(odd);

        System.out.println("The biggest even number is: " + even.get(even.size() - 1));
        System.out.println("The smallest odd number is: " + odd.get(0));

        double average = (double) (even.get(even.size() - 1) + odd.get(0)) / 2;
        System.out.println("The average of smallest odd and biggest even is: " + average);
    }
}

