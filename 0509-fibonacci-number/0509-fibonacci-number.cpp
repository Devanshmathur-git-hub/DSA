//class Solution {
//public:
//    int fib(int n) {
//        if (n <= 1)
//            return n;

//        return fib(n - 1) + fib(n - 2);
 //   }
//};

class Solution {
public:
    int fib(int n) {

        // Base Case
        if (n == 0)
            return 0;

        if (n == 1)
            return 1;

        // Recursive Case
        return fib(n - 1) + fib(n - 2);
    }
};

//median of 2 sorted arry,next permitation,grp anagram