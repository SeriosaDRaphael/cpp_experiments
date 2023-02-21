#include <iostream>
#include <map>
using namespace std;

int main() {
    pair<string, string> wand1 = {"Holly Wood", "Phoenix Feather"};
    map<string, string> wands;

    wands[wand1.first] = wand1.second;
    
    for(auto element : wands) {
        std::cout << "Made of " << element.first << " wood with " << element.second << " core.\n";
    }
}
