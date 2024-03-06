bool is_member(struct node* other_node, struct node* head) { 
while(head != NULL && head != other_node) 
head = head -> next; 
return(head == other_node); // ifade doðruysa 1, deðilse 0 geri 
döndürülür. 
}
