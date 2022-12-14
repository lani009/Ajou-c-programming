#include "student.h"
#include <stdio.h>

int main(void)
{
    // Student 구조체 사용 가능 + get_student 함수 사용 가능
    Student* stu1 = get_student("James", 22, "202021167");

    printf("%s %d %s\n", stu1->name, stu1->age, stu1->id);

    get_student("Test", 0, "Test");
    get_student("Test", 0, "Test");
    get_student("Test", 0, "Test");
    get_student("Test", 0, "Test");
    get_student("Test", 0, "Test");

    printf("Created Students len = %d\n", len_created_students());

    return 0;
}