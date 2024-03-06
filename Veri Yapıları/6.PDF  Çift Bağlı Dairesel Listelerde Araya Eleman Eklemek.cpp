void addthen(struct node* other_node, struct node*&head, int n) { 
node* temp = head; 
int i = 1; 
while(i < n) { 
head = head -> next; 
i++; 
} 
head -> next -> prev = other_node; 
other_node -> prev = head; 
other_node -> next = head -> next; 
head -> next = other_node; 
head = temp; 
}
