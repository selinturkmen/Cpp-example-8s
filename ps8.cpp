#include <iostream> 

double square(double a){
	return a*a;
}
   
double xyzsquare(double x, double y, double z){
	std::cout << "The coordinates (x,y,z) are\n" << '(' << x << ',' << y << ',' << z << ')'<< std::endl;
	std::cout << "X coordinate-squared\n" << std::endl;
	double sx = square(x);
	std::cout << "The coordinates (x,y,z) are\n" <<  '(' << sx << ',' << y << ',' << z << ')' << std::endl;
	std::cout << "Y coordinate-squared\n" << std::endl;
	double sy = square(y);
	std::cout << "The coordinates (x,y,z) are\n" <<  '(' << sx << ',' << sy << ',' << z << ')' << std::endl;
	std::cout << "Z coordinate-squared\n" << std::endl;
	double sz = square(z);
    std::cout << "The coordinates (x,y,z) are\n" << '(' << sx << ',' << sy << ',' << sz << ')' << std::endl;
}
int main(){
	double x, y, z;
	std::cout<< "Input the (x,y,z) coord. of the location:"<< std::endl;
	std::cin>> x >> y >> z;
	std::cout<< xyzsquare(x,y,z)<<std::endl;
	return 0;
}
