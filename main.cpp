#include"student.h"
#include"faculty.h"

void main()
{
	student s("Ted","Thompson",22,3.91);
	faculty f("Richard","Karp",45,2,420);
		 //here the number of courses is 2
		 //and the extension number is 420
 
	s.printstudent();
	cout<<endl;
	f.printfaculty();
	cout<<endl;


	system("pause");
}