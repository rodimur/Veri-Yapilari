struct node* locate(int veri, struct node* head) { 
struct node* locate = NULL; 
while(head != NULL) { 
if(head -> data != veri) { 
head = head -> next; // aranan veri yoksa liste taran�yor 
}
else { 
locate = head; 
break; // veri bulunursa d�ng�den ��k�larak geri 
d�nd�r�l�yor 
} 
} 
return locate; 
}
