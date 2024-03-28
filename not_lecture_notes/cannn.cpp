#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode
{
  valueType val;
  ListNode* next;

  ListNode(valueType val, ListNode* next=0)
    : val(val), next(next) {}
};

void print_list(ListNode* node)
{
  while(node != 0) {
    cout << node->val << endl;
    node = node->next;
  }
}

void insert_front(ListNode * header, valueType x)
{
  header->val = x;
  ListNode* newNode = new ListNode(header->val, header->next);
    header->next = newNode;


}

void free_list(ListNode*& header)
{
    while ((header -> next) != NULL)
  {
    ListNode* tmp = header -> next;
    free(header);
    header = tmp;
  } 
  free(header);
  
}

void print_list(ListNode* node)
{
  while(node != 0) {
    cout << node->val << endl;
    node = node->next;
  }
}

main()
{
  ListNode* first_header = 0;
  for(int i=0; i<5; i++) {
    ListNode* header = new ListNode(0);
    if(!first_header) {
      first_header = header;
    }
    for(int j=0; j<1000; j++) {
      insert_front(header, j);
    }
    free_list(header);
  }
  ListNode* new_header = new ListNode(0);
  new_header = new ListNode(0);
  new_header = new ListNode(0);
  cout << new_header << " " << first_header << "=" << new_header - first_header << endl;
  int dist = abs(new_header - first_header);
  if(dist < 100) {
    cout << "ok" << endl;
  } else {
    cout << "not ok" << endl;
  }
}