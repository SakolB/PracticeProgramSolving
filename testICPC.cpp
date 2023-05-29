#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    long double yCoFact = 111111.1;
    long double xCoFact = 50000.0;
    long double y1 = 34.500000;
    long double x1 = -118.060000;
    long double y2 = 34.500012;
    long double x2 = -118.060022;

    long double dist = sqrt((pow((xCoFact*(x1-x2)), 2) + (pow((yCoFact*(y1-y2)), 2))));
    cout << dist;
    return 0;
}