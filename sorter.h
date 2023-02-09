#ifndef SORTER_h
#define SORTER_h

#include<iomanip>
#include<fstream>

using namespace std;

class student   {

    public:
    string name;
    int topics[12];
    
};

string topicnames[12] = {"Variables","Data Types","If-Else","Switch","For Loop","Do/while Loop", "Arrays","Functions","Pointers","Strings","Structures","File I/O"};

void result(int index[12], int num_of_students, student names[]);

void sorting(int order[12], int index[12]);

#endif