struct node* copy(struct node* head) { 
struct node* kopya = NULL; 
if(head != NULL) 
do { 
concatenate(kopya, cons(head -> data)); 
head = head -> next; 
} while(head != NULL); 
return kopya; 
}
