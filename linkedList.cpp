#include <iostream>
#include <algorithm>

using namespace std;
class node
{
public:
    node(int val)
    {
        data = val;
        next = NULL;
    }
    int data;
    node *next = NULL;
    // ~node() {}
};
void tail(node *&head, int val)
{
    node *NEW = new node(val);
    if (head == NULL)
    {
        head = NEW;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NEW;
}
void abss(int &param)
{
    if (param < 0)
    {
        param *= -1;
    }
}
int isHappyNumber()
int main(void)
{
    
}