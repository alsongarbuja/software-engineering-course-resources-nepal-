class Singleton {
    private static Singleton instance = new Singleton();

    private Singleton() {}

    public static Singleton getInstance() {
        return instance;
    }
}

public class SingletonDemo {
    public static void main(String[] args) {
        Singleton test1 = Singleton.getInstance();
        Singleton test2 = Singleton.getInstance();

        System.out.println(test1.hashCode());
        System.out.println(test2.hashCode());

        // Output
        /**
         * 918221580
         * 918221580
         */
    }
}