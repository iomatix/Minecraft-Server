#include <iostream>
#include <windows.h>
#include <math.h>
#include <limits>

using namespace std;





//formula = 150+47*(lvl-1)+14*(lvl-1)*lvl;
int main(){
cout.precision(numeric_limits<double>::digits10);

double oblicz;
unsigned int max_lvl=255;
for(unsigned int lvl=1;lvl<=max_lvl;lvl++)
{
oblicz = 150+(100*(lvl-1))+(45*(lvl-1)*lvl);
cout<<"[LVL #"<<lvl<<"] = "<<oblicz<<endl;
}



system("pause");
return 0;}
