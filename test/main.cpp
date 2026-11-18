#include "../headers/calt.hpp"



fn add(int x, int y) {
    return x + y;
}

program {
    i32 a = 9;
    i32 b = 10;
    str c = "c";
    lock d = add(a, b);
    var e = "e";

    var f = std::vector<i32>{1, 2, 3, 4, 5};

    println(d);
    println(e);

    for (var g : f) {
        println(g);
    }

    for (var h : f) {
        println(h);
    }

    f.append(6);

    return 0;
}
