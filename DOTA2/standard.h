#pragma once
#include <iostream>
using namespace std;

void def_heros(void);

typedef struct {
	string name;							//英雄名字
	int control_skills_num;					//控制技能数
	bool first_control_ability;				//先手能力
	bool ignoring_bkb_control_ability;		//无视魔免控
	bool early_breakout_ability;			//前期爆发
	bool late_breakout_ability;				//后期爆发
	int early_ability;						//对线能力
	int gank_ability;						//gank能力
	int core_ability;						//后期能力
}hero;