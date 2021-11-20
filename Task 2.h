#pragma once

#include<iostream>
using namespace std;

struct Node
{
    Node* next;
    string data;
    Node(string _data) : data(_data), next(nullptr) {}
};

class List
{
public:
    List() : head(nullptr) {}
    ~List();
    void push_back(string _data);
    void print();
    void remove(string _data);
   
private:
    Node* head;
};

void tokenize(string const& str, const char delim, vector<string>& out);
