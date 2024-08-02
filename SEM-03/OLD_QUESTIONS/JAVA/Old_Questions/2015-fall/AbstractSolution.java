abstract class Book {
    String name, author, publisher;
    int total_page;

    Book(String name, String author, String publisher, int total_Page){
        this.name = name;
        this.author = author;
        this.publisher = publisher;
        this.total_page = total_Page;
    }

    abstract void getBookType();
}

class Novel extends Book{

    private String type;

    Novel(String name, String author, String publisher, int total_page, String type){
        super(name, author, publisher, total_page);
        this.type = type;
    }

    @Override
    void getBookType() {
        System.out.println("It is a "+ type +" type.");
    }

    void getDetails() {
        System.out.println("Name of book: " + name);
        System.out.println("Author name: " + author);
        System.out.println("Publisher name: " + publisher);
        System.out.println("Total number of pages: " + total_page);
    }

}

class Magazine extends Book{

    private String type;

    Magazine(String name, String author, String publisher, int total_page, String type){
        super(name, author, publisher, total_page);
        this.type = type;
    }

    @Override
    void getBookType() {
        System.out.println("It is a "+ type +" type.");
    }

    void getDetails() {
        System.out.println("Name of book: " + name);
        System.out.println("Author name: " + author);
        System.out.println("Publisher name: " + publisher);
        System.out.println("Total number of pages: " + total_page);
    }

}

public class AbstractSolution {
    public static void main(String[] args) {
        Novel objNovel = new Novel("Novel_name", "author_name", "publisher_name", 300 , "Novel");
        Magazine objMagazine = new Magazine("Magazine_name", "author_maga_name", "publisher", 20, "Magazine");

            objNovel.getDetails();
            objNovel.getBookType();
            objMagazine.getDetails();
            objMagazine.getBookType();
    }
}