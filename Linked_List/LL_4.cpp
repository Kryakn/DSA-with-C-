#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
       this->data = data;
        next = NULL;
    }
};
int main()
{
    node *first = new node(10);

    node *second = new node(20);

    node *third = new node(30);

    node *fourth = new node(40);

    node *fifth = new node(50);

        
    first->next = second;

    second->next = third;

    third->next = fourth;

    fourth->next = fifth;
    

    return 0;
}