#include<iostream>
main() { 
struct node *head; // hen�z bellekte yer kaplam�yor 
head = (struct node *)malloc(sizeof(struct node)); // art�k bellekte yer tahsis edilmi�tir. 
head -> data = 1; 
head -> next = NULL; 
/* listeye yeni eleman ekleme */ 
head -> next = (struct node *)malloc(sizeof(struct node)); 
head -> next -> data = 3; 
head -> next -> next = NULL;
}
