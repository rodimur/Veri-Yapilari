struct node* locate(struct node* head, int key) { 
struct node* locate = NULL; 
while(head != NULL) 
if(head -> data != key) 
head = head -> next; 
else { 
locate = head; 
break; 
} 
return(locate); 
}

