# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
#include <iostream>

bool is_even(int n){
    return ((n%2)==0);
}

TEST_CASE ("filtert alle geraden Zahlen und speichert sie in neuem Vektor", "[ filter ]")
{
std::vector<int> v{1,2,3,4,5,6};
std::vector<int> alleven = filter(v, is_even);

REQUIRE(std::all_of(v.begin(), v.end(), is_even));
}
int main(int argc, char* argv[])
{
return Catch::Session().run(argc, argv);
}