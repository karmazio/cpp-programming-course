#include <iostream>
#include <vector>
#include <map>
#include <list>

using namespace std;

template <typename T>
void printElement(const T& element) {
    cout << element << endl;
}

template <typename K, typename V>
void printElement(const pair <K, V>& element) {
    cout << "{" << element.first << ": " << element.second << "}" << endl;
}

template <typename Container>
void printForEach(const Container& container) {
    cout << "RANGE-BASED: " << endl;

    for (const auto& element : container) {
        printElement(element);
    }
    printf("++++++\n");
}

template <typename Container>
void printWithIterators(const Container& container) {
    auto it = container.begin();
    cout << "WITH ITERATOR: " << endl;
    std::cout << "Iterator type: " << typeid(it).name() << std::endl;
    for (it; it != container.end(); ++it) {
        printElement(*it);
    }
    printf("++++++\n");
}



int main()
{
    vector <int> v = { 1,1,0,0 };
    list <string> l = {"ABC", "C++"};
    map<int, char> m = { {1, 'a'}, {2, 'b'}, {3, 'c'} };

    printForEach(v);
    printWithIterators(v);

    printForEach(l);
    printWithIterators(l);

    printForEach(m);
    printWithIterators(m);



    return 0;
}

