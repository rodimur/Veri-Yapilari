struct node* locate(int veri, struct node* head) { 
struct node* locate = NULL; 
while(head != NULL) { 
if(head -> data != veri) { 
head = head -> next; // aranan veri yoksa liste taranıyor 
}
else { 
locate = head; 
break; // veri bulunursa döngüden çıkılarak geri 
döndürülüyor 
} 
} 
return locate; 
}
