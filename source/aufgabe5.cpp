# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
#include <iostream>

bool isnt_multiple_of_3(int i){
    return ((i%3)!=0);
}

TEST_CASE ("filter alle vielfache von drei", "[ erase ]")
{
std::cout <<"\nDas ist der Vektor mit 100 Zufallszahlen:"<<std::endl;
std :: vector <int> v0(100);
for (auto& v : v0){
v = std::rand()%101;
std::cout <<v<<" ";
}
std::cout <<"\n\nDas ist der Vektor mit den Zahlen die durch 3 teilbar sind:"<<std::endl;
v0.erase(std::remove_if(v0.begin(), v0.end(), isnt_multiple_of_3), v0.end());
for (auto& v : v0){
std :: cout <<v<<" ";
}

REQUIRE(std::all_of(v0.begin(), v0.end(), isnt_multiple_of_3));
}
int main(int argc, char* argv[])
{
return Catch::Session().run(argc, argv);
}