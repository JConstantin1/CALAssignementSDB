#include "Teacher.h"

Teacher* addTeacher(int teacher_num, char *name){
    Teacher *t;
    t = (Teacher*)malloc (sizeof(Teacher));
    strcpy(t->name , name);
    t->teacher_nr = teacher_num;
    return t;
}

