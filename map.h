#pragma once
#include"status.h"
//#define M=20;

//all the coordinates begin with 0 except user input

class map
{
private:
	//status m[20][20];
	status(*_m)[20] = new status[20][20];
	
public:
	
	map();
	~map();
	void first_hit(int x, int y);//first hit
	int hit(int x, int y);		//hit some place,bomb:return -1 else:return 0
	int surrounding_check(int x,int y);	//check num of surrounding bombs(coordinates begin with 0)
	int initial(int level);	//initialize the map in order to make sure that first move won't hit a bomb,level stands for nums of bombs
	int output();				//output the whole map
	void output_cheating();
	void output_emptymap();
	int refresh();
};

