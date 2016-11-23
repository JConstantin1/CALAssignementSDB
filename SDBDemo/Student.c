#include "Student.h"

Student* AddStudent(int a, int b, char *c)
{
	Student *s;
	s = (Student*)malloc (sizeof(Student));
	(*s).age = a;
	strcpy(s->name, c);
	//(*s).name = c;
	s -> student_nr = b;
	return s;
}

