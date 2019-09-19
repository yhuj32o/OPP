#include <iostream>
const char rodata[] = "ABC";

int  code(void){
     std::cout << 201902095 << std::endl;
}

int main(){
    static int data = 1;
    static int bss;
    int * const heap = new int(3);
    int * const Stack = new int(3);

    std::cout << "code\t" << (void*)code << std::endl;
    std::cout << "Rodata\t" << (void*)rodata << std::endl;
    std::cout << "data\t" << &data << std::endl;
    std::cout << "BSS\t" << &bss << std::endl;
    std::cout << "HEAP\t" << heap << std::endl;
    std::cout << "Stack\t" << &Stack << std::endl;
}
