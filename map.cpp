#include "stdafx.h"
#include "map.h"


using namespace std;

map::map()
{

}


map::~map()
{

}

void map::first_hit(int x, int y)
{
	(*(_m+x)+y)->hit = 1;
}

int map::hit(int x, int y)
{
	(*(_m + x) + y)->hit = 1;
	if ((*(_m+x)+y)->surrondings == 0)
	{
		switch (x)
		{
		case 0:
			switch (y)
			{
			case 0:
				if ((*(_m + x) + y+1)->hit == 0)
				{
					map::hit(x, y + 1);
				}
				//temp =(*(_m+x)+y+1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y+1)->bomb;
				 
					
				if ((*(_m + x+1) + y)->hit == 0)
				{
					map::hit(x + 1, y);
				}
				 
					
				if ((*(_m + x+1) + y+1)->hit == 0)
				{
					map::hit(x + 1, y + 1);
				}
				 
					
				break;
			case 19:
				if ((*(_m + x) + y-1)->hit == 0)
				{
					map::hit(x, y - 1); 
				}
				//temp =(*(_m+x)+y-1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y-1)->bomb;
				 
					
				if ((*(_m + x+1) + y)->hit == 0)
				{
					map::hit(x + 1, y);
				}
				 
					
				if ((*(_m + x+1) + y-1)->hit == 0)
				{
					map::hit(x + 1, y - 1);
				}
				 
					
				break;
			default:
				if ((*(_m + x) + y+1)->hit == 0)
				{
					map::hit(x, y + 1);
				}
				//temp =(*(_m+x)+y+1)->bomb +(*(_m+x)+y-1)->bomb + (*(_m+x+1)+y+1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y-1)->bomb;
				 
					
				if ((*(_m + x) + y-1)->hit == 0)
				{
					map::hit(x, y - 1);
				}
				 
					
				if ((*(_m + x+1) + y+1)->hit == 0)
				{
					map::hit(x + 1, y + 1);
				}
				 
					
				if ((*(_m + x+1) + y)->hit == 0)
				{
					map::hit(x + 1, y);
				}
				 
					
				if ((*(_m + x+1) + y-1)->hit == 0)
				{
					map::hit(x + 1, y - 1);
				}
				 
					

				break;
			}
			break;
		case 19:
			switch (y)
			{
			case 0:
				if ((*(_m + x) + y+1)->hit == 0)
				{
					map::hit(x, y + 1);
				}
				//temp =(*(_m+x)+y+1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y+1)->bomb;
				 
					
				if ((*(_m + x-1) + y)->hit == 0)
				{
					map::hit(x - 1, y);
				}
				 
					
				if ((*(_m + x-1) + y+1)->hit == 0)
				{
					map::hit(x - 1, y + 1);
				}
				 
					
				break;
			case 19:
				if ((*(_m + x) + y-1)->hit == 0)
				{
					map::hit(x, y - 1);
				}
				//temp =(*(_m+x)+y-1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y-1)->bomb;
				 
					
				if ((*(_m + x-1) + y)->hit == 0)
				{
					map::hit(x - 1, y);
				}
				 
					
				if ((*(_m + x-1) + y-1)->hit == 0)
				{
					map::hit(x - 1, y - 1);
				}
				 
					
				break;
			default:
				if ((*(_m + x) + y+1)->hit == 0)
				{
					map::hit(x, y + 1);
				}
				//temp =(*(_m+x)+y+1)->bomb +(*(_m+x)+y-1)->bomb + (*(_m+x-1)+y+1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y-1)->bomb;
				 
					
				if ((*(_m + x) + y-1)->hit == 0)
				{
					map::hit(x, y - 1);
				}
				 
					
				if ((*(_m + x-1) + y-1)->hit == 0)
				{
					map::hit(x - 1, y - 1);
				}
				 
					
				if ((*(_m + x-1) + y)->hit == 0)
				{
					map::hit(x - 1, y);
				}
				 
					
				if ((*(_m + x-1) + y+1)->hit == 0)
				{
					map::hit(x - 1, y + 1);
				}
				 
					
				break;
			}
			break;
		default:
			switch (y)
			{
			case 0:
				if ((*(_m + x-1) + y)->hit == 0)
				{
					map::hit(x - 1, y);
				}
				//temp = (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y+1)->bomb +(*(_m+x)+y+1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y+1)->bomb;
				 
					
				if ((*(_m + x-1) + y+1)->hit == 0)
				{
					map::hit(x - 1, y + 1);
				}
				 
					
				if ((*(_m + x) + y+1)->hit == 0)
				{
					map::hit(x, y + 1);
				}
				 
					
				if ((*(_m + x+1) + y)->hit == 0)
				{
					map::hit(x + 1, y);
				}
				 
					
				if ((*(_m + x+1) + y+1)->hit == 0)
				{
					map::hit(x + 1, y + 1);
				}

				 
					
				break;
			case 19:
				if ((*(_m + x-1) + y)->hit == 0)
				{
					map::hit(x - 1, y);
				}
				//temp = (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y-1)->bomb +(*(_m+x)+y-1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y-1)->bomb;
				 
					
				if ((*(_m + x-1) + y-1)->hit == 0)
				{
					map::hit(x - 1, y - 1);
				}
				 
					
				if ((*(_m + x) + y-1)->hit == 0)
				{
					map::hit(x, y - 1);
				}
				 
					
				if ((*(_m + x+1) + y)->hit == 0)
				{
					map::hit(x + 1, y);
				}
				 
					
				if ((*(_m + x+1) + y-1)->hit == 0)
				{
					map::hit(x + 1, y - 1);
				}
				break;
			default:
				if ((*(_m + x-1) + y-1)->hit == 0)
				{
					map::hit(x - 1, y - 1);
				}
				//temp = (*(_m+x-1)+y-1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y+1)->bomb +(*(_m+x)+y-1)->bomb +(*(_m+x)+y+1)->bomb + (*(_m+x+1)+y-1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y+1)->bomb;
					
				if ((*(_m + x-1) + y)->hit == 0)
				{
					map::hit(x - 1, y);
				}
				if ((*(_m + x-1) + y+1)->hit == 0)
				{
					map::hit(x - 1, y + 1);
				}
				if ((*(_m + x) + y-1)->hit == 0)
				{
					map::hit(x, y - 1);
				}
				if ((*(_m + x) + y+1)->hit == 0)
				{
					map::hit(x, y + 1);
				}
				if ((*(_m + x+1) + y-1)->hit == 0)
				{
					map::hit(x + 1, y - 1);
				}
				if ((*(_m + x+1) + y)->hit == 0)
				{
					map::hit(x + 1, y);
				}
				if ((*(_m + x+1) + y+1)->hit == 0)
				{
					map::hit(x + 1, y + 1);
				}
				break;
			}
			break;
		}
	}
	
	if ((*(_m+x)+y)->bomb == 0)
		return 0;
	if ((*(_m+x)+y)->bomb == 1)
		return -1;
	
}

int map::surrounding_check(int x, int y)		//this function is right now
{
	int temp=0;		//bombs surrounding
	switch (x)
	{
	case 0:
		switch (y)
		{
		case 0:
			temp =(*(_m+x)+y+1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y+1)->bomb;
			break;
		case 19:
			temp =(*(_m+x)+y-1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y-1)->bomb;
			break;
		default:
			temp =(*(_m+x)+y+1)->bomb + (*(_m+x)+y-1)->bomb + (*(_m+x+1)+y+1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y-1)->bomb;
			break;
		}
		break;
	case 19:
		switch (y)
		{
		case 0:
			temp =(*(_m+x)+y+1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y+1)->bomb;
			break;
		case 19:
			temp =(*(_m+x)+y-1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y-1)->bomb;
			break;
		default:
			temp =(*(_m+x)+y+1)->bomb +(*(_m+x)+y-1)->bomb + (*(_m+x-1)+y+1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y-1)->bomb;
			break;
		}
		break;
	default:
		switch (y)
		{
		case 0:
			temp = (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y+1)->bomb +(*(_m+x)+y+1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y+1)->bomb;
			break;
		case 19:
			temp = (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y-1)->bomb +(*(_m+x)+y-1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y-1)->bomb;
			break;
		default:
			temp = (*(_m+x-1)+y-1)->bomb + (*(_m+x-1)+y)->bomb + (*(_m+x-1)+y+1)->bomb +(*(_m+x)+y-1)->bomb +(*(_m+x)+y+1)->bomb + (*(_m+x+1)+y-1)->bomb + (*(_m+x+1)+y)->bomb + (*(_m+x+1)+y+1)->bomb;
			break;
		}
		break;
	}
	return temp;
}

int map::initial(int level)
{
	
	int x = 0, y = 0;
	for (int i = 0; i < level; i++)
	{
		srand(234);
		x = rand() % 20; 
		srand(time(NULL));
		y = rand() % 20;
		if ((*(_m + x) + y)->bomb == 1 || (*(_m + x) + y)->hit == 1)
		{
			i--;
		}
		 
		{
			(*(_m+x)+y)->bomb = 1;
		}
	}
	for (int x = 0; x < 20; x++)
	{
		for (int y = 0; y < 20; y++)
		{
			(*(_m+x)+y)->surrondings = surrounding_check(x, y);
		}
	}
	return 0;
}

int map::output()
{
	system("cls");
	int hitted=0;
	int bombs=0;
	cout << "  ";
	for (int i = 1; i < 21; i++)
	{
		cout << setw(4) << i ;
	}
	cout << endl<<endl;
	for(int y=0;y<20;y++)
	{
		cout <<setw(2)<<y + 1<<"  ";
		for (int x = 0; x < 20; x++)
		{

			if((*(_m+x)+y)->hit == 0)
			{
				cout << "__  ";
				if ((*(_m + x) + y)->bomb == 1)
				{
					bombs++;
				}
			}
			if ((*(_m+x)+y)->hit == 1)
			{
				hitted++;
				if ((*(_m+x)+y)->bomb == 0)
				{
					cout <<setw(2)<< (*(_m+x)+y)->surrondings << "  ";
				}
				if ((*(_m+x)+y)->bomb == 1)
				{
					bombs++;
					cout <<" X" << "  ";
				}
			}		
			
		}
		cout << endl<<endl;
	}
	if (hitted != 400 - bombs)
	{
		cout << "x-coodinate begins with 1 and increases from left to right" << endl;
		cout << "y-coordinate begins with 1 and increases from top to bottom" << endl;
		cout << "input the abscissa and ordinate:" << endl;
		return 0;
	}
	else
	{
		cout << "congratulations! bored man......"<<endl;
		return 1;
	}
}

void map::output_cheating()
{
	cout << "  ";
	for (int i = 1; i < 21; i++)
	{
		cout << setw(4) << i;
	}
	cout << endl << endl;
	for (int y = 0; y<20; y++)
	{
		cout << setw(2) << y + 1 << "  ";
		for (int x = 0; x < 20; x++)
		{

			/*if ((*(_m+x)+y)->hit == 0)
			{
				cout << "__  ";
			}*/
			if (1)
			{
				if ((*(_m+x)+y)->bomb == 0)
				{
					cout << setw(2) << (*(_m+x)+y)->surrondings << "  ";
				}
				if ((*(_m+x)+y)->bomb == 1)
				{
					cout << " X" << "  ";
				}
			}

		}
		cout << endl << endl;
	}

	cout << "x-coodinate begins with 1 and increases from left to right" << endl;
	cout << "y-coordinate begins with 1 and increases from top to bottom" << endl;
	cout << "input the abscissa and ordinate:" << endl;
}

void map::output_emptymap()
{
	system("cls");
	cout << "  ";
	for (int i = 1; i < 21; i++)
	{
		cout << setw(4) << i;
	}
	cout << endl << endl;
	for (int y = 0; y<20; y++)
	{
		cout << setw(2) << y + 1 << "  ";
		for (int x = 0; x < 20; x++)
		{

			if (1)
			{
			cout << "__  ";
			}
			/*if (1)
			{
				if ((*(_m+x)+y)->bomb == 0)
				{
					cout << setw(2) << (*(_m+x)+y)->surrondings << "  ";
				}
				if ((*(_m+x)+y)->bomb == 1)
				{
					cout << " X" << "  ";
				}
			}*/

		}
		cout << endl << endl;
	}

	cout << "x-coodinate begins with 1 and increases from left to right" << endl;
	cout << "y-coordinate begins with 1 and increases from top to bottom" << endl;
	cout << "input the abscissa and ordinate:" << endl;
}

int map::refresh()
{
	for (int x=0; x < 20; x++)
	{
		for (int y=0; y < 20; y++)
		{
			(*(_m+x)+y)->bomb = 0;
			(*(_m+x)+y)->hit = 0;
			(*(_m+x)+y)->surrondings = 0;
		}
	}
	return 0;
}
