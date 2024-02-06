#include <bits/stdc++.h>
using namespace std;

class ShoppingList {
    map<int, int> list;
    public:
    void addItem(int code, int price) {
        list[code] = price;
    }

    void deleteItem(int code) {
        list.erase(code);
    }

    void totalPrice() {
        int res = 0;
        for(auto x : list) {
            res += x.second;
        }
        cout << "Total price: " << res << endl;
    }
};

int main() {
    ShoppingList s;
    s.addItem(101, 2000);
    s.addItem(102, 2500);
    s.addItem(103, 5400);
    s.deleteItem(101);
    s.totalPrice();
    return 0;
}