#pragma once
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
        private:
            int x;//page
            int y;//column
            int z;//row
            typedef tuple<int, int, int> Location;
            map <Location, char> notebook; 
            
        public:
            // Notebook(int page, int column, int row);
            Notebook();
            void write (int page, int column, int row, Direction direction, string text);
            string read (int page, int column, int row, Direction direction, int numOfChar);
            void erase (int page, int column, int row, Direction direction, int numOfChar);
            void show (int page);                      
    };
};