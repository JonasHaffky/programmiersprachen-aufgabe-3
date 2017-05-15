# include <vector> //std :: vector < >
# include <list> //std :: list < >

int main (){
    std::list<unsigned int> l0(100);
    for (auto& l : l0){
    l = std::rand() % 101;
    }
    std :: vector<int> v0(100);
    std::copy (std::begin(l0) , std::end(l0),
    std::begin(v0));
}