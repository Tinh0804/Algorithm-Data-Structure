#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Time t1(11,59);
	t1.display();
	++t1;
	t1.display();
	
	Time t2(5,29);
	t2.display();
	(t2++).display();
	t2.display();
	return 0;
}
