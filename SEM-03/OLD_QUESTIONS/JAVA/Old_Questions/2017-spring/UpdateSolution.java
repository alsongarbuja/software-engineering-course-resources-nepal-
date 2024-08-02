import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class UpdateSolution {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		// TODO Auto-generated method stub
		
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");
		
		Statement st = con.createStatement();
		
		String sql = "UPDATE Student set name='new_name' && age=20 where id=1";
		
		st.executeUpdate(sql);
	}

}