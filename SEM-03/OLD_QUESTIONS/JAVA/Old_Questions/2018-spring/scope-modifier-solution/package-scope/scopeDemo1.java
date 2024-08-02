package package-scope;

class ScopeDefault {
    public void mssg(){
        System.out.println("This has a default access modifier.");
    }
}

public class ScopePublic {
    public void printMssg(){
        System.out.println("This has a public access modifier.");
    }
}

protected class ScopeProtected {
    public void show() {
        System.out.println("This has a protected access modifier.");
    }
}

private class ScopePrivate {
    public void showMssg() {
        System.out.println("This has a private access modifier.");
    }
}

