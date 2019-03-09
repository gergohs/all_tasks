public class snail {
    private static int wellDepth = 600;
    private static int actuaPosition = 0;
    private static int snailUpPerDay = 50;
    private static int snailDownPerdDay = 20;
    private static int dayCounter = 0;

    public static void main(String[] args) {

        while (actuaPosition < wellDepth) {
            dayCounter++;
            if ((actuaPosition + snailUpPerDay) == wellDepth) {
                increaseDailyHeight();
                printDailyInfo(dayCounter, actuaPosition);
                break;
            } else {
                increaseDailyHeight();
            }
            printDailyInfo(dayCounter, actuaPosition);
        }
        System.out.println("\nThe snail reaches the top of the well in " + dayCounter + " days");
    }


    private static void printDailyInfo(int days, int height) {
        System.out.println("Days: " + days + " \t" + "Actual height: " + height);
    }


    private static int increaseDailyHeight() {
        actuaPosition += (snailUpPerDay - snailDownPerdDay);
        return actuaPosition;
    }
}
