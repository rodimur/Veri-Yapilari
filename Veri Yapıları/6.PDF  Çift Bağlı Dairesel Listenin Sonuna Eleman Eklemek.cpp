void addlast(struct node* temp, struct node*&head) { 
if(!head) 
head = temp; 
else { 
temp -> next = last(head) -> next; 
temp -> prev = last(head); 
last(head) -> next = temp; 
// last fonksiyonu ile son d���m bulunuyor 
head -> prev = temp; 
} 
}
