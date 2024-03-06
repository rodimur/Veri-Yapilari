struct node *destroy(struct node *head) { 
if(head == NULL) { 
printf("Liste zaten bos\n"); 
return; 
} 
struct node *temp2; 
while(head!= NULL) { // while içindeki koþul temp2 -> next, NULL 
deðilse 
temp2=head; 
head = head->next; 
free(temp2); 
} 
return head; 
} 	

// Bunu Özyinemeli olarak yap
