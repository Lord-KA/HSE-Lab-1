#include "treap.hpp"

void test_treap()
{
    Treap<int, int> t;
    
    t.insert(3, 3);
    t.print(std::cerr);
    t.insert(1, 1);
    t.print(std::cerr);
    t.insert(2, 2);
    t.print(std::cerr);
    t.insert(4, 4);
    t.print(std::cerr);

    t.insert(5, 5);
    t.print(std::cerr);

    t.insert(9, 9);
    t.print(std::cerr);

    std::cerr << "\n";
    t.erase(2);
    t.print(std::cerr);
    t.erase(3);
    t.print(std::cerr);
    t.erase(9);
    t.print(std::cerr);
    std::cout << t.find(17) << '\n';
}
void test_treap_2()
{
    Treap<int, int> t;
    
    t.insert(3, 3);
    t.graph_check();
    
    t.print_graph(std::cerr);
    t.insert(1, 1);
    t.print_graph(std::cerr);
    t.insert(2, 2);
    t.print_graph(std::cerr);
    t.insert(2, 4);
    t.print_graph(std::cerr);

    std::cerr << "\n";
    t.erase(2);
    t.print_graph(std::cerr);
}

void test_pool()
{
    const int n = 6;
    ObjPool<int> pool;
    pool.print(std::cerr);
    
    for (int i = 0; i < n + 1; ++i)
    {
        std::cerr << pool.alloc() << "\n";
        pool.print(std::cerr);
    }
    pool.free(0);
    pool.print(std::cerr);
    pool.free(2);
    
    pool.print(std::cerr);
    
    pool.alloc();
    pool.print(std::cerr);

    pool.alloc();
    pool.print(std::cerr);


    pool.alloc();
    pool.print(std::cerr);
}



int main()
{
    test_treap();
    //std::cerr << "\n\n\n";
    //test_treap_2();
    //std::cerr << "\n\n\n";
    //test_pool();
    
    return 0;
}
