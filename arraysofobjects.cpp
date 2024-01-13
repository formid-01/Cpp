# Cpp
#include <iostream> //standart giriş/çıkış işlemlerini sağlayan kütüphaneyi içerir.
using namespace std;

class samp { //samp adında bir sınıf tanımlar.
private:
    int a;

public:
    void set_a(int n) {
        a = n;
    }

    int get_a() {
        return a;
    }
};

int main()
{
samp object_1[4];
int i;
for (i=0; i<4; i++) object_1[i].set_a(i);
    for (i=0; i<4; i++) cout << object_1[i].get_a() << " ";
    cout << endl;
return 0;
}
