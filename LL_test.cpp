#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
/*1.Create a constructor & Destructor according to its type.   */

/*4.Create a snap_finger (in LL class or in class inherited from LL) to randomly delete half of the node */

int main(int argc, char *argv[])
{  LL A;
   int i;
   NODE *t;

   for(i=1;i<argc;i++) {
        if(i%2)   t=new cat(i,atoi(argv[i]));
         else  t=new dog(i,atof(argv[i]));
         // t=new NODE(atoi(argv[i]));
                       A.add_node(t);
   }
   A.show_all();

   A.snap_finger(); // kill 1/2 

   A.show_all();

    
}

/* Example output  ./LL 5 1 8 1 6 8 4
adding 5
adding 1
adding 8
adding 1
adding 6
adding 8
adding 4
Node data:4
Node data:8
Node data:6
Node data:1
Node data:8
Node data:1
Node data:5

Node 8 is being deleted
Node 8 is being deleted
Node 1 is being deleted
Node 1 is being deleted

Node data:4
Node data:6
Node data:1
Node data:5

Node 4 is being deleted
Node 6 is being deleted
Node 1 is being deleted
Node 5 is being deleted
*/