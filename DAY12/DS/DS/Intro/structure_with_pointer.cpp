#include <iostream>
#include <cstring>
 
using namespace std;
void printDetails( struct ShivVerma *SV );

struct ShivVerma {
   char  technologies[500];
   char  expertise[100];
   char  companies[100];
   int   age;
};
 
int main() {
   struct ShivVerma SV;        // Declare ShivVerma of type SV
   
 
   // ShivVerma specification
   strcpy( SV.technologies, "IoT, C and C++, C#, Python, Java, Spring Boot, MVC, JavaScript and JSX, React and Reac-Native, Angular ");
   strcpy( SV.expertise, "IoT with Arduino, JavaScript, JSX and React and React-Native"); 
   strcpy( SV.companies, "IBM, Excain LLP, DreamOrbit, Mars Lab, ADA(Aeronautical Development Agency)");
   SV.age = 26;

 
   // Print Details info and passing the address of structure...
   printDetails( &SV );
;

   return 0;
}
void printDetails( struct ShivVerma *SV ) {
   cout << "Book title : " << SV->technologies <<endl;
      cout << "\n";
   cout << "Book author : " << SV->expertise <<endl;
      cout << "\n";
   cout << "Book subject : " << SV->companies <<endl;
      cout << "\n";
   cout << "Book id : " << SV->age <<endl;
      cout << "\n";
}
