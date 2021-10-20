#include<bits\stdc++.h>
using namespace std;

struct Stack
{
  int size;
  int top;
  int *s;
};
  
void create(struct Stack *st){
  cout<<"Enter size";
  cin>>st->size;
  st->top=-1;
  st->s= new int[size];
}