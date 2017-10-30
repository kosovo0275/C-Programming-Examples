#include <stdio.h>

/* forward-referencing structure */
struct resume {
   char name[16];
   struct date *u;
   struct date *g;
};

/* referenced structure */
struct date {
   int year;
   char school[32];
   char degree[8];
};

typedef struct resume RSM;
typedef struct date DATE;

void InfoDisplay(RSM *ptr);

int main(void) {
   DATE under = {
       1985,
       "Rice University",
       "B.S."
       };
   DATE graduate = {
       1987,
       "UT Austin",
       "M.S."
       };
   RSM new_employee = {
       "Tony",
       &under,
       &graduate
       };

   printf("Here is the new employee's resume:\n");
   InfoDisplay(&new_employee);

   return 0;
}

/* function definition */
void InfoDisplay(RSM *ptr) {
   printf("Name: %s\n", ptr->name);
   /* undergraduate */
   printf("School name: %s\n", ptr->u->school);
   printf("Graduation year: %d\n", ptr->u->year);
   printf("Degree: %s\n", ptr->u->degree);
   /* graduate */
   printf("School name: %s\n", ptr->g->school);
   printf("Graduation year: %d\n", ptr->g->year);
   printf("Degree: %s\n", ptr->g->degree);
}
