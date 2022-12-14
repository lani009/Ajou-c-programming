#include "student.h"

int student_cnt = 0; // 여태 까지 생성된 학생의 개수

/// <summary>
/// 학생 인수를 받아, 학생 구조체를 생성
/// </summary>
/// <param name="name">학생 이름</param>
/// <param name="age">학생 나이</param>
/// <param name="id">학생 학번</param>
/// <returns>생성된 학생 구조체의 주소값</returns>
Student* get_student(char* name, int age, char* id)
{
    Student* student = (Student*)malloc(sizeof(Student));
    strcpy(student->name, name);
    student->age = age;
    strcpy(student->id, id);
    student_cnt++;
    return student;
}

/// <summary>
/// 생성된 학생 수 반환
/// </summary>
/// <returns>여태까지 생성된 학생의 개수</returns>
int len_created_students()
{
    return student_cnt;
}