# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <algorithm>
#include <iostream>
#include <functional>
#include <vector>
#include <list>
#include <iterator>

bool isnt_even(int n){
    return ((n%2)!=0);
}
bool is_even(int n){
    return ((n%2)==0);
}

template<
    template<typename,typename> class Container,
    typename Predicate,
    typename Allocator,
    typename A
>
Container<A, Allocator> filter(Container<A,Allocator> const& container, Predicate const& pred){
    Container<A, Allocator> filtered(container);
    filtered.erase(remove_if(filtered.begin(), filtered.end(), pred), filtered.end());
    return filtered;
}


TEST_CASE ("filtert alle geraden Zahlen und speichert sie in neuem Vektor", "[ filter ]")
{
std::vector<int> v{1,2,3,4,5,6};
std::vector<int> alleven = filter(v, isnt_even);

REQUIRE(std::all_of(alleven.begin(), alleven.end(), is_even));
}
int main(int argc, char* argv[])
{
return Catch::Session().run(argc, argv);
}