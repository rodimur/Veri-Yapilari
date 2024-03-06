void concatenate(struct node*& list_1, struct node* list_2){ 
//parametrelere dikkat 
if(list_l == NULL) 
list_1 = list_2; 
else { 
// Birinci listenin son düðümünü last olarak bulmak için 
struct node *last=list_1; 
while(last -> next != list_1) 
last = last -> next; 
last->next=list_2; //Birinci listenin sonu ikinci listenin baþýna baðlandý 
list2->prev=last; //Ýkinci listenin baþý birinci listenin sonuna baðlandý 
// Ýkinci listenin son düðümünü last olarak bulmak için 
last=list_2; 
while(last -> next != list_2) 
last = last -> next; 
last->next=list_1; //Ýkinci listenin sonu birinci listenin baþýna baðlandý 
list1->prev=last; //Birinci listenin baþý ikinci listenin sonuna baðlandý 
} 
} 
