# include <iostream> //std :: cout
# include <set> //std :: set
# include <cstdlib> //std :: rand ()
# include <vector> //std :: vector < >
# include <list> //std :: list < >
# include <map> //std :: map < > 

int main (){
    std::list<unsigned int> l0(100);
    for (auto& l : l0){
    l = std::rand() % 101;
    }
    std :: vector<int> v0(100);
    std::copy (std::begin(l0) , std::end(l0),
    std::begin(v0));

    std::set< unsigned int> set;
    for (auto& l : l0){
        set.insert(l);
        std::cout<<l<<", ";
    }

    std::cout <<"\nEs sind "<<set.size()<<" unterschiedliche Zahlen in der Liste."<<std::endl;
    
    std::cout <<"\nDiese Zahlen sind nicht in der Liste:"<<std::endl;

    for(unsigned int i =0;i<=set.size();i++){
        if(set.find(i) == set.end()){std::cout<<i<<", ";}
    }

    std::map<unsigned int, unsigned int>myMap;
    for (auto& m : l0){
        myMap[m]++;
    }

    std::cout <<"\n\nDie Häufigkeit jeder Zahl ist:"<<std::endl;
    for (auto& m : myMap){
        std::cout<<m.first<<" : "<<m.second<<std::endl;
    } 

}