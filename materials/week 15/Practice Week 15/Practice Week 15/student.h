#ifndef STUDENT_H
/* 다중 소스파일을 사용하다보면,
 * 소스파일에서 student.h가 여러번 include 되는 경우가
 * 발생할 수 있음.
 * 소스파일에서 같은 헤더파일이 여러번 include되면 오류 발생!
 *
 * 따라서 ifndef를 통해 STUDENT_H라는 매크로가
 * 정의되어 있지 않을 경우에만 아래 코드가 포함되도록 함.
 */
#define STUDENT_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[20];
    int age;
    char id[10];
} Student;

Student* get_student(char* name, int age, char* id);
int len_created_students();

#endif // !STUDENT_H