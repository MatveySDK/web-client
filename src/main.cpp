#include <iostream>
#include <cstdlib>  // for function system

using namespace std;

int main() {

    std::string filePath = "~/dev/web-client/index.html";
    
    std::string command = "xdg-open " + filePath;
    
    int result = std::system(command.c_str());
    
    if (result != 0) {
        std::cerr << "Error!" << std::endl;
        return 1;
    }
    
    return 0;
}
