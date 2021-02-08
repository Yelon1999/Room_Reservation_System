#pragma once
#include <iostream>
#include "Identity.h"
#include <vector>
#include "computerRoom.h"
#include <string>
#include <fstream>
#include "globalFile.h"
#include "orderFile.h"

using namespace std;

class Student :public Identity {
public:
	//Ĭ�Ϲ���
	Student();

	//�вι��죨ѧ�ţ����������룩
	Student(int id, string name, string pwd);

	//�˵�����
	virtual	void openMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom> vCom;
};

