bool is_member(struct node* other_node, struct node* head) { 
while(head != NULL && head != other_node) 
head = head -> next; 
return(head == other_node); // ifade do�ruysa 1, de�ilse 0 geri 
d�nd�r�l�r. 
}
