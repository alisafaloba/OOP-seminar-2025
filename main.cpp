#include <iostream>
//
// Created by ofalo on 06.03.2025.
//
class Dog {
public:
    bool eat() {
        std::cout<<"Dog is eating";

        return true;

    }
    int set_age(int paramage) {
        age=paramage;
        return age;
    }

    int get_age() {
        return age;
    }


    private:
    int age;
};
int main(){
    Dog dog1=Dog();

    dog1.eat();
    dog1.set_age(10);
    dog1.get_age();

    std::cout<<dog1.get_age()<<std::endl;
    return 0;
  }