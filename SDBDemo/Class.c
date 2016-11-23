#include "Class.h"

Class* AddClass(int a, int b, char *d)
{
	Class *c;
	c = (Class*)malloc (sizeof(Class));
	(*c).id = a;
	strcpy(c->name, d);
	//(*s).name = c;
	c -> semester = b;
	return c;
}
