#pragma once


#include <string>
#include "Teacher.h"
#include "Student.h"

using namespace std;

class Course {

private:

	Teacher _teacher;

	Student _students[3];

	string _courseName;

public:

	Course();

	Course(string);

	~Course();

	void AddStudent(Student,int);

	void AddTeacher(Teacher);


	string GetCourseName();

};