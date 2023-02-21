#include <map>
#include <iostream>

int main() {
    std::map<std::string, int>esj_average;
    esj_average["ben"] = 94;
    esj_average["paulo"] = 94;

    for(auto element : esj_average) {
        std::cout << element.first << " has an average of " << element.second << "\n";
    }
}