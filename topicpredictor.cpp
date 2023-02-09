#include<iostream>
#include<string>
//#include<fstream>
//#include<iomanip>
#include"sorter.h"

using namespace std;

student Names[5];

int main()  {

    int flag = 1;
    int j =0;
    int order[12],index[12];
    int num_of_students = 0;
    for (int i = 0; i < 12; i++)    {
        order[i] = 0;
    }

    for (j = 0; j < 5 ; j++) {
    cout << "\nPlease enter your name: \n";
    cin >> Names[j].name;
    cout << "Enter the S.No of choice of topics you know: \n";
    
    for(int i=0; i < 12; i++)   {
        cout << i + 1 << ": " << topicnames[i] << "\n";
    }

    cout << "\nTo end your selection enter: 0 at any time.\n";

    /*for(int i=0; i < 12; i++)    {
        cin >> Names[j].topics[i];
        if(Names[j].topics[i] == 0) {
            break;
        }

    }

    cout << "\nFor entry of next student enter: 1\nIf you want to quit enter: 0\n";
    cin >> flag;
    if (flag == 0)   {
        cout << "\nYou have entered the data of " << j + 1 << " students";
        break;
    }
    } */

    for (int i = 0; i<12; i++)  {
        label:
        cin >> flag;

        if (flag != 0 && flag <= 12)  {
        Names[j].topics[i] = flag;
        switch(flag)    {
            case 1:
                order[0] = order[0] + 1;
                break;
            case 2:
                order[1] = order[1] + 1;
                break;
            case 3:
                order[2] = order[2] + 1;
                break;
            case 4:
                order[3] = order[3] + 1;
                break;
            case 5:
                order[4] = order[4] + 1;
                break;
            case 6:
                order[5] = order[5] + 1;
                break;
            case 7:
                order[6] = order[6] + 1;
                break;
            case 8:
                order[7] = order[7] + 1;
                break;
            case 9:
                order[8] = order[8] + 1;
                break;
            case 10:
                order[9] = order[9] + 1;
                break;
            case 11:
                order[10] = order[10] + 1;
                break;
            case 12:
                order[11] = order[11] + 1;
                break;
            default:
                break;
        }
        }
        else if (flag > 12)   {
            cout << "\n:::enter the serial number from the topic list only:::\n";
            goto label;
        }
        else {
            Names[j].topics[i] = 0;
            break;
        }
    }
    
    if (j != 4) {
        cout << "\nFor entry of next student enter: 1\nIf you want to quit enter: 0\n";
        cin >> flag;
    }
    else    {
        flag = 0;
    }
    if (flag == 0)   {
        cout << "\nYou have entered the data of " << j + 1 << " students\n";
        num_of_students = j + 1;
        break;
    }

    /*algorithm();

    cout << "\n \nThe results are as follows: \n";
    for(int i = 0; i<5; i++)   {
        cout << index[i] << ": " << topicnames[index[i]] << "\n";
    }
    for (int i = 0; i < 12; i++)    {
        cout << order[i] << "\n";
    }*/

    }

    sorting(order,index); 
    result(index, num_of_students, Names);

    return 0;
}