/**
 * @file Test.cpp
 * @author Afik Peretz
 * @brief tests for the second assignment notebook
 * @date 2022-03-18
 * @copyright Copyright (c) 2022
 * 
 */
#include <string>
#include "doctest.h"
#include "Direction.hpp"
#include "Notebook.hpp"
using namespace ariel;
using namespace std;


TEST_CASE("notebook checks") {
    ariel::Notebook notebook;
    CHECK_NOTHROW(notebook.write(0,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(1,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(2,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(3,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(4,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(5,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(6,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(7,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(8,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(9,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(10,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(11,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(12,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(13,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(22,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(32,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(43,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(52,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(62,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(72,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(82,5,4,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(92,5,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(11,8,6,Direction::Horizontal,"Afik"));
    CHECK_NOTHROW(notebook.write(15,5,4,Direction::Horizontal,"Afik"));


    CHECK_NOTHROW(notebook.read(15,5,4,Direction::Horizontal,5));
    CHECK_NOTHROW(notebook.read(0,0,0,Direction::Horizontal,3));
    CHECK_NOTHROW(notebook.read(0,5,4,Direction::Horizontal,4));


    CHECK_NOTHROW(notebook.erase(92,5,6,Direction::Horizontal,1));
    CHECK_NOTHROW(notebook.erase(11,8,6,Direction::Horizontal,3));
    CHECK_NOTHROW(notebook.erase(15,5,4,Direction::Horizontal,5));
}

//TEST_CASE("Exceptions Error") {
    
    // CHECK_THROWS(notebook.read(0,0,0, Direction::Horizontal,4));
    // CHECK_THROWS(notebook.read(4,0,0, Direction::Vertical,8));
    // CHECK_THROWS(notebook.read(0,1,6, Direction::Horizontal,4));
    // CHECK_THROWS(notebook.read(4,0,0, Direction::Vertical,8));
    // CHECK_THROWS(notebook.read(12,3,0, Direction::Horizontal,4));
    // CHECK_THROWS(notebook.read(9,0,0, Direction::Vertical,8));
    // CHECK_THROWS(notebook.read(7,0,0, Direction::Horizontal,4));
    // CHECK_THROWS(notebook.read(9,8,5, Direction::Vertical,8));
    // CHECK_THROWS(notebook.read(6,3,0, Direction::Horizontal,4));
    // CHECK_THROWS(notebook.read(5,0,0, Direction::Vertical,8));
    // CHECK_THROWS(notebook.read(3,0,6, Direction::Horizontal,4));
    // CHECK_THROWS(notebook.read(2,4,0, Direction::Vertical,8));

//}
