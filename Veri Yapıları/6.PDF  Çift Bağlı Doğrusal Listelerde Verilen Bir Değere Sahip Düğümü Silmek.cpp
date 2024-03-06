void double_linked_remove(int key) { 
struct node *temp = head; 
if(head -> data == key) { // silinecek de�erin ilk d���mde olmas� durumu. 
head = head -> next; 
head -> prev = NULL; 
free(temp); 
} 
else { 
while(temp -> data != key) 
temp = temp -> next; 
temp -> prev -> next = temp -> next; 
/* silinecek d���mden bir �nceki d���m�n next i�aret�isi, �imdi silinecek 
d���mden bir sonraki d���m� g�steriyor. */ 
if(temp -> next != NULL) // silinecek d���m son d���m de�ilse 
temp -> next -> prev = temp -> prev; 
/* silinecek d���mden bir sonraki d���m�n prev i�aret�isi, �imdi 
silinecek d���mden bir �nceki d���m� g�steriyor. */ 
free(temp); 
} 
} 

// bu ortadaki elaman� silen kod ba�takini silmek isteseydik head in nextine head atad�ktan sonra prev i null yapmam�z gerekiyordu
