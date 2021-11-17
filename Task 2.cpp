#include<iostream>
using namespace std;

template <typename T>
class Node 
{
public:
    Node() { this->next = NULL; }

private:
    T data;
    Node<T>* next;
    template <typename T> friend class List;
};

template <typename T>
class List 
{
public:
    List() { this->head = NULL; }

    void push_back(T item) 
    {
        Node<T>* node = new Node<T>[1];
        node->data = item;
        if (head == NULL) 
        {
            head = node;
            cout << "\nNew node added (first node)\n" << endl;
            return;
        }
        Node<T>* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = node;
        cout << "\nNew node added\n" << endl;
    }
    void print() 
    {
        if (head == NULL)
        {
            cout << "Linked List is empty\n" << endl;
        }
        cout << endl << "----Linked List items------" << endl;
        Node<T>* temp = head;
        while (temp != NULL) 
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl << "---------------------------\n" << endl;
    }
    void remove() 
    {
        if (head == NULL) 
        {
            cout << "\nLinked list is empty\n" << endl;
            return;
        }
        if (head->next == NULL) 
        {
            head = NULL;
            cout << "\nLast item removed\n" << endl;
        }
        Node<T>* temp = head;
        while (temp != NULL) 
        {
            if (temp->next->next == NULL) 
            {
                temp->next = NULL;
                cout << "\nItem removed\n" << endl;
                break;
            }
            temp = temp->next;
        }
    }
    
private:
    Node<T>* head;
};

int main() 
{
    List<int> list;
    int choice, item;
    bool quit = false;

    do 
    {
        cout << "Select option:" << endl;
        cout << "1: Insert" << endl;
        cout << "2: Display items" << endl;
        cout << "3: Delete" << endl;
        cout << "4: Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter item to insert: ";
            cin >> item;
            list.push_back(item);
            break;
        case 2:
            list.print();
            break;
        case 3:
            list.remove();
            break;
        case 4:
            quit = true;
            break;
        default:
            cout << "\nInvalid selection\n" << endl;
            break;
        }
    } 
    while (!quit);
    return 0;
}
