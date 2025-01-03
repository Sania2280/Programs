#include <iostream>
#include <cstring>
#include "C:\Users\HP GAMING\Desktop\Program\Stack\STACK.cxx"

int main(int argc, char * argv[]){
    char *a = argv[1]; int N = strlen(a);
    STACK<char> ops(N);

    for(int i = 0; i < N ; i++){
       if((a[i] >= '0') && (a[i] <= '9')) std::cout << a[i] << " ";
       else if((a[i] == '+' ) || (a[i] == '*') ) ops.push(a[i]);
       else if(a[i] == ')')  {
         while (!ops.isEmpty()) {
                std::cout << static_cast<char>(ops.pop()) << " ";
            }
       }
    }
    std::cout<<std::endl;
}
