#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
             t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }

void LL::snap_finger(){
  int kill,half,i,j;
  NODE *t,*prev,*rr;
  srand(time(NULL));
  half=size/2;
  for(i=0;i<half;i++)
  {
  t=hol;
  prev=NULL;
  kill=rand()%size; //สุ่มฆ่า
  if(kill==0)
  {
    t=hol;
		hol=hol->move_next();
  }
  for(j=0;j<kill;j++)
  {
    prev=t;
    t=t->move_next();
  }
  rr = t->move_next();
  rr->insert(prev);
  
  delete t;
  size--;
  }

      

}