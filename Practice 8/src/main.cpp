#include "../include/StaticStack.hpp"


int main(){
    StaticStack<int,10ul> stack = StaticStack<int,10ul>();
    for (int i = 0; i < 10; i++){
        stack.push(i);
    }
    stack.displayStack();
}