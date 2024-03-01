//
// Created by Szymon Skulimowski on 01/03/2024.
//
#ifndef ENCODING_H
#define ENCODING_H

#include <vector>


struct branch {
    char letter;

    unsigned freq;

    branch *left, *right;
};

    class encoding {
        static std::vector<char> sentence;
        static std::vector<int> frequently;

    public:
        static bool read(const std::string& nameOfFile);
        static void writeOnConsole();
        static bool encodingMetod();
        static branch * createNode(char, unsigned);
        static branch * createTree();
    };



#endif //ENCODING_H
