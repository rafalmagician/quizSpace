#include <iostream>
using namespace std;
#include "checkData.h"

char CheckData::_checkData(){
    for(int i=0;i<1;){
        cin>>answear_The_User;
        if((answear_The_User>=97)&&(answear_The_User<=100)){
            //cout<<(char)(answear_The_User);
            i++;
        }
        else if((answear_The_User>=65)&&(answear_The_User<=68)){
            //cout<<(char)(answear_The_User+32);
            i++;
        }
        else{
            cout<<"Answers only from 'a' to 'd': ";
        }
    }
    return answear_The_User;
}
