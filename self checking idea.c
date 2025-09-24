
#include<stdio.h>
struct Item {
    int sno;
    char name[30];
    float price;
}str;
int main(){
float total =0;
struct Item store[5] = {
    {1, "Rice",  50},
    {2, "Sugar", 40},
    {3, "Milk",  30},
    {4, "Bread", 25},
    {5, "Eggs",  6}
};
printf("Welcome to the Store!\n");
printf("S.No   Item     Price\n");
for(int i = 0; i < 5; i++) {
    printf("%d      %s      %.2f\n", store[i].sno, store[i].name, store[i].price);
}
printf("SELECT THE ITEM THAT YOU WANT TO SELECT\n");
while(1){
int choice ;
int qty;

printf("enter the item:: To finish enter 0   ");
scanf("%d",&choice);
if(choice==0) break;
if(choice>=1&&choice<=5){
printf("enter the qty  ");
scanf("%d",&qty);
printf("total of this item is %s*%d=%.2f\n",store[choice-1].name,qty,store[choice-1].price*qty);

total +=store[choice-1].price*qty;
}
}

printf("grand total is %.2f",total);
return 0;
} 
