#include <iostream>
using namespace std;

template <typename T>
class SecureVault {
    private:
        T secretData;
    public:
        SecureVault() = default;
        SecureVault(const T& val): secretData(val){};
        void revealSecret() const {
            cout << secretData;
        }
    template <typename T1>
    friend ostream& operator<<(ostream& os, const SecureVault<T1>& obj);

};

template <typename T1>
ostream& operator<<(ostream& os, const SecureVault<T1>& obj) {
    os << obj.secretData;
    return os;
}

template<typename T2>
T2 findSmaller(T2 val1, T2 val2) {
    return((val2 < val1) ? val2 : val1);
}

int main() {

    SecureVault<string> Sobj("MySecretPass");
    SecureVault<int> Iobj(1234);
    SecureVault<double> Dobj(42.5);

    //Method 1 using reveal Secret
    Sobj.revealSecret();
    cout << endl;
    Iobj.revealSecret();
    cout << endl;
    Dobj.revealSecret();
    cout << endl;
    
    //Method 2 using operator overloading
    cout << Sobj << endl;
    cout << Iobj << endl;
    cout << Dobj << endl;

    cout << "findSmaller of 7 and 3 is " << findSmaller(3,7) << endl;
    cout << "findSmaller of a and z is " << findSmaller('a','z') << endl;


    return 0;
}
