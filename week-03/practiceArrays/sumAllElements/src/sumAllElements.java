// - Create an array variable named `ai`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Print the sum of the elements in `ai`

public class sumAllElements {
    public static void main(String[] args) {

        int[] ai = {3, 4, 5, 6, 7};

        int temp = 0;

        for (int i : ai) {
            temp += i;
        }

        System.out.println(temp);
    }
}