import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class UpdateJDBCDemo {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		// TODO Auto-generated method stub
		
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");
		
		Statement st = con.createStatement();
		
		String sql = "UPDATE employee set salary=50000 where post='Manager'";
		
		st.executeUpdate(sql);
	}

}