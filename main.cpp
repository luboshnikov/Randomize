#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Randomize {
public:
    bool insert(int val){
        if(map.find(val) != map.end()){
            return false;
        }
        int id = arr.size();
        arr.push_back(val);
        map[val] = id;
        return true;
    }
    bool remove(int val){
        if(map.find(val) == map.end()){
            return false;
        }
        int id = map[val];
        map.erase(val);
        arr[id] = arr.back();
        map[arr[id]] = id;
        arr.pop_back();
        return true;
    }
    bool find(const int val){
        return map.find(val) != map.end();

    }
    int get_random(){
        int id = rand() % arr.size();
        return arr[id];
    }
private:
    vector<int> arr;
    unordered_map<int, int> map;
};

int main(){

}
