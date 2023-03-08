#include <sstream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        string sayi, rsayi;
        stringstream out;
        out<<x;
        sayi=out.str();
        rsayi=string(sayi.rbegin(), sayi.rend());
        if(sayi==rsayi)
        return true;
        else
        return false;
    }
    
};
