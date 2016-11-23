#include "Class.h"

Student* AddClass(int a, int b, char *c)
{
	Class *c;
	c = (Class*)malloc (sizeof(Class));
	(*c).id = a;
	strcpy(c->name, c);
	//(*s).name = c;
	c -> semester = b;
	return c;
}
