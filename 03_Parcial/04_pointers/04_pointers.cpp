#include <iostream>
#include <math.h>

using namespace std;

void nochange (int a)
{
	a = a + a;
}
void change (int * a)
{
	*a = *a + *a;
}

int main()
{
	
	int x = 1;
	int y = 1;
	cout << x << " " << y << endl;
	nochange (x);
	change (&y);
	cout << x << " " << y << endl;
	
}
