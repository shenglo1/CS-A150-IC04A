#include <iostream>
#include <string>
using namespace std;

/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file main.cpp
 */

//#define TESTING   // Uncomment to run your test code
#include "cs150check.h"

string STUDENT = "ilo";    // Add your name Blackboard/occ-email ID
bool TESTING = true;

/**
 * Read a line of input as a string and print
 * the entire string, with all uppercase characters
 * replaced by lowercase and all lowercase characters
 * replaced by uppercase. Don't modify the string
 * itself.
 *
 * @return 0 for success.
 */
int run()
{
    cout << "Enter a string and press enter: ";
    // Read an entire line of text here
    string line;
    getline(cin, line);


    cout << "Result: [";
    // Process your string character-by-character here
    
    for (size_t i = 0, len = line.length(); i < len; i++)
    {
        char c = line.at(i);
        int diff = 'a' - 'A';
        if(c >= 'a' && c <= 'z')
            cout << static_cast<char>(c - diff);
        else if (c >= 'A' && c <= 'z')
            cout << static_cast<char>(c + diff);
        else
            cout << c;
    }




    // Your code goes above this
    cout << "]" << endl;

    return 0;
}

