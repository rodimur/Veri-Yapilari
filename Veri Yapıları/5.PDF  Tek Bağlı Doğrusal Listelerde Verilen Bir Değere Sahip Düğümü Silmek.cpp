struct node *remove(struct node *head, int key) { 
if(head == NULL) { 
printf("Listede eleman yok\n"); 
return; 
} 
struct node *temp = head; 
if(head -> data == key) { // ilk d���m silinecek mi diye kontrol 
ediliyor. 
head = head -> next; // head art�k bir sonraki eleman. 
free(temp); 
} 
else if(temp -> next == NULL) { // Listede tek d���m bulunabilir. 
printf("Silmek istediginiz veri bulunmamaktadir.\n\n"); 
return head; 
} 
else { 
while(temp -> next -> data != key) { 
if(temp -> next -> next == NULL) { 
printf("Silmek istediginiz veri 
bulunmamaktadir.\n\n"); 
return head; 
} 
temp = temp -> next; 
}
temp -> next = temp -> next -> next; 
free(temp2); 
} 
return head; 
} 
