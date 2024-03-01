//
// Created by Szymon Skulimowski on 01/03/2024.
//
#include "encoding.h"
#include <string>
#include <fstream>
#include <iostream>
#include <map>

std::vector<char> encoding::sentence;

std::map<char, int> dictionary;

bool encoding::read(const std::string& nameOfFile) {
    std::ifstream inputFile(nameOfFile);

    if (!inputFile) {
        std::cerr << "Nie można otworzyć pliku." << std::endl;
       return false;
    }

    char character;

    while (inputFile.get(character)) {
        sentence.push_back(character);
    }

    inputFile.close();

    return true;
}

void encoding::writeOnConsole() {
    for(char i : sentence) {
        std::cout << i;
    }
    std::cout << std::endl;
    std::cout << "Wystapienia znakow:" << std::endl;
    for (const auto& pair : dictionary) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

branch * encoding::createNode(char letter, unsigned freq) {
    auto * newNode = new branch;
    newNode->letter = letter;
    newNode->freq = freq;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

branch * encoding::createTree() {
    std::vector<branch*> treeNodes;
     for (const auto& pair : dictionary) {
         branch * branch = createNode(pair.first, pair.second);
        treeNodes.push_back(branch);
    }
}


bool encoding::encodingMetod() {
    for (char character : sentence) {
        if (dictionary.find(character) != dictionary.end()) {
            dictionary[character]++;
        }
        else {
            dictionary[character] = 1;
        }
    }
    return true;
}



