#include <iostream> 
using namespace std; 
class Base { 
public:
void show() { 
cout << "Base public function\n"; 
}
};
class PublicDerived : public Base { 
public:
void display() { 
show(); 
}
};
class PrivateDerived : private Base { 
public:
void display() { 
show(); 
} 
};
int main() {
PublicDerived pub; 
PrivateDerived pri; 
pub.display();
pri.display(); 
pub.show();
pri.show();
}

