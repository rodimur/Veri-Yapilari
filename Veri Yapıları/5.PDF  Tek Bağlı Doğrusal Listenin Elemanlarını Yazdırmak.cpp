void print(struct node *head) { 
if(head == NULL) {
printf("Listede eleman yok"); 
return; 
} 
struct node *temp2 = head; 
while(temp2!= NULL) { // temp2->next!=NULL koşulu olsaydı son düğüm 
yazılmazdı 
printf("%d\n", temp2 -> data); 
temp2 = temp2 -> next; 
} 
} 

// Recursive olanı 

void print_recursive(struct node *head) { 
if(head == NULL) 
return; 
printf("%d\t", head -> data); 
print_recursive (head -> next); 
} 

// SORU: Yukarıdaki fonksiyon aşağıdaki gibi yazılırsa çıktısı ne olur.

void print_recursive2(struct node *head) { 
if(head == NULL) 
return; 
print_recursive2 (head -> next); 
printf("%d\t", head -> data); 
} 
