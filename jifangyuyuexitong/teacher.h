#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Identity.h"
#include <string>
#include "orderFile.h"
#include <vector>

class Teacher :public Identity {
public:

	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empId, string name, string pwd);

	//�˵�����
	virtual void openMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

	int m_EmpId;	//��ʦ���
};