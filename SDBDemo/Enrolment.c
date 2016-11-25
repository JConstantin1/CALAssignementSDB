#include "Enrolment.h"

Enrolment* createEnrolment(int student_num, int course_num){
    Enrolment *e;
    e = (Enrolment*)malloc (sizeof(Enrolment));
    e->students_num = student_num;
    e->course_num = course_num;
    return e;
}
