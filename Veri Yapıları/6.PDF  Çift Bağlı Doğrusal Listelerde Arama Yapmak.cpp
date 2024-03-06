struct node* locate(int veri, struct node* head) { 
struct node* locate = NULL; 
while(head != NULL) { 
if(head -> data != veri) { 
head = head -> next; // aranan veri yoksa liste taranýyor 
}
else { 
locate = head; 
break; // veri bulunursa döngüden çýkýlarak geri 
döndürülüyor 
} 
} 
return locate; 
}
