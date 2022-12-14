#ifndef STUDENT_H
/* ���� �ҽ������� ����ϴٺ���,
 * �ҽ����Ͽ��� student.h�� ������ include �Ǵ� ��찡
 * �߻��� �� ����.
 * �ҽ����Ͽ��� ���� ��������� ������ include�Ǹ� ���� �߻�!
 *
 * ���� ifndef�� ���� STUDENT_H��� ��ũ�ΰ�
 * ���ǵǾ� ���� ���� ��쿡�� �Ʒ� �ڵ尡 ���Եǵ��� ��.
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