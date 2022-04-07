#include "pointer.h"

int main()
{
	int nstudents=sizeof(class)/sizeof(struct student);
	int age;

	puts("Raw records:");
	puts("-------------------------");
	apply(class,nstudents,printrec,NULL);

	//sorts by first name
	puts("Sorted by first name:");
	puts("-------------------------");
	qsort(class,nstudents,sizeof(struct student),compare_first_name);
	apply(class,nstudents,printrec,NULL);

	//sorts by last name
	puts("Sorted by last name:");
	puts("-------------------------");
	qsort(class,nstudents,sizeof(struct student),compare_last_name);
	apply(class,nstudents,printrec,NULL);

	//prints people older than 20
	puts("People older than 20:");
	puts("-------------------------");
	age=20;
	apply(class,nstudents,isolder,&age);

	return 0;
}
