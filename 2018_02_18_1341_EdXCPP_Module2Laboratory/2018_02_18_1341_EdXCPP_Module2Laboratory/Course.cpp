#include "stdafx.h"
#include "course.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>


using namespace std;


Course::Course()
{
}

Course::Course(string courseName) {

	this->_courseName = courseName;
}


Course::~Course()
{
}


void Course::AddTeacher(Teacher teacher) {

	this->_teacher = teacher;

}


void Course::AddStudent(Student student, int studentID) {

	this->_students[studentID - 1] = student;

}

string Course::GetCourseName() {

	return this->_courseName;
}
