#include "queue.h"
#include <unordered_map>
#include <fstream>

class priority_queue_min {
private:
    node **heap;
    int heap_size;
    int max_size;
    void sift_up(int );
    void sift_down(int );
    void swap (node **, node **);
public:
    priority_queue_min(std::unordered_map<char, int> );
    ~priority_queue_min();
    void insert(node *);
    node *extract_min();
    node *build_huffman_tree();
    std::unordered_map<char, std::string> encode(node *);
    int binar(char* , char* , std::unordered_map<char, std::string> );
    void decode(char* , char* , int ) const;
};
