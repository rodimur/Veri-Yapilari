struct node* locate(int veri, struct node* head) { 
struct node* locate = NULL; 
struct node* temp = head; 
do { 
if(head -> data != veri) 
head = head -> next; 
else { 
locate = head; 
break; 
} while(head != temp); 
return(locate); 
}
