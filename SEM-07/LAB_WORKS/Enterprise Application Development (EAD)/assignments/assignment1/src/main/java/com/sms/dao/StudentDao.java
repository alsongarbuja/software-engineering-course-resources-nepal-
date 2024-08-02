package com.sms.dao;

import java.util.List;
import com.sms.dto.StudentDto;

public interface StudentDao {
	public void saveStudentInfo(StudentDto studentInfo);
	public void updateStudentDTO(StudentDto studentInfo);
	public List<StudentDto> getAllStudent();
	public void deleteStudentById(int id);
	public StudentDto getStudentById(int id);
	
}
