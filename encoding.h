//
// Created by Szymon Skulimowski on 01/03/2024.
//
#ifndef ENCODING_H
#define ENCODING_H

#include <vector>

    class encoding {
        static std::vector<char> sentence;
        static std::vector<int> frequently;

    public:
        static bool read(const std::string& nameOfFile);
        static void writeOnConsole();
        static bool encodingMetod();
    };



#endif //ENCODING_H
