#include <iostream>
#include <vector>
#include <list>

class BigData {
private:
    int* data;
    size_t size;
public:

    // Constructor
    BigData(size_t size) : size(size), data(new int[size]) {
        std::cout << "Constructor call with size : " << size << std::endl;
        for (size_t i = 0; i < size; ++i) {
            data[i] = i;
        }
    }

    // Destructor
    ~BigData() {
        std::cout << "Destructor call\n";
        delete[] data;
    }


    // Copy constructor
    BigData(const BigData& orig) : size(orig.size), data(new int[orig.size]) {
        std::cout << "Copy constructor call\n";
        for (size_t i = 0; i < size; ++i) data[i] = orig.data[i];
    }

    // Assignment operator
    BigData& operator=(const BigData& orig) {
        std::cout << "Assignment operator call\n";
        if (this == &orig) return *this;

        delete[] data;
        size = orig.size;
        data = new int[size];
        for (size_t i = 0; i < size; ++i) data[i] = orig.data[i];
        return *this;
    }

    // Move constructor
    BigData(BigData&& orig) noexcept : data(orig.data), size(orig.size) {
        std::cout << "Move constructor call\n";
        orig.data = nullptr;
        orig.size = 0;
    }

    // Move operator
    BigData& operator=(BigData&& orig) noexcept {
        std::cout << "Move assignment operator call\n";
        if (this == &orig) return *this;

        delete[] data;
        data = orig.data;
        size = orig.size;

        orig.data = nullptr;
        orig.size = 0;

        return *this;
    }

    void print() const {
        std::cout << "BigData: ";
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << "\n";
    }
};

BigData createBigData(size_t size) {
    BigData temp(size);
    return temp;
}

void testBigData() {
    // constructor
    BigData bd1(5);
    bd1.print();

    // copy constructor
    BigData bd2 = bd1;
    bd2.print();

    // constructor
    BigData bd3 = createBigData(3);
    bd3.print();

    // assignment
    bd2 = bd3;
    bd2.print();

    // move assignment
    bd1 = createBigData(4);
    bd1.print();
}


int main()
{

    testBigData();


    std::vector<int> vec = { 1, 6, 8, 10, 12 };
    std::list<int> lst = { 10, 20, 30 };


    auto makeIncrementLambda = [](auto& container) {
        return [&container](int increment) {
            for (auto& el : container)
                el += increment;
            };
        };

    auto increaseVec = makeIncrementLambda(vec);
    auto increaseList = makeIncrementLambda(lst);

    increaseVec(5);
    increaseList(100);

    std::cout << "Vector: ";
    for (auto x : vec) std::cout << x << " ";
    std::cout << "\n";

    std::cout << "List: ";
    for (auto x : lst) std::cout << x << " ";
    std::cout << "\n";


    return 0;
}

