#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{

    int x1 = 3;
    int y1 = 4; 
    int x2 = -1;
    int y2 =  0;
     int dist = (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
    int shortDist = sqrt(dist);
    cout<<shortDist<<endl;
}