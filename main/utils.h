#pragma  once


#include <string>
#include <cstdint>
#include <vector>
#include <map>




// String conversion
std::string to_hex(const std::basic_string<char> &s);
std::string to_hex(const char* s, size_t len);
std::string to_hex(const uint8_t*s, size_t len);


// Fuzzy search
template<typename  T>
T& fuzzyTraverse(std::vector<int> const keys, std::map<int,T> maps, int val);


template<typename  T>
class Traverse{

private:
        std::map<int, T> _maps;
        std::vector<int> _keys;
        int max_key;

        void updatekeys(){
            _keys.clear();


        }

public:
        explicit Traverse(std::map<int,T> & m) : _maps(m){
            
        }

        




}