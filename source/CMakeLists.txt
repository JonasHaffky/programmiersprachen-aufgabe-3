add_executable(Aufgabe3-1 Aufgabe3-1.cpp)

add_executable(aufgabe2bis4 aufgabe2bis4.cpp)

add_executable(aufgabe5 aufgabe5.cpp)
target_link_libraries(aufgabe5
${GLFW_LIBRARIES})

add_executable(aufgabe7
  aufgabe7.cpp
  circle.cpp
vec2.cpp
color.cpp)


add_executable(aufgabe8
  aufgabe8.cpp
  circle.cpp
  color.cpp
  vec2.cpp)

add_executable(aufgabe9
aufgabe9.cpp)

add_executable(aufgabe10
aufgabe10.cpp)
