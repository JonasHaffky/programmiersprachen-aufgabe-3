# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
# include <vector>
# include "circle.hpp"

void insertCircle(std::vector<Circle> vec, Circle const& circle){
    vec.insert(vec.begin(), circle);
}

TEST_CASE ("sortiert die Kreise der Größe nach", "[ sort ]")
{
    Circle circle1(12.0f);
    Circle circle2(82.0f);
    Circle circle3(3.8f);
    Circle circle4(0.9f);
    Circle circle5(22.4f);

    std::vector <Circle> circleVec;

    insertCircle(circleVec, circle1);
    insertCircle(circleVec, circle2);
    insertCircle(circleVec, circle3);
    insertCircle(circleVec, circle4);
    insertCircle(circleVec, circle5);

    sort(circleVec.begin(), circleVec.end());

    REQUIRE(is_sorted(circleVec.begin(), circleVec.end()));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}