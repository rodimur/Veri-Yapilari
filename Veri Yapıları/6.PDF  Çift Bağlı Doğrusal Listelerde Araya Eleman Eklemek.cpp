void addthen(node* other_node, node*& list, int n) { 
node* temp = head; 
int i = 1; 
while(i < n) { 
head = head -> next; 
i++; 
} 
other_node -> prev = head; 
other_node -> next = head -> next; 
head -> next = other_node; 
head = temp; 
} 
