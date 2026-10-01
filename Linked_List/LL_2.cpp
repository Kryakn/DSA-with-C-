#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    node *first = new node();

    
    node *second = new node();

    
    node *third = new node();

    
    first->data = 100;

    
    first->next = second;

    
    second->data = 1200;

    
    second->next = third;

    
    third->data = 1400;

    
    cout << first << " " << second << " " << third << " " << first->data << " " << second->data << " " << third->data;

    
    return 0;
}