#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include "Task 2.h"
using namespace std;

void List::push_back(string _data) 
{
    Node* node = new Node(_data);
        
    if (head == NULL) 
     {
        head = node;
        cout << "\nNew node added (first node)\n" << endl;
        return;
     }

     Node* temp = head;

     while (temp->next != NULL) 
     {
         temp = temp->next;
     }

     temp->next = node;

     cout << "\nNew node added\n" << endl;
}

void List::print() 
{
    if (head == NULL)
    {
        cout << "\nLinked List is empty\n" << endl;
        return;
    }
    
    cout << endl << "----Linked List items------" << endl;

    Node* temp = head;

    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    cout << endl << "---------------------------\n" << endl;
}

void List::remove(string _data) 
{
    while (head && (head->data == _data))
    {
        head = head->next;
    }

    if (head == NULL)
    {
        cout << "\nLinked list is empty\n" << endl;
        return;
    }

    auto p = head;
    Node* prev = head;
    p = p->next;

    while (p) 
    {
        if (p->data == _data) 
        { 
            prev->next = p->next;
            cout << "\nItem removed\n" << endl;
        }

        else
        {
            prev = p;
        }

        p = p->next;
     }
}

void tokenize(string const& str, const char delim, vector<string>& out)
{
    stringstream ss(str);

    string s;
    while (getline(ss, s, delim))
    {
        out.push_back(s);
    }
}


