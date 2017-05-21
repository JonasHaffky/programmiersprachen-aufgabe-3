#define CATCH_CONFIG_RUNNER
#include <vector>
#include <algorithm>
#include <catch.hpp>


std::vector <int > v1{ 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 };
std::vector <int > v2{ 9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 };
std::vector <int > v3(9);

auto addVectors = [](int x, int y)-> int  {
	return (x + y);
};
TEST_CASE("testet die elementweise Addition von Vektoren", "transform") {

	transform(v1.begin(), v1.end(), v2.begin(),v3.begin(), addVectors);
	REQUIRE(all_of(v3.begin(), v3.end(), [](int i) {return 10; }));
}


int main(int argc, char * argv[])
{
	return Catch::Session().run(argc, argv);
}