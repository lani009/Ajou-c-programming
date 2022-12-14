#include "student.h"

int student_cnt = 0; // ���� ���� ������ �л��� ����

/// <summary>
/// �л� �μ��� �޾�, �л� ����ü�� ����
/// </summary>
/// <param name="name">�л� �̸�</param>
/// <param name="age">�л� ����</param>
/// <param name="id">�л� �й�</param>
/// <returns>������ �л� ����ü�� �ּҰ�</returns>
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
/// ������ �л� �� ��ȯ
/// </summary>
/// <returns>���±��� ������ �л��� ����</returns>
int len_created_students()
{
    return student_cnt;
}