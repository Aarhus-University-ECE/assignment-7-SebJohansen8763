#include "stack.h"
#include <assert.h>
#include <stdbool.h>

void initialize(stack* s){
    /* implement initialize here */
    s->head = NULL;  
}

void push(int x, stack* s){
    node *element = (node *)malloc(sizeof(node));
    element->next = s->head;
    s->head = element;
    element->data = x;
}

int pop(stack* s){
  assert(s->head);
  int popped = s->head->data;
  s->head = s->head->next;

  return popped;
}

bool empty(stack* s){
  if(s->head == NULL){
    return true;
  }
  return false;
}

bool full(stack* s) {
   
  return false;
}
