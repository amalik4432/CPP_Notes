#include <iostream>

using namespace std;
class shop
{
    int n = 5;
    int itemPrice[100];
    int itemCode[100];
    static int counter;

public:
    void setPrice(void)
    {
        cout << "Enter item id: ";
        cin >> itemCode[counter];

        cout << "Enter item price: ";
        cin >> itemPrice[counter];
        counter++;
    }
    void getPrice()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "id is: " << itemCode[i] << " price is: " << itemPrice[i] << endl;
        }
    }
};
int shop::counter = 0;
int main()
{
    shop dukaan;
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.getPrice();

    return 0;
}