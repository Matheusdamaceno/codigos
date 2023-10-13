#include <stdio.h>
#include "bst.h"

int main()
{
  Tree t = createTree();
  // link x;
  // insert(t, 99);
  // imprime(t, "oi");
  // insert(t, 88);
  // imprime(t, "oi");
  // insert(t, 77);
  // imprime(t, "oi");

  AVLinsert(t, 15);
  AVLinsert(t, 5);
  AVLinsert(t, 7);
  AVLinsert(t, 32);
  AVLinsert(t, 45);

  imprime(t, "oi");
  return 0;
}
