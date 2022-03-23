#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include "Notebook.hpp"
#include "Direction.hpp"

using ariel::Direction;
using namespace ariel;
using namespace std;

int main() {
	ariel::Notebook notebook(1,1,1);
	notebook.show(1);
	notebook.write(/*page=*/1, /*row=*/1, /*column=*/1, Direction::Horizontal, "abcd");
	cout << notebook.read(/*page=*/1, /*row=*/1, /*column=*/1, Direction::Horizontal, /*length=*/4) << endl;  
		// prints "_b_" (starts at row 99 which is empty; then at row 100 there is "b"; then row 101 is empty again).
	notebook.show(1); // shows the notebook's page in a reasonable way. For example:
}