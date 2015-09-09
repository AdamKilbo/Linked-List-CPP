#include <iostream>
using namespace std;

class LinkedList
{
	struct Node
	{
		int x;
		Node *next;
	};
public:
	LinkedList()
	{
		head = NULL;
	}

	void addValue(int val)
	{
		Node *n = new Node();
		n->x = val;
		n->next = head;

		head = n;
	}

	int popValue()
	{
		Node *n = head;
		int ret = n->x;

		head = head->next;
		delete n;
		return ret;
	}

private:
	Node *head;
};

int main()
{
	LinkedList list;
	for (double i = 0; i < 1000; i++)
		list.addValue(10);
	list.addValue(5);
	list.addValue(10);
	list.addValue(20);

	cout << list.popValue() << endl;
	cout << list.popValue() << endl;
	cout << list.popValue() << endl;
	cout << list.popValue() << endl;

	return 0;	
}