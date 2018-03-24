#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#include "randomNumber.h"
#include "readAnswer.h"

const int x=5;

int main()
{
    srand(time(0));

    ReadAnswer ra1;
    int tab[x];
    int i,j;

    i=0;
    do{
        tab[i]=_randomNumber();
        if(i==0){
            //cout<<tab[i]<<" ";
            ra1._readAnswer(tab[i]);
        }
        else{
            j=0;
            do{
                if(tab[j]!=tab[i]){
                    j++;
                }
                else{
                    tab[i]=_randomNumber();
                    j=0;
                }
            }while(j!=i);
            //cout<<tab[i]<<" ";
            ra1._readAnswer(tab[i]);
        }
        i++;
    }while(i!=x);

    return 0;
}
