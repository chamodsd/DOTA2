#pragma once
#include <iostream>
using namespace std;

void def_heros(void);

typedef struct {
	string name;							//Ӣ������
	int control_skills_num;					//���Ƽ�����
	bool first_control_ability;				//��������
	bool ignoring_bkb_control_ability;		//����ħ���
	bool early_breakout_ability;			//ǰ�ڱ���
	bool late_breakout_ability;				//���ڱ���
	int early_ability;						//��������
	int gank_ability;						//gank����
	int core_ability;						//��������
}hero;