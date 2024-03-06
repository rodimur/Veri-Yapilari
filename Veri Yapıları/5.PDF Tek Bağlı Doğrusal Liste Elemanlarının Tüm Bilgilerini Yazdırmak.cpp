void listinfo(struct node* head) { 
int i = 1; 
while(head != NULL) { 
printf("%d. Dugumunun Adresi = %p \n", i, head); 
printf("%d. Dugumunun verisi = %d \n", i, head -> data); 
printf("%d. Dugumunun Bagli Oldugu Dugumun Adresi= %p\n\n",i, 
head->next); 
head = head -> next; 
i++; 
} 
