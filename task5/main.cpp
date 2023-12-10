#include <iostream>
#include <memory>
#include <string>

#include "My_shared_ptr.h"

void check_ptr()
{
    My_shared_ptr<int> p1(new int(100));
    My_shared_ptr<int> p2;
    My_shared_ptr<int> p3(std::move(p1));
    My_shared_ptr<int> p4(new int(200));

    std::cout << "Use_count p1: " << p1.use_count() << std::endl;
    std::cout << "p2 is " << p2.operator bool() << std::endl;
    std::cout << "Use_count p3: " << p3.use_count() << std::endl;
    std::cout << "Use_count p4: " << p4.use_count() << std::endl << std::endl;
    
    std::cout << "Data p1: " << *p1 << std::endl;    
    std::cout << "Data p3: " << *p3 << std::endl;    
    std::cout << "Data p4: " << *p4 << std::endl << std::endl << std::endl;    
    
    std::cout << "test_1 p2 = p1" << std::endl;
    p2 = p1;
    std::cout << "Use_count p2: " << p2.use_count() << std::endl;
    std::cout << "Data p2: " << *p2 << std::endl;
    std::cout << "Use_count p1: " << p1.use_count() << std::endl;
    std::cout << "Data p1: " << *p1 << std::endl << std::endl << std::endl;

    std::cout << "test_2 p2.swap(p4)" << std::endl;
    p2.swap(p4);
    std::cout << "Use_count p2: " << p2.use_count() << std::endl;
    std::cout << "Data p2: " << *p2 << std::endl;
    std::cout << "Use_count p4: " << p4.use_count() << std::endl;
    std::cout << "Data p4: " << *p4 << std::endl << std::endl << std::endl;

    std::cout << "test_3 p2 = move(p4)" << std::endl;
    p2 = std::move(p4);
    std::cout << "Use_count p2: " << p2.use_count() << std::endl;
    std::cout << "Data p2: " << *p2 << std::endl;
    std::cout << "p4 is " << p4.operator bool() << std::endl << std::endl;

    std::cout << "test operator[](std::size_t index)" << std::endl;
    My_shared_ptr<int> p5(new int[5]{0, 1, 2, 3, 4 });
    for (std::size_t i = 0; i < 5; ++i)
        std::cout << p5[i] << ' ';
    std::cout << std::endl << std::endl;

    std::cout << "test make_shared()" << std::endl;
    auto p6 = My_shared_ptr<int>::make_shared(37);
    std::cout << "Use_count p6: " << p6.use_count() << std::endl;
    std::cout << "Data p6: " << *p6 << std::endl;
}

int main()
{
    check_ptr();
    return 0;
}