#include <stdio.h>

int main() {
  float gen_money=115.50
  int paid_rup, paid_cent;
  
  int size=14;
  
  //value in cents to avoid floating numbers//
  int denominators[size] = {200000,100000,50000,20000,10000,5000,2500,2000,1000,500,100,50,20,5"};
  
  char *money_type[size]={"2000","1000","500","200","100","50","25","20","10","5","1","50 sous","20 sous","5 sous"};
  
  void calcule_monnaie(int money_change){
  printf("Returned change: %d.%02d\n", money_change / 100, money_change % 100);
  
  for(int i = 0; i < size; i++) { 
  int count = money_change / denominators[i];   
  if (count > 0){   
  printf("%dx%s\n",count,labels[i]);   
  money_change = money_change % denominators[i];  
  }   
  }
  
  }
  
  printf("Amount to pay: %d.%02d\n", gen_money/100, gen_money & 100);
  
  while(gen_money>paid_cent){
  printf("Enter the amount given: ");
  scanf("%d", &paid_rup);
  
  paid_cent = paid_rup * 100;
  
  if(paid_cents<gen_money){
  printf("Insufficient amount")
  }
  }
  printf("Amount accepted: %d.00\n", paid_rup);
  
  while(paid_cent < money_change){
  int change = paid_cents - money_change;
  
  if (change > 0){
  calcule_monnaie(change);
  }
  else {
  printf("Exact amount given. No change to return.\n");
  
  
  return 0;
  }

