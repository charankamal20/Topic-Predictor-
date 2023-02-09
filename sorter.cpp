#include"sorter.h"


void result(int index[12], int num_of_students, student names[])  {

    fstream result_file;
    result_file.open("result.txt",ios::out);    ///////////////////creatinfg a file named result to print all the result there
    result_file << "\nThe top five most selected topics are:\n\n";
    ///////created the fuile
    for (int i = 0; i <5; i ++)    {
        result_file << i + 1 << ". " << topicnames[index[i]] << endl;
    }

    result_file << "\nHere,s the database of all the students who entered their choices\n"; ////////printing student database
    for (int j =0; j < num_of_students; j ++)   {
        
        result_file << names[j].name << " chose the following subjects:\n";
        
        for (int i = 0; names[j].topics[i] != 0; i++)   {
            result_file << i + 1 << ". " << topicnames[names[j].topics[i]] << endl;
        }
    }
    result_file << endl;
    //// printing the data in a table////
    for (int j = 0; j < num_of_students ; j++)  {
    result_file << left << setw(15) << names[j].name;
    }   
    result_file << endl; 
    for (int j = 0; j < num_of_students; j++)   {
        for (int i = 1; i <=15 ; i++)   {
            result_file << "-";
        }
    }
    result_file << endl;
    for (int j = 0; names[1].topics[j] != 0 || names[2].topics[j] != 0 || names[3].topics[j] != 0 || names[4].topics[j] != 0 || names[0].topics[j] != 0 ; j++)   {
        for (int i = 0; i < num_of_students; i++)   {
            if (names[i].topics[j] != 0)    {
            result_file << left << setw(15) << topicnames[names[i].topics[j]];
            }
            else    {
                result_file << left << setw(15) << " ";
            }    
        }
        result_file << endl;
    }

    result_file.close();

}

void sorting(int order[12], int index[12])  {
    int flag = 0;
    int orderdup[12];
    for(int i = 0; i<12; i++)   {
        index[i] = 0;
        orderdup[i] = order[i];
    }  
    ///////////sorting the array using selection sort
    for (int i=0; i<12; i++ ){
		for (int j= i; j <= 11 ; j++)   {
			if (order[i]<order[j])  {
				flag = order[i];
				order[i] = order[j];
				order[j] = flag;
			}				
		}
	}
    /////////////sorted the array
    
    for (int i = 0; i < 12; i++)    {
        for(int j = 0; j<12; j++)   {
            if (order[i] == orderdup[j])    {
                orderdup[j] = 9;
                index[i] = j;
                break;
            }
        }
    }
    
    //result(index);
}