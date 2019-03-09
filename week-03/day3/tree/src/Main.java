import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String args[]) {

        TreeClass oakTree = new TreeClass("oak", "green", 55, "male");
        TreeClass pineTree = new TreeClass("pine", "darkgreen", 50, "male");
        TreeClass ashTree = new TreeClass("ash", "grey", 35, "male");
        TreeClass beechTree = new TreeClass("beech", "brown", 20, "female");
        TreeClass alderTree= new TreeClass("alder", "lightgreen", 45, "male");

        ArrayList<String> trees = new ArrayList<> (Arrays.asList(pineTree.name, oakTree.name, ashTree.name
                , beechTree.name, alderTree.name));

        System.out.println(trees);

    }
}
