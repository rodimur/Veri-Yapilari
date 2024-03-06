void double_linked_remove(int key) { 
struct node *temp = head; 
if(head -> data == key) { // silinecek deðerin ilk düðümde olmasý durumu. 
head = head -> next; 
head -> prev = NULL; 
free(temp); 
} 
else { 
while(temp -> data != key) 
temp = temp -> next; 
temp -> prev -> next = temp -> next; 
/* silinecek düðümden bir önceki düðümün next iþaretçisi, þimdi silinecek 
düðümden bir sonraki düðümü gösteriyor. */ 
if(temp -> next != NULL) // silinecek düðüm son düðüm deðilse 
temp -> next -> prev = temp -> prev; 
/* silinecek düðümden bir sonraki düðümün prev iþaretçisi, þimdi 
silinecek düðümden bir önceki düðümü gösteriyor. */ 
free(temp); 
} 
} 

// bu ortadaki elamaný silen kod baþtakini silmek isteseydik head in nextine head atadýktan sonra prev i null yapmamýz gerekiyordu
