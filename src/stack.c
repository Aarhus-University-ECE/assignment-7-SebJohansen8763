#include "stack.h"
#include <assert.h>
#include <stdbool.h>

void initialize(stack* s){
    /* implement initialize here */
    s->head = NULL;  
}

void push(int x, stack* s){
    node *element = (node *)malloc(sizeof(node)); // laver en pointer ved navn element som allokerer plads i memory til en node
    element->next = s->head; // sætter elements next til at være den samme som stackens head
    s->head = element; // ændrer stackens head til at være lig med element
    element->data = x; // element nodens data bliver sat til x,
}

int pop(stack* s){
  assert(s->head); // asserter at stacken skal pointe på head
  int popped = s->head->data; // laver en integer som hedder popped hvor stackenns head skal pointe på dataen
  s->head = s->head->next; // ændrer stackens head til at pointe på next

  return popped;
}

bool empty(stack* s){
  if(s->head == NULL){ // tjekker om stackens head er null og hvis den er null er stacken tom
    return true;
  }
  return false;
}

bool full(stack* s) {
   //kan ikke være fuld fordi den fortsætter uendeligt
  return false;
}
