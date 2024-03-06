#include<iostream>
main() { 
struct node *head; // henüz bellekte yer kaplamýyor 
head = (struct node *)malloc(sizeof(struct node)); // artýk bellekte yer tahsis edilmiþtir. 
head -> data = 1; 
head -> next = NULL; 
/* listeye yeni eleman ekleme */ 
head -> next = (struct node *)malloc(sizeof(struct node)); 
head -> next -> data = 3; 
head -> next -> next = NULL;
}
