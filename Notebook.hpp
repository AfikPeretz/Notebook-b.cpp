#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <stdlib.h>
#include <complex>
#include <map>
#include "Direction.hpp"
using namespace ariel;
using namespace std;

namespace ariel {
    class Notebook { 
        private:
            unsigned int x;
            unsigned int y;
            typedef tuple<unsigned int, unsigned int, unsigned int> Location;
            map <Location, char> notebook; 
        public:
            Notebook(unsigned int page, unsigned int column, unsigned int row);
            Notebook();
            ~Notebook();
            void write (unsigned int page, unsigned int column, unsigned int row, Direction direction, string text);
            string read (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar);
            void erase (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar);
            void show (unsigned int page);                      
    };
}