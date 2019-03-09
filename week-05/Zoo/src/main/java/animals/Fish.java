package main.java.animals;

public class Fish extends Animal {

    public Fish (String name){
        super (name);
    }

    /** print out the type of breed */
    @Override
    public String breed() {
    return "laying seeds.";
    }
}
