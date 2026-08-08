#include <iostream>

int main()
{

    int value = 100;
    int *pvalue = &value;
    int *&rpvalue = pvalue;
    int **ppvalue = &pvalue;
    std::cout<< "&value = "<< &value << std::endl;
    std::cout<< "value = "<< value << std::endl;
    std::cout<< "pvalue = "<< pvalue << std::endl;
    std::cout<< "&pvalue = "<< &pvalue << std::endl;
    std::cout<< "*pvalue = "<< *pvalue << std::endl;
    std::cout<< "rpvalue = "<< rpvalue << std::endl;
    std::cout<< "rpvalue = "<< &rpvalue << std::endl;
    std::cout<< "*rpvalue = "<< *rpvalue << std::endl;
    std::cout<< "&ppvalue = "<< &ppvalue << std::endl;
    std::cout<< "ppvalue = "<< ppvalue << std::endl;
    std::cout<< "*ppvalue = "<< *ppvalue << std::endl;

    *rpvalue = 1;
    std::cout<< "&value = "<< &value << std::endl;
    std::cout<< "value = "<< value << std::endl;
    std::cout<< "pvalue = "<< &pvalue << std::endl;
    std::cout<< "*pvalue = "<< *pvalue << std::endl;
    std::cout<< "rpvalue = "<< rpvalue << std::endl;
    std::cout<< "rpvalue = "<< &rpvalue << std::endl;
    std::cout<< "*rpvalue = "<< *rpvalue << std::endl;
    std::cout<< "&ppvalue = "<< &ppvalue << std::endl;
    std::cout<< "ppvalue = "<< ppvalue << std::endl;
    std::cout<< "*ppvalue = "<< *ppvalue << std::endl;
    return 0;
}