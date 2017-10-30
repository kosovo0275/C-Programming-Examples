#include <stdio.h>
#include <string.h>
 
int main(int argc, char **argv) {
  char str1[50] = "Test";  
  char str2[50] = "Program";  
 
  puts("str1 before memcpy ");
  puts(str1);
 
  memcpy(str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}
