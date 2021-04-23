//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
#ifndef cat_dog_h
#define cat_dog_h

class cat:public NODE{
    int size;

public:
    cat(int,int);

    void show_node(){
        cout<<"Meaw  ";
        NODE::show_node();
    }
    ~cat();
};


class dog:public NODE{
    float height;
public:
    dog(int,float);
    void show_node(){
        cout<<"Hong Hong  ";
        NODE::show_node();
    }
    ~dog();
};

cat::cat(int x,int y):NODE(x)
{
  size=y;
}
dog::dog(int x,float y):NODE(x)
{
  height=y;
}
#endif /* cat_dog_h */
