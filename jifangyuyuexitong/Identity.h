#pragma once	//��ֹͷ�ļ�����
#include <iostream>

using namespace std;

//��ݳ�����
class Identity {
public:

	//�����˵�
	virtual void openMenu() = 0;

	string m_Name;	//�û���
	string m_Pwd;	//����
};