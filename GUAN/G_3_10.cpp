#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string number, string descript, int qty, int prc)
{
    setPartNumber(number);
    setDescription(descript);
    setQuantity(qty);
    setPrice(prc);
}
void Invoice::setPartNumber(string number)
{
    partNumber = number;
}

void Invoice::setDescription(string descript)
{
    description = descript;
}
void Invoice::setQuantity(int qty)
{
    quantity = qty;
}
void Invoice::setPrice(int prc)
{
    price = prc;
}
string Invoice::getpartNumber()
{
    return partNumber;
}

string Invoice::getDescription()
{
    return description;
}

int Invoice::getQuantity()
{
    return quantity;
}

int Invoice::getPrice()
{
    return price;
}

int Invoice::getInvoiceAmount()
{
    return quantity * price;
}
