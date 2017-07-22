#include <tuple>
#include <iostream>

namespace P0217R3 {

// Structured binding allows us to bind multiple parameters in a single line
struct S { int x1 : 2; volatile double y1; };
S f() {
	return S{ 1, 2.0f };
}

const auto [x, y] = f();

/*
Will compile & work on the next VS 2017 build.

auto my_tuple = std::make_tuple(3, 4.0f);
const auto[threeInt, fourFloat] = my_tuple;
*/

}

int main() {
	// Will print: Got x = 1 And y = 2
	std::cout << "Got x = " << P0217R3::x << " And y = " << P0217R3::y;
}