#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void generate_permutations(std::vector<char> &chars, std::string current_permutation, std::vector<std::string> &permutations){
    if (chars.size() == 0){
        permutations.push_back(current_permutation);
    }
    else{
        for (size_t i = 0; i < chars.size(); ++i){
            char next_char = chars[i];
            std::vector<char> remaining_chars(chars.begin(), chars.end());
            remaining_chars.erase(remaining_chars.begin() + i);
            generate_permutations(remaining_chars, current_permutation + next_char, permutations);
        }
    }
}

int main(){
    std::vector<char> characters = {'F', 'N', 'D', 'K', 'P', 'C', 'H', 'S', 'B'};
    std::vector<std::string> permutations;
    generate_permutations(characters, "", permutations);

    std::ofstream outputFile("output.txt");
    for (const auto &permutation : permutations){
        outputFile << permutation << std::endl;
    }
    outputFile.close();
    return 0;
}
