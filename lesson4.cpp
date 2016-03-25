#include<iostream>
#include<string>
using namespace std;
void replace(char *str, const char* rep);
int main()
{
	char* source="we are happy";
	const char *repl = " fuck ";
	replace(source,repl);
	system("pause");
	return 0;
}

void replace(char *str,const char *rep)
{
	int count = 0;
	char *ptr=str;
	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			count++;
		}
		ptr++;
	}
	int size = strlen(str) + (strlen(rep)-1)*count + 1;
	cout << strlen(str) << ' ' << strlen(rep) << endl;
	char *p = new char[size];
	p[size - 1] = '\0';
	char*p1=&str[strlen(str)-1], *p2=&p[size-2];
	char const*p3 = &rep[strlen(rep) - 1];
	int size3 = strlen(rep);
	while (p1 != str)
	{
		if (*p1 != ' ')
		{
			*p2 = *p1;
			--p2;
			--p1;
		}
		else
		{
			for (size3 = strlen(rep),p3 = &rep[strlen(rep) - 1]; size3 > 0; size3--)
			{
				*p2 = *p3;
				--p2;
				--p3;
			}
			--p1;
		}
	}
	*p2 = *p1;
	cout << p2 << endl;
	delete []p;
}