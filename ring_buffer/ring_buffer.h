#include <iostream>
#include <initializer_list>
using namespace std;
template<typename T>
class ring {

    private:
        int m_size; //size of the buffer
        int m_pos; //position to insert data in the buffer
        T* buffptr;
    public:
        ring():ring(0) {
        }
        ring(int size):m_size(size),m_pos(0),buffptr(nullptr){
            buffptr = new T[size];
        }
        ring(int size,initializer_list<string> text):ring(size){
            for(auto data: text)
                add(data);
        }
        ~ring(){
            delete [] buffptr;
        }
        void add(T data){
            buffptr[m_pos++] = data;
            m_pos = m_pos % m_size;
        }
        int size() {
            return m_size;
        }
        //user responsible for sending a valid index
        T& get(int pos) {
            return buffptr[pos];
        }
        template<typename R>
        friend ostream& operator<<(ostream& os,const ring<R>& ringobj1);
};
