struct node *destroy(struct node *head) { 
if(head == NULL) { 
printf("Liste zaten bos\n"); 
return; 
} 
struct node *temp2; 
while(head!= NULL) { // while i�indeki ko�ul temp2 -> next, NULL 
de�ilse 
temp2=head; 
head = head->next; 
free(temp2); 
} 
return head; 
} 	

// Bunu �zyinemeli olarak yap
