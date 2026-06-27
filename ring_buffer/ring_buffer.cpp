#include <iostream>
#include <initializer_list>
#include "ring_buffer.h"
using namespace std;

template<typename T>
ostream& operator<<(ostream& os,const ring<T>& ringobj1){
    for(int i=0; i < ringobj1.m_size;++i) 
        os << ringobj1.buffptr[i] << endl;
    return os;
}

int main() {

    ring<string> ring_buffer_str(3); //string buffer with size 3
    ring<double> ring_buffer_dbl(4); //double buffer with size 4
    ring<string> ring_buffer_str1(3,{"red","blue","green"}); //string buffer with size 3

    ring_buffer_str.add("apple");
    ring_buffer_str.add("orange");
    ring_buffer_str.add("banana");
    ring_buffer_str.add("kiwi"); //will overwrite apple

    ring_buffer_dbl.add(11.2);
    ring_buffer_dbl.add(3.14);
    ring_buffer_dbl.add(2.78);
    ring_buffer_dbl.add(6.023);
    ring_buffer_dbl.add(9.8); //overwrite 11.2

    for(int sz=0; sz < ring_buffer_str.size(); ++sz)
        cout << ring_buffer_str.get(sz) << endl;
    
    cout << " *********************************************** " << endl;
    
    for(int sz=0; sz < ring_buffer_dbl.size(); ++sz)
        cout << ring_buffer_dbl.get(sz) << endl;

    cout << " *********************************************** " << endl;
        cout << ring_buffer_str1 << endl;

    return 0;
}
