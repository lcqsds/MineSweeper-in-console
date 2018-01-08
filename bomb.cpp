// bomb.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int main()
{
	map m1;
	int level=20;
	int x=1, y=1;
	int run_check = 1;
	int run_check_inside = 1;

	do
	{
		m1.refresh();
		run_check_inside = 1;
		cout << "input num of bombs:(2<=num<=300)";
		cin >> level;
		while (1)
		{
			if (level >= 2 && level <= 300)
			{
				//m1.initial(level);		//this line should be deleted after testing because wo have to make sure that first move won't hit a bomb
				break;
			}
			else
			{
				cout << "error! inout again:";
				cin >> level;
			}
		}

		m1.output_emptymap();		//this will cout an empty map,initialization will begin soon
		cin >> x >> y;
		while (1)
		{
			if(x>0 && x<21 && y>0 && y<21)
			{
				m1.first_hit(x-1, y-1);
				break;
			}
			else
			{
				cout << "error! inout again:";
				cin >> x >> y;
			}
		}
		//m1.first_hit(x, y);
		m1.initial(level);
		m1.output();
		do
		{
			
			cin >> x >> y;
			while (1)
			{
				if (x>0 && x<21 && y>0 && y<21)
				{
					//m1.hit(x, y);
					break;
				}
				else
				{
					cout << "error! inout again:";
					cin >> x >> y;
				}
			}
			if (m1.hit(x-1, y-1) == 0)
			{
				if(m1.output()==0){}
				else
				{
					run_check_inside = 0;
					cout << "1=new game  2=exit" << endl;
					cin >> run_check;
				}
				//m1.output();
			}
			else
			{
				m1.output();

				cout << "BOMB!" << endl << "1=new game  2=exit" << endl;
				cin >> run_check;
				run_check_inside = 0;
			}
		} while (run_check_inside == 1);

		//m1.output();
	} while (run_check == 1);

	//system("pause");
    return 0;
}

