int count(struct node *head) { 
int counter = 0; 
while(head != NULL) { 
sayýlmazdý 
counter++; 
head = head -> next; 
} 
return counter; 
} 

// recursive

int count_recursive(struct node *head) { 
if (head == NULL) 
return 0; 
return count_recursive(head->next) + 1; 
} 
