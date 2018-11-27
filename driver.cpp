#include "Array.h"
#include "Fixed_Array.h"
#include "Stack.h"
#include "Queue.h"
#include "Base_Array.h"
#include <string>
#include <iostream>
template <typename T>
void print(Base_Array<T> &array){
  for(int i = 0; i < array.size(); ++i){
    std::cout << array[i];
  }
}
int main (int argc, char * argv [])
{
  Array<int> * arr = new Array<int>(10, 2);
  Array<int> * arr2 = new Array<int>(*arr);
  print(*arr2);
  arr->find(2);
  delete arr;
  arr = nullptr;
  delete arr2;
  arr2 = nullptr;

  Queue<int> * q = new Queue<int>();
  q->enqueue(4);
  Queue<int> * q2 = new Queue<int>(*q);
  q2->operator=(*q);
  q2->clear();
  delete q;
  q = nullptr;
  delete q2;
  q2 = nullptr;

  Stack<int> *s = new Stack<int>();
  s->push(4);
  Stack<int> *s2 = new Stack<int>(*s);
  
  s2->operator=(*s);
  s->pop();
  delete s;
  s = nullptr;
  delete s2;
  s2 = nullptr;

  Fixed_Array<int,10> *f = new Fixed_Array<int,10>();
  f->fill(4);
  Fixed_Array<int, 10> *f2 = new Fixed_Array<int, 10>();
  delete f;
  f = nullptr;
  delete f2;
  f2 = nullptr;
}
