void concatenate(struct node*& list_1, struct node* list_2){ 
//parametrelere dikkat 
if(list_l == NULL) 
list_1 = list_2; 
else { 
// Birinci listenin son d���m�n� last olarak bulmak i�in 
struct node *last=list_1; 
while(last -> next != list_1) 
last = last -> next; 
last->next=list_2; //Birinci listenin sonu ikinci listenin ba��na ba�land� 
list2->prev=last; //�kinci listenin ba�� birinci listenin sonuna ba�land� 
// �kinci listenin son d���m�n� last olarak bulmak i�in 
last=list_2; 
while(last -> next != list_2) 
last = last -> next; 
last->next=list_1; //�kinci listenin sonu birinci listenin ba��na ba�land� 
list1->prev=last; //Birinci listenin ba�� ikinci listenin sonuna ba�land� 
} 
} 
