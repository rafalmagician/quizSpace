#include <iostream>
using namespace std;
#include "points.h"

void Points::_points(char A,char B){
    point=0;

    if(A==B){
        point+=1;
    }
    else{
        point+=0;
    }
}
