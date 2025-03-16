#include "Functions.h"

namespace MyFunctions {
    int recursiveF1(int n, int& callCount) {
        callCount++;

        if (Cache::cacheF1->ContainsKey(n)) {
            return Cache::cacheF1[n];
        }

        int result;
        if (n < 3) {
            result = 1;
        }
        else if (n % 2 != 0) {
            result = recursiveF1(n - 1, callCount) + recursiveF1(n - 2, callCount);
        }
        else {
            int sum = 0;
            for (int i = 1; i < n; i++) {
                sum += recursiveF1(i, callCount);
            }
            result = sum;
        }

        Cache::cacheF1[n] = result;
        return result;
    }

    int recursiveF2(int n, int& callCount) {
        callCount++;

        if (Cache::cacheF2->ContainsKey(n)) {
            return Cache::cacheF2[n];
        }

        int result;
        if (n == 1) {
            result = 1;
        }
        else if (n % 2 == 0) {
            result = n + recursiveF2(n - 1, callCount);
        }
        else {
            result = 2 * recursiveF2(n - 1, callCount) + recursiveF2(n - 2, callCount);
        }

        Cache::cacheF2[n] = result;
        return result;
    }

    int MyFunctions::iterativeF1(int n) {
        if (n < 3) return 1;
        std::vector<int> f(n + 1);
        f[1] = 1; f[2] = 1;
        for (int i = 3; i <= n; ++i) {
            if (i % 2 != 0) {
                f[i] = f[i - 1] + f[i - 2];
            }
            else {
                int sum = 0;
                for (int j = 1; j < i; ++j) sum += f[j];
                f[i] = sum;
            }
        }
        return f[n];
    }

    int MyFunctions::iterativeF2(int n) {
        if (n == 1) return 1;
        std::vector<int> f(n + 1);
        f[1] = 1;
        for (int i = 2; i <= n; ++i) {
            if (i % 2 == 0) {
                f[i] = i + f[i - 1];
            }
            else {
                f[i] = 2 * f[i - 1] + f[i - 2];
            }
        }
        return f[n];
    }
}