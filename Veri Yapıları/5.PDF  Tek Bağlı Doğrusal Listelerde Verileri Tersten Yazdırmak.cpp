void print_reverse(struct node *head) { 
struct node *head2 = NULL; // yeni listenin ba��n� tutacak adres 
de�i�keni 
struct node *temp = head; 
while(temp != NULL) { 
head2 = addhead(head2, temp -> data); 
temp = temp -> next; 
} 
print(head2); 
} 
