#include <iostream>
#include <cstring>
 
using namespace std;
 
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

   // Print ShivVerma info
   cout << "Technologies : " << SV.technologies <<endl;
   cout << "\n";
   cout << "Expertise : " << SV.expertise <<endl;
   cout << "\n";
   cout << "Companies work with : " << SV.companies <<endl;
   cout << "\n";
   cout << "Age : " << SV.age <<endl;
   cout << "\n";

   return 0;
}
