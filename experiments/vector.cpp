#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> zwd;
    zwd.push_back("");
    zwd.push_back("silver chariot");
    zwd.push_back("hierophant");
    zwd.push_back("silver chariot");

    int chariot = 1;

    for(std::string s : zwd) {
        std::cout << s << "\n";
    }

    zwd.erase(zwd.begin()+chariot);

    for(std::string s : zwd) {
        std::cout << s << "\n";
    }
}