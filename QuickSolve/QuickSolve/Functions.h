#pragma once
#include <vector>
#include <chrono>
#include <msclr/gcroot.h>
#include <Windows.h>

namespace MyFunctions {
    using namespace System::Collections::Generic;

    ref class Cache {
    public:
        static Dictionary<int, int>^ cacheF1 = gcnew Dictionary<int, int>();
        static Dictionary<int, int>^ cacheF2 = gcnew Dictionary<int, int>();
    };

    int recursiveF1(int n, int& callCount);
    int recursiveF2(int n, int& callCount);
    int iterativeF1(int n);
    int iterativeF2(int n);
}