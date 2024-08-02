package com.sms.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBUtil {
	private static final String DRIVER_NAME = "com.mysql.cj.jdbc.driver";
	private static final String DATABASE_NAME = "studentmgmt";
	private static final String URL = "jdbc:mysql://localhost:3306/";
	private static final String USERNAME = "root";
	private static final String PASSWORD = "";
	
	public static Connection getConnection() throws SQLException, ClassNotFoundException {
		Class.forName(DRIVER_NAME);
		
		return DriverManager.getConnection(URL+DATABASE_NAME, USERNAME, PASSWORD);
	}
}
