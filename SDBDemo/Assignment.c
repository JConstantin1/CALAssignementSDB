#include "Assignment.h"
#include <stdlib.h>
#include <string.h>

Assignment* createAssignment(int course_num, int teacher_num){
    Assignment *a;
    a = (Assignment*)malloc (sizeof(Assignment));
    a->course_num = course_num;
    a->teacher_num = teacher_num;
    return a;
}
