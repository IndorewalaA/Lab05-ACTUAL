#include <iostream>
#include "StringData.h"
#include <vector>
#include <time.h>
#include <chrono>


int linear_search(std::vector<std::string> container, std::string element)
{
    for(int i = 0; i < (container.size()); i++)
    {
        if (container[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(std::vector<std::string> container, std::string element)
{
    int min = 0;
    int max = container.size() - 1;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (container[mid] == element)
        {
            return mid;
        }
        else if (element > container[mid])
        {
            min = mid + 1;
        }
        else if (element < container[mid])
        {
            max = mid - 1;
        }
    }
    return - 1;
}

int main()
{
    std::vector data = getStringData();

    std::cout<<"Linear Search of 'not here'\n";
    auto begTime = std::chrono::system_clock::now();
    std::cout<<"Index of term (-1 if not found): "<<linear_search(data, "not here");
    auto endTime = std::chrono::system_clock::now();
    std::chrono::duration<double> diff = endTime - begTime;
    std::cout<<"\nFinal time: "<<diff.count()<<" seconds";

    std::cout<<"\n\nBinary Search of 'not here'\n";
    begTime = std::chrono::system_clock::now();
    std::cout<<"Index of term (-1 if not found): "<<binary_search(data, "not here");
    endTime = std::chrono::system_clock::now();
    diff = endTime - begTime;
    std::cout<<"\nFinal time: "<<diff.count()<<" seconds";

    std::cout<<"\n\nLinear Search of 'mzzzz'\n";
    begTime = std::chrono::system_clock::now();
    std::cout<<"Index of term (-1 if not found): "<<linear_search(data, "mzzzz");
    endTime = std::chrono::system_clock::now();
    diff = endTime - begTime;
    std::cout<<"\nFinal time: "<<diff.count()<<" seconds";

    std::cout<<"\n\nBinary Search of 'mzzzz'\n";
    begTime = std::chrono::system_clock::now();
    std::cout<<"Index of term (-1 if not found): "<<binary_search(data, "mzzzz");
    endTime = std::chrono::system_clock::now();
    diff = endTime - begTime;
    std::cout<<"\nFinal time: "<<diff.count()<<" seconds";

    std::cout<<"\n\nLinear Search of 'aaaaa'\n";
    begTime = std::chrono::system_clock::now();
    std::cout<<"Index of term (-1 if not found): "<<linear_search(data, "aaaaa");
    endTime = std::chrono::system_clock::now();
    diff = endTime - begTime;
    std::cout<<"\nFinal time: "<<diff.count()<<" seconds";

    std::cout<<"\n\nBinary Search of 'aaaaa'\n";
    begTime = std::chrono::system_clock::now();
    std::cout<<"Index of term (-1 if not found): "<<binary_search(data, "aaaaa");
    endTime = std::chrono::system_clock::now();
    diff = endTime - begTime;
    std::cout<<"\nFinal time: "<<diff.count()<<" seconds";
}



