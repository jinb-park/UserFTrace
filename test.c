#include <stdio.h>
#include <unistd.h>

void funcA(int a) {
   printf("%d\n", a);
}

void funcB(void) {
   return;
}

int main() {
   int a;
   a = 10;
   funcA(a);

   while(1) {
       sleep(5);
   }
   return 0;
}