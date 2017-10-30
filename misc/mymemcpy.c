#include<stdio.h>
#include<string.h>
 
void myMemCpy(void *dest, void *src, size_t n) {
  char *csrc = (char *)src;
  char *cdest = (char *)dest;
 
  for (int i=0; i<n; i++) {
		cdest[i] = csrc[i];
	}
}
 
int main() {
	char csrc[] = "This is my custom memcpy function";
  char cdest[100];
  int isrc[] = {10, 20, 30, 40, 50, 69};
  int n = sizeof(isrc)/sizeof(isrc[0]);
  int idest[n], i;

	myMemCpy(cdest, csrc, strlen(csrc)+1);
  printf("Copied string is %s\n", cdest);

  myMemCpy(idest, isrc, sizeof(isrc));
  printf("Copied array is ");

	for (i=0; i<n; i++) {
    printf("%d ", idest[i]);
	}

	printf("\n");
  return 0;
}
