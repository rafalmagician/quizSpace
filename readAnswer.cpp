#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
#include "readAnswer.h"
#include "checkData.h"
#include "points.h"

Points p1;
CheckData cd1;
fstream file;

void ReadAnswer::_showQuestion(){
    cout<<endl<<content_Question<<endl;
    cout<<"a) "<<a<<endl;
    cout<<"b) "<<b<<endl;
    cout<<"c) "<<c<<endl;
    cout<<"d) "<<d<<endl;
    cout<<"==================="<<endl;
    cout<<"Answer: ";
}
void ReadAnswer::_openFile(){
    file.open("SPACE.txt",ios::in);

    if(file.good()==false){
        cout<<"The file could not be opened!"<<endl;
        exit(0);
    }
    //cout<<"The file is opened!"<<endl;
}
void ReadAnswer::_closeFile(){
    //cout<<"The file is closed!"<<endl;
    file.close();
}
void ReadAnswer::_readAnswer(int num){
    number_Line=(num-1)*6+1;
    current_Number=1;

    _openFile();
    while(getline(file,line)){
        if(current_Number==number_Line) content_Question=line;
        if(current_Number==number_Line+1) a=line;
        if(current_Number==number_Line+2) b=line;
        if(current_Number==number_Line+3) c=line;
        if(current_Number==number_Line+4) d=line;
        if(current_Number==number_Line+5) correct_Answear=line;
        current_Number++;
    }
    _closeFile();
    _showQuestion();
    //cout<<endl<<correct_Answear[0]<<endl;
    p1._points(cd1._checkData(),correct_Answear[0]);
    cout<<"points: "<<p1.point<<endl;
}
