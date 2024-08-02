import java.sql.*;

public class InsertSolution {
    
    public static void main(String[] args) throws ClassNotFoundException, SQLException{
        
        Class.forName("com.mysql.cj.jdbc.Driver");

        // Here ms-access= databse name, 3306 localhost port number , root = username, "" = password
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/ms-access", "root", "");

        Statement st = con.createStatement();

        String sql = "INSERT INTO Student (`name`, `address`, `DOB`, `class`) VALUES ('Alson', 'Bagar', '2000/10/10', 12)";

        st.executeUpdate(sql);

    }

}

// for 2013-fall 6a write till line 10 only
// Step 1: Preparing the sql connector driver class
// Step 2: Connecting to the database using the Driver class
