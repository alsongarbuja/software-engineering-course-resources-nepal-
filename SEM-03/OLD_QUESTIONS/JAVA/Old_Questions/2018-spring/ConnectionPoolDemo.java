import java.sql.*;


public class ConnectionPoolDemo {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
        
        //STEP 1: Setting up Mysql Driver class
        Class.forName("com.mysql.cj.jdbc.Driver");
        
        //STEP 2: Connecting the Driver class to the database
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");
	}

}