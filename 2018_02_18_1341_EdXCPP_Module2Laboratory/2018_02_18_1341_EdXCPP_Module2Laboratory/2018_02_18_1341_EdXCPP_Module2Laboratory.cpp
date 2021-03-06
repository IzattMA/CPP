// 2018_02_18_1341_EdXCPP_Module2Laboratory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

using namespace std;

int main()
{
	//----- Instantiate Students -----
	Student* student1_ = new Student("Tom", "Reisz", 21, "1414 E 59th Street", "Chicago", "+1 (773) 753-2270");
	Student* student2_ = new Student("Gerry", "Seidler", 22, "1414 E 59th Street", "Chicago", "+1 (773) 753-2270");
	Student* student3_ = new Student("Mike", "Izatt", 26, "1414 E 59th Street", "Chicago", "+1 (773) 753-2270");


	//----- Instantiate Course -----
	Course* course_ = new Course("Intermediate C++");


	//----- Add Students to the Course object -----
	course_->AddStudent(*student1_, 1);
	course_->AddStudent(*student2_, 2);
	course_->AddStudent(*student3_, 3);

	//----- Instantiate the Teacher -----
	Teacher* teacher_ = new Teacher("Subrahmanyan", "Chandrasekhar", 62, "5650 S Ellis Ave", "Chicago", "+1 (773) 702-7823");

	//----- Add the Teacher to the Course -----
	course_->AddTeacher(*teacher_);


	//===== Output =====
	cout << "The Name of the Course is: " << course_->GetCourseName() << endl;
	teacher_->GradeStudent(); //has its own cout
	teacher_->SitInClass();

	Student stud1;
	cout << stud1.GetFirstName() << "|" << stud1.GetLastName() << "|" << stud1.GetAge() << endl;

	//----- GC -----
	delete student1_;
	delete student2_;
	delete student3_;
	delete course_;
	delete teacher_;
	//delete stud1;
    return 0;
}

