#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <stdlib.h>
#include <complex>
#include <map>
#include "Direction.hpp"
using namespace std;

namespace ariel {
    class Notebook { 
        private :
            typedef tuple<unsigned int, unsigned int, unsigned int> Location;
            map < Location, char> notebook; 
        public:
            void write (unsigned int page, unsigned int column, unsigned int row, Direction direction, string text);
            string read (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar);
            void erase (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar);
            void show (unsigned int page);                      
    };
}