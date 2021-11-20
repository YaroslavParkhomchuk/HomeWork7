#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include "Task 2.h"
using namespace std;

int main()
{
    List list;
    bool quit = false;

    do
    {
        cout << "Select option:" << endl;
        cout << "1: Add" << endl;
        cout << "2: Print" << endl;
        cout << "3: Delete" << endl;
        cout << "4: Exit" << endl;

        string input;
        getline(cin, input);

        vector<string> items;
        const char delim = ' ';
        tokenize(input, delim, items);

        if (items[0] == "add")
        {
            for (int i = 1; i < items.size(); i++)
            {
                list.push_back(items[i]);
            }
        }

        else if (items[0] == "print")
        {
            list.print();
        }

        else if (items[0] == "remove")
        {
            list.remove(items[1]);
        }

        else if (items[0] == "exit")
        {
            quit = true;
        }
    }
    while (!quit);
    return 0;
}


