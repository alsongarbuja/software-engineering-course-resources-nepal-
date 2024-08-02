import package-scope.*;

class Mainclass extends ScopeProtected {
    public static void main(String[] args) {
        ScopeDefault sd = new ScopeDefault();
        ScopePublic sp = new ScopePublic();

        // ScopeProtected spr = new ScopeProtected(); 
        // we don't have to make it as it is inherited and we can use the object of MainClass for accessing the method

        MainClass mc = new MainClass();
        ScopePrivate spv = new ScopePrivate();//it shows error as the protected class doesnot allow it.

            sd.mssg();//it shows error as default modifiers have access level within the package only
            sp.printMssg();//shows the mssg
            mc.show();//shows the mssg
            spv.showMssg();
    }
}