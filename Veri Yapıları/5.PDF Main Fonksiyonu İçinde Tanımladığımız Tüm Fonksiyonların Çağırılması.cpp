main(){ 
int secim,data; 
struct node *head = NULL; 
while(1){ 
printf("1-Listenin Basina Eleman Ekle\n"); 
printf("2-Listenin Sonuna Eleman Ekle\n"); 
printf("3-Listeyi Gorme\n"); 
printf("4-Listeden verilen bir degere sahip dugum silmek\n"); 
printf("5-Listeyi sil\n");
printf("6-Listedeki eleman sayisi\n"); 
printf("7-Listenin tum eleman bilgileri\n"); 
printf("8-Programdan Cikma\n"); 
printf("Seciminiz....?"); 
scanf("%d",&secim); 
switch(secim){ 
case 1: printf("Eklemek istediginiz degerini giriniz..?"); 
scanf("%d",&data); 
head=addhead(head,data); 
break; 
case 2: 
printf("Eklemek istediginiz degerini giriniz..?"); 
scanf("%d",&data); 
head=addlast(head,data); 
break; 
case 3: 
print(head); 
break; 
case 4: 
printf("Silmek istediginiz degerini giriniz..?"); 
scanf("%d",&data); 
head=delete(head,data); 
break; 
case 5: 
head=destroy(head); 
break; 
case 6: 
printf("Listede %d eleman vardir\n",count(head)); 
break; 
case 7: 
listinfo(head); 
break; 
case 8: 
exit(1); 
break; 
default: 
printf("Yanlis secim\n"); 
} 
} 
}
