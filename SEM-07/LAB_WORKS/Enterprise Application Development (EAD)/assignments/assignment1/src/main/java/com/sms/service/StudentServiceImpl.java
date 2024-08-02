package com.sms.service;

import java.util.List;

import com.sms.dao.StudentDao;
import com.sms.dao.StudentDaoImpl;
import com.sms.dto.StudentDto;

public class StudentServiceImpl implements StudentService {
	
	StudentDao studentDao = new StudentDaoImpl();

	@Override
	public void saveStudentInfo(StudentDto studentDto) {
		// TODO Auto-generated method stub
		studentDao.saveStudentInfo(studentDto);
	}

	@Override
	public void updateStudentInfo(StudentDto studentDto) {
		// TODO Auto-generated method stub
		studentDao.updateStudentDTO(studentDto);
		
	}

	@Override
	public List<StudentDto> getAllStudentInfo() {
		// TODO Auto-generated method stub
		return studentDao.getAllStudent();
	}

	@Override
	public void deleteStudentInfo(int id) {
		// TODO Auto-generated method stub
		studentDao.deleteStudentById(id);
		
	}

	@Override
	public StudentDto getStudentById(int id) {
		// TODO Auto-generated method stub
		return studentDao.getStudentById(id);
	}

}
