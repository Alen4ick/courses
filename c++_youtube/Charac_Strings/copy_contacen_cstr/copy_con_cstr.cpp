#include<iostream>
#include<cstring>

int main(){
    //Concatenation
    std::cout<<std::endl;
    std::cout<<"std::strcat : "<<std::endl;

    char dest[50] = "Hello";// не делать const char, потому что будет compile error
    char src[50] = " World";
    std::strcat(dest, src); 
    std::strcat(dest, " Goodbye World!");
    std::cout<<"dest : "<<dest<<std::endl;

    //More concatenation
    std::cout<<std::endl;
    std::cout<<"More concatenation : "<<std::endl;

    char *dest1 = new char[30] {"Firelord"};
    char *source1 = new char [30] {", The Phenix King"};
    std::cout<<"std::strlen(dest1) : "<<std::strlen(dest1)<<std::endl;
    std::cout<<"std::strlen(source1) : "<<std::strlen(source1)<<std::endl;

    std::cout<<"Concatenating..."<<std::endl;
    std::strcat(dest1, source1);
    std::cout<<"std::strlen(dest1) : "<<std::strlen(dest1)<<std::endl;
    std::cout<<"dest1 : "<<dest1<<std::endl;

    //signature : char *strncat (char *dest1, const char *src, std::size_t count);
    std::cout<<std::endl;
    std::cout<<"std::strncat : "<<std::endl;
    char dest2[50] {"Hello"};
    char source2[50] {" There is a bird on my window"};

    //You can even use returned pointer immedeitaly for print out
    //This is a pattern you'll see a lot in C++ code out there.
    std::cout<<std::strncat(dest2, source2, 6)<<std::endl;

    //Or you can do std::strncat separately and print dest2
    std::strncat(dest2, source2, 6);
    std::cout<<"The concatenated string is : "<<dest2<<std::endl;



    //std::strcpy - signature : char* strcpy( char* dest, const char* src );
    /*
    std::cout << std::endl;
	std::cout << "std::strcpy : " << std::endl;
    const char* source3 = "C++ is a multipurpose programming language.";
    char *dest3 = new char[std::strlen(source3) + 1];// +1 for the null character
													//Contains garbage data
													//Not initialized
													
    std::strcpy(dest3,source3);
    
    std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
    std::cout << "dest3 : " << dest3 << std::endl;
    */


    //std::strncpy : Copy n characters from src to dest -
    //signature : char *strncpy( char *dest, const char *src, std::size_t count );
	std::cout << std::endl;
    std::cout << "std::strncpy:" << std::endl;
    const char* source4 = "Hello";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f','\0'}; // Have to put the terminating
														//null char if we want to print
    
    std::cout << "dest4 : " << dest4 << std::endl;
    
	std::cout << "Copying..." << std::endl;
    std::strncpy(dest4,source4,5);
    
    std::cout << "dest4 : " << dest4 << std::endl;
}