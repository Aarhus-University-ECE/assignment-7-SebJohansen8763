#include "stack.h"
#include <assert.h>
#define STACKSIZE 10

/*typedef struct {
  int data[STACKSIZE +1];
  int top;
}stack;*/

void initialize(stack* s){
    /*implement initialize here
    post condition: s->top = -1;  */
}

void push(int x, stack* s){
    //implement push here
}

int pop(stack* s){
    /* implement pop here
  assert(s->top>=0);  */

  return -1;
}

bool empty(stack* s){
  //implement empty here
  return false;
}

bool full(stack* s) {
   /* int top = STACKSIZE -1;??????*/
  return false;
}
