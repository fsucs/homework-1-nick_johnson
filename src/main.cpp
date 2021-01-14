
/**
@mainpage COP 3330 Project 1

@author Nick Johnson

Simple program that outputs the highest count of a single character in a string.
Two for loops; the first runs through each printable ASCII character, the second
runs through the entire length of the string input by the user.
Assumes that there is one character with the highest count.
Accounts for uppercase and lowercase letters.

*/

#include <iostream>
#include <example.hpp>
#include <assert.h>
#include <string>

int get_max_count(std::string sinput)
{
    int MaxCount = 0;

    for(char ch = 32; ch < 127; ch++)
    {
        int count = 0;

        for(int i = 0; i < sinput.size(); i++)
        {
            if(ch == sinput[i])
            {
                count++;
            }
        }

        if(count > MaxCount)
        {
            MaxCount = count;
        }

    }

    return MaxCount;
}

int main(int argc, char *argv[]){
    using namespace std;
    
    if (argc >= 2){
        string test1("c++");
        assert(get_max_count(test1) == 2);
    } else {
        string line; 
        cout << "Please input a string: "; 
        getline(cin, line);
        cout << get_max_count(line) << endl;
    }

	return 0;

}
