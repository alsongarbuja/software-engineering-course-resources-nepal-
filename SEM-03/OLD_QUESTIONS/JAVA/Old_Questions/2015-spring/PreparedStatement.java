import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class PreparedStatement {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		// TODO Auto-generated method stub
		
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");
		
        PreparedStatement smt = new PreparedStatement("Insert into employee values(?, ?, ?)");
        
        smt.setString(2, "Alson");
        smt.setString(3, "Manager");
        smt.setInt(4, 60000);
		
        int i = smt.executeUpdate(sql);
        
        System.out.println(i + " rows affected");

        con.close();
	}

}