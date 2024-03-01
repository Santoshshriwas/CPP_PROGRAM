// with parameter and return value
#include <iostream>
int power(int ltr){
    int r =100;
    return r*ltr;
}
int Normal(int ltr){
    int r =90;
    return r*ltr;
}
int CNG(int ltr){
    int r =70;
    return r*ltr;
}

int main(){
    
    int oil;
    std::cout<<"enter a let";
    std::cin>>oil;
    std::cout<<CNG(oil)+(oil*18)<<"\n";
    std::cout<<Normal(oil)+(oil*20)<<"\n";
    std::cout<<power(oil)+(oil*25);
    return 0;
}
