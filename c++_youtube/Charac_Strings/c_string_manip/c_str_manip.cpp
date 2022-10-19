#include<iostream>
#include<cstring>
int main(){
    //std::strlen находит длину строки
    const char message1 []{"The sky is blue."};
    
    const char* message2 {"The sky is blue."};
    std::cout<<"message1 : "<<message1<<std::endl;
    
    //str::len ignores null character(игнорит последний /0 символ, который уже включен)
    std::cout<<"strlen(message1) : "<<std::strlen(message1)<<std::endl;

    //includes the null character
    std::cout<<"sizeof(message1) : "<<sizeof(message1)<<std::endl;

    //strlen still works with decayed arrays
    std::cout<<"strlen(message2) : "<<std::strlen(message2)<<std::endl;
    
    //Prints size of pointer
    std::cout<<"sizeof(message2) : "<<sizeof(message2)<<std::endl;



    //std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //Zero if lhs and rhs compare equal.
    //and Positive value if lhs appears after rhs in lexicographical order. 


    std::cout<<std::endl;
    std::cout<<"std::strcmp : "<<std::endl;
    
    const char *string_data1 {"Alabama"};
    const char *string_data2 {"Blabama"};

    //Print out the comparison
    std::cout<<"std::strcmp ( "<<string_data1<<","<<string_data2<<") : "
    <<std::strcmp(string_data1, string_data2)<<std::endl;


    string_data1 = "Alabama";
    string_data2 = "Alabamb";
    //Print out the comparison
    std::cout<<"std::strcmp ( "<<string_data1<<","<<string_data2<<") : "
    <<std::strcmp(string_data1, string_data2)<<std::endl;

    // Также можно использовать немного другую функцию, в которой есть аргумент(до какого числа символов сравнивать строк)


    size_t n {3};
    std::cout<<std::endl;
    std::cout<<"std::strncmp : "<<std::endl;
    std::cout<<"std::strncmp ("<<string_data1<< ","<<string_data2<<","<<n<<") : "<<std::strncmp(string_data1, string_data2, n)<<std::endl;    
    string_data1 = "aaania";
    string_data2 = "aaance";
    std::cout<<"std::strncmp ("<<string_data1<< ","<<string_data2<<","<<n<<") : "
    <<std::strncmp(string_data1, string_data2, n)<<std::endl;
      
    const char * const str{"Try not. Do, or do not. There is no try."};//Теперь мы не можем сделать ++str, изменить указатель
    //Can make this a const pointer to prevent users from making it point somewhere else
    char target = 'T';
    const char *result = str;
    size_t iterations{};
    while((result = std::strchr(result, target)) != nullptr){
        std::cout<<"Found ' "<<target<<"' starting at '"<<result<<"'\n";
        //Increment result, otherwise we'll find target at the same location
        ++result;
        ++iterations;
    }
    std::cout<<"iterations : "<<iterations<<std::endl;


    //Немного другой код
    /* std::cout<<std::endl;
    std::cout<<"std::strchr : "<<std::endl;

    const char* str_{"Try not. Do, or do not. There is no try."};
    char target_ = 'T';
    const char*result_ = {nullptr};
    size_t iterations_{};

    while((result_ = std::strchr(str_, target_)) !=nullptr){
        std::cout<<"Found "<<target_<<" Starting at "<<result_<<std::endl;
        ++str_;
        ++iterations_;
    }
    std::cout<<iterations_;
 */

    //Теперь найдем последнее вхождение 

    std::cout<<std::endl;
    std::cout<<"std::stcrchr : "<<std::endl;

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if (output){
        std::cout<<output+1<<std::endl;
    }
}