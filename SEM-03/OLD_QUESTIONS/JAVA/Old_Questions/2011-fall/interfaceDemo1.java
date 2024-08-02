interface Exam {
    public boolean pass(int score);
}

interface Classify {
    public String division(int average);
}

class Result implements Exam, Classify {
    
    public boolean pass(int score){
        if(score > 50)
            return true;
        
        return false;
    }

    public String division(int average){
        if(average > 80)
            return "First";
        else if(average > 50)
            return "Second";
        
        return "No Division";
    }
    
    public static void main(String[] args) {
        Result obj = new Result();

        obj.pass(60);
        obj.division(60);
    }
}