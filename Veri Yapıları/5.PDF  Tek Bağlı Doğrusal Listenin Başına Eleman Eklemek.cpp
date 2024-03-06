struct node *addhead(struct node *head,int key) { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
temp -> data = key; 
temp -> next = head; // temp’in next’i şu anda head’i gösteriyor. 
head = temp; /* head artık temp’in adresini tutuyor yani eklenen düğüm listenin başı oldu. */ 
return head; 
}
