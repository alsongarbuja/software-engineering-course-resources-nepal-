package com.sms.dao;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import com.sms.dto.StudentDto;
import com.sms.util.DBUtil;

public class StudentDaoImpl implements StudentDao {
	PreparedStatement ps = null;

	@Override
	public void saveStudentInfo(StudentDto studentInfo) {
		String sql = "INSERT INTO students(id,roll,name,email,college,department,gender) VALUES(?,?,?,?,?,?)";
		try {
			ps = DBUtil.getConnection().prepareStatement(sql);
			ps.setInt(1, studentInfo.getRoll());
			ps.setString(2, studentInfo.getName());
			ps.setString(3, studentInfo.getEmail());
			ps.setString(4, studentInfo.getCollege());
			ps.setString(5, studentInfo.getDepartment());
			ps.setString(6, studentInfo.getGender());
			
			ps.executeUpdate();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		// TODO Auto-generated method stub
		
	}

	@Override
	public void updateStudentDTO(StudentDto studentInfo) {
		// TODO Auto-generated method stub
		String sql = "UPDATE students SET roll=?, name=?, email=?, college=?, department=?, gender=? WHERE id=?";
		
		try {
			ps = DBUtil.getConnection().prepareStatement(sql);
			ps.setInt(1, studentInfo.getRoll());
			ps.setString(2, studentInfo.getName());
			ps.setString(3, studentInfo.getEmail());
			ps.setString(4, studentInfo.getCollege());
			ps.setString(5, studentInfo.getDepartment());
			ps.setString(6, studentInfo.getGender());
			ps.setInt(7, studentInfo.getId());
			
			ps.executeUpdate();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Override
	public List<StudentDto> getAllStudent() {
		// TODO Auto-generated method stub
		List<StudentDto> students = new ArrayList<StudentDto>();
		String sql = "SELECT * FROM students";
		
		try {
			ps = DBUtil.getConnection().prepareStatement(sql);
			ResultSet rs = ps.executeQuery();
			
			while(rs.next()) {
				StudentDto student = new StudentDto();
				student.setName(rs.getString("name"));
				student.setDepartment(rs.getString("department"));
				student.setRoll(rs.getInt("roll"));
				student.setCollege(rs.getString("college"));
				student.setEmail(rs.getString("email"));
				student.setGender(rs.getString("gender"));
				student.setId(rs.getInt("id"));
				
				students.add(student);
			}
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		return students;
	}

	@Override
	public void deleteStudentById(int id) {
		// TODO Auto-generated method stub
		String sql = "DELETE FROM students WHERE id=?";
		
		try {
			ps = DBUtil.getConnection().prepareStatement(sql);
			ps.setInt(1, id);
			
			ps.executeUpdate();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

	@Override
	public StudentDto getStudentById(int id) {
		// TODO Auto-generated method stub
		String sql = "SELECT * FROM students WHERE id=?";
		StudentDto student = new StudentDto();
		
		try {
			ps = DBUtil.getConnection().prepareStatement(sql);
			ps.setInt(1, id);
			
			ResultSet rs = ps.executeQuery();
			
			if(rs.next()) {
				student.setId(rs.getInt("id"));
				student.setName(rs.getString("name"));
				student.setCollege(rs.getString("college"));
				student.setDepartment(rs.getString("department"));
				student.setEmail(rs.getString("email"));
				student.setRoll(rs.getInt("roll"));
				student.setGender(rs.getString("gender"));
			}
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return student;
	}
	
}
