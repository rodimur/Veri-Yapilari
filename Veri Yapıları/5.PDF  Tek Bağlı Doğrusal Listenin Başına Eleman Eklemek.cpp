struct node *addhead(struct node *head,int key) { 
struct node *temp = (struct node *)malloc(sizeof(struct node)); 
temp -> data = key; 
temp -> next = head; // temp�in next�i �u anda head�i g�steriyor. 
head = temp; /* head art�k temp�in adresini tutuyor yani eklenen d���m listenin ba�� oldu. */ 
return head; 
}
