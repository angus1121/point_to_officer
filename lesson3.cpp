#include<iostream>
#include<array>
using namespace std;
bool Find(int (*a)[4], int row, int col, int num);
int main()
{
	int c[4][4] = { 1, 2, 8, 9 , 2, 4, 9, 12 ,  4, 7, 10, 13 , 6, 8, 11, 15  };
	cout << Find(c, 4, 4, 7) << endl;
	cout << Find(c, 4, 4, 3) << endl;
	cout << Find(c, 4, 4, 16) << endl;
	cout << Find(c, 4, 4, -2) << endl;
	cout << Find(c, 4, 4, 13) << endl;
	system("pause");
	return 0;
}

bool Find(int (*a)[4], int row, int col, int num)
{
	int i = 0, j = col-1;
	if (a == nullptr)
	{
		return false;
	}
	while ((i < row) &&(i>=0)&& (j >= 0)&&(j<col))
	{
		if (a[i][j] > num)
		{
			j--;
		}
		else if (a[i][j] < num)
		{
			i++;
		}
		else if (a[i][j]==num)
		{
			return true;
		}
	}
	return false;
	
}