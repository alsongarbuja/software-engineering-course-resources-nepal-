import java.sql.*;

public class ReadDBDemo {
    
    public static void main(String[] args) throws ClassNotFoundException, SQLException{
        
        Class.forName("com.mysql.cj.jdbc.Driver");

        // Here testdb = databse name, 3306 localhost port number , root = username, "" = password
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");

        Statement st = con.createStatement();

        // employee = table name which lets assume contains ID, name and Post of employees
        String sql = "SELECT * FROM employee";

        ResultSet rs = st.executeQuery(sql);

            while(rs.next()){
                System.out.println("ID: "+ rs.getInt(1));
                System.out.println("Name: "+ rs.getString(2));
                System.out.println("Post: "+ rs.getString(3)); // for 2015-Fall question comment this out
            }
    }

}