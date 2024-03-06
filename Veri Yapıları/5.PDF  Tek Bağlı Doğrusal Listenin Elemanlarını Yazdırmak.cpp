void print(struct node *head) { 
if(head == NULL) {
printf("Listede eleman yok"); 
return; 
} 
struct node *temp2 = head; 
while(temp2!= NULL) { // temp2->next!=NULL ko�ulu olsayd� son d���m 
yaz�lmazd� 
printf("%d\n", temp2 -> data); 
temp2 = temp2 -> next; 
} 
} 

// Recursive olan� 

void print_recursive(struct node *head) { 
if(head == NULL) 
return; 
printf("%d\t", head -> data); 
print_recursive (head -> next); 
} 

// SORU: Yukar�daki fonksiyon a�a��daki gibi yaz�l�rsa ��kt�s� ne olur.

void print_recursive2(struct node *head) { 
if(head == NULL) 
return; 
print_recursive2 (head -> next); 
printf("%d\t", head -> data); 
} 
