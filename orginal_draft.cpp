#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int count = 0;
class ElectronicsProduct
{
private:
    string name;
    double price;
    int quantity;
    double warranty;
    string factory;
    string type;
    bool electronicdiscount;

public:
    ElectronicsProduct()
    {
    }
    ElectronicsProduct(string Name, double price1, int AvaDecives, double Warranty, string Factory, string Type, bool Electronicdiscount)
    {
        name = Name;
        price = price1;
        quantity = AvaDecives;
        warranty = Warranty;
        factory = Factory;
        type = Type;
        electronicdiscount = Electronicdiscount;
    }

    friend std::ostream &operator<<(std::ostream &os, const ElectronicsProduct &other)
    {
        os << " the name is: " << other.name << " the price is: " << other.price << " the quantity is: " << other.quantity << " the warranty is: " << other.warranty << " the fattory is: " << other.factory << " the type is: " << other.type << endl;
        return os;
    }
    // template<class S>
    // ElectronicsProduct operator + (ElectronicsProduct & type)
    //  {
    //      ElectronicsProduct sub;
    //      sub=sub+type;
    //      return sub;
    //  }
    bool operator!=(ElectronicsProduct &temp)
    {
        if (name != temp.name)
        {
            return true;
        }
        else if (price != temp.price)
        {
            return true;
        }
        else if (quantity != temp.quantity)
        {
            return true;
        }
        return 0;
    }
    bool operator==(ElectronicsProduct &temp)
    {
        if (name == temp.name)
        {
            return true;
        }
        else if (price == temp.price)
        {
            return true;
        }
        else if (quantity == temp.quantity)
        {
            return true;
        }
        return 0;
    }

    // bool operator <(ElectronicsProduct&temp)
    // {
    //     return price>temp.price;
    // }
    // bool operator <(ElectronicsProduct&temp)
    // {
    //     return avaDecives<temp.avaDecives;
    // }
    bool operator<(ElectronicsProduct &product1)
    {

        if (name != product1.name)
        {

            return name < product1.name;
        }
        else if (price != product1.price)
        {
            return price > product1.price;
        }
        else
        {
            return quantity > product1.quantity;
        }
    }

    void setname(string name1)
    {
        name = name1;
    }
    void setpriceperdecive(double pricePerDecive1)
    {
        price = pricePerDecive1;
    }
    void setquantity(int avaDecives1)
    {
        quantity = avaDecives1;
    }
    void setwarranty(double warranty1)
    {
        warranty = warranty1;
    }
    void setfactory(string factory1)
    {
        factory = factory1;
    }
    void settype(string type1)
    {
        type = type1;
    }

    string getname()
    {
        return name;
    }
    double getprice()
    {
        return price;
    }
    int getquantity()
    {
        return quantity;
    }
    double getwarranty()
    {
        return warranty;
    }
    string getfactory()
    {
        return factory;
    }
    string gettype()
    {
        return type;
    }
    void setelectronicdiscount(bool electronicdiscount1)
    {
        electronicdiscount = electronicdiscount1;
    }
    bool getelectronicdiscount()
    {
        return electronicdiscount;
    }
};
template <class R>
bool comparePrice(R &product1, R &product2)
{
    return product1.getprice() > product2.getprice();
}
template <class R>
bool comapareName(R &product1, R &product2)
{
    return product1.getname() < product2.getname();
}
template <class R>
bool comapreQuantity(R &product1, R &product2)
{
    return product1.getquantity() > product2.getquantity();
}

class FoodProducts
{
private:
    string name;
    double price;
    string expireDate;
    double quantity;
    string type;
    bool fooddiscount;

public:
    FoodProducts()
    {
    }
    FoodProducts(string Name, double price1, string ExpireDate, double Quantity, string Type, bool Fooddiscount)
    {
        name = Name;
        price = price1;
        expireDate = ExpireDate;
        quantity = Quantity;
        type = Type;
        fooddiscount = Fooddiscount;
    }
    friend std::ostream &operator<<(std::ostream &os, const FoodProducts &other)
    {
        os << "The name is : " << other.name << " The price is: " << other.price << " the expiredate is: " << other.expireDate << " the quantity is " << other.quantity << " the type is: " << other.type << endl;
        return os;
    }
    bool operator!=(FoodProducts &temp)
    {
        if (name != temp.name)
        {
            return true;
        }
        else if (price != temp.price)
        {
            return true;
        }
        else if (quantity != temp.quantity)
        {
            return true;
        }
        return 0;
    }
    bool operator==(FoodProducts &temp)
    {
        if (name == temp.name)
        {
            return true;
        }
        else if (price == temp.price)
        {
            return true;
        }
        else if (quantity == temp.quantity)
        {
            return true;
        }
        return 0;
    }
    // bool operator !=(FoodProducts&temp)
    // {
    //    return name!=temp.name;
    // }

    bool operator<(FoodProducts &product1)
    {

        if (name != product1.name)
        {

            return name < product1.name;
        }
        else if (price != product1.price)
        {
            return price > product1.price;
        }
        else
        {
            return quantity > product1.quantity;
        }
    }
    // bool operator < (FoodProducts product1)
    // {
    //     return price<product1.price;
    // }
    void setname(string name1)
    {
        name = name1;
    }
    void setpricePerKilo(double pricePerKilo1)
    {
        this->price = pricePerKilo1;
    }
    void setexpireDate(string expireDate1)
    {
        expireDate = expireDate1;
    }
    void setquantity(double quantity1)
    {
        quantity = quantity1;
    }
    void settype(string type1)
    {
        type = type1;
    }
    void setfooddiscount(bool fooddiscount1)
    {
        fooddiscount = fooddiscount1;
    }

    string getname()
    {
        return name;
    }
    double getprice()
    {
        return price;
    }
    string getexpireDate()
    {
        return expireDate;
    }
    double getquantity()
    {
        return quantity;
    }
    string gettype()
    {
        return type;
    }
    bool getfooddiscount()
    {
        return fooddiscount;
    }
};

class BooksProducts
{
private:
    string name;
    double price;
    string author;
    string bookGenre;
    int quantity;
    bool bookdiscount;

public:
    BooksProducts()
    {
    }
    BooksProducts(string Title, double price1, string Author, string BookGenre, int Quantity, bool Bookdiscount)
    {
        name = Title;
        price = price1;
        author = Author;
        bookGenre = BookGenre;
        quantity = Quantity;
        bookdiscount = Bookdiscount;
    }

    friend std::ostream &operator<<(std::ostream &os, const BooksProducts &other)
    {
        os << " the name is: " << other.name << " the price is: " << other.price << " the author is: " << other.author << " the book genre is: " << other.bookGenre << " the quantity is: " << other.quantity << endl;
        return os;
    }

    bool operator!=(BooksProducts &temp)
    {
        if (name != temp.name)
        {
            return true;
        }
        else if (price != temp.price)
        {
            return true;
        }
        else if (quantity != temp.quantity)
        {
            return true;
        }
        return 0;
    }
    bool operator==(BooksProducts &temp)
    {
        if (name == temp.name)
        {
            return true;
        }
        else if (price == temp.price)
        {
            return true;
        }
        else if (quantity == temp.quantity)
        {
            return true;
        }
        return 0;
    }
    // bool operator !=(BooksProducts&temp)
    // {
    //    return name!=temp.name;
    // }

    // bool operator < (BooksProducts product1)
    // {
    //     return this->price<product1.price;
    // }
    bool operator<(BooksProducts &product1)
    {

        if (name != product1.name)
        {

            return name < product1.name;
        }
        else if (price != product1.price)
        {
            return price > product1.price;
        }
        else
        {
            return quantity > product1.quantity;
        }
    }

    void setname(string title1)
    {
        name = title1;
    }
    void setprice(double price1)
    {
        price = price1;
    }
    void setAuthor(string author1)
    {
        author = author1;
    }
    void setBookGenre(string bookGenre1)
    {
        bookGenre = bookGenre1;
    }
    void setquantity(int quantity1)
    {
        quantity = quantity1;
    }

    void setbookdiscount(bool bookdiscount1)
    {
        bookdiscount = bookdiscount1;
    }

    string getname()
    {
        return name;
    }
    double getprice()
    {
        return price;
    }
    string getAuthor()
    {
        return author;
    }
    string getBookGenre()
    {
        return bookGenre;
    }
    int getquantity()
    {
        return quantity;
    }
    bool getbookdiscount()
    {
        return bookdiscount;
    }
};

// template<class S>
// bool comparePrice(S&product1,S &product2)
// {
//     return product1.getprice()>product2.getprice();
// }
template <class T>

class ProductManager
{
private:
    vector<T> data;

public:
    ProductManager() {}
    ProductManager(vector<T> data)
    {
        this->data = data;
    }

    void operator+(T &data1)
    {
        data.push_back(data1);

        // for ( size_t i=0 ;i< data1.data.size(); i++ )
        // {
        //     stored.push_back(data1.data[i]);
        // }
    }
    bool validate(T &obj)
    {
        bool exist = false;
        for (size_t i = 0; i < data.size(); i++)
        {
            if (obj == data[i])
            {
                if (obj.getquantity() != 0)
                {
                    exist = true;
                }
            }
        }
        return exist;
    }
    //   void updateafteradd(T & obj, int index)
    // {
    //     data.erase(data.begin()+index);
    //      obj.setquantity(obj.getquantity()-1);
    //      data.push_back(obj);

    // }
    void update(T &obj, int determiner, int accept)
    {
        if (accept == 1)
        {
            int index = search(obj);
            data.erase(data.begin() + index);

            if (determiner == 1)
            {
                obj.setquantity(obj.getquantity() + 1);
            }
            else
            {
                obj.setquantity(obj.getquantity() - 1);
            }

            data.push_back(obj);
        }
    }

    int search(T &data1)
    {
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i].getname() == data1.getname())
            {
                return i;
                // cout<<data[i];
            }
        }
        return 0;
    }
    void operator-(T &data1)
    {
        int index = 0;
        for (size_t i = 0; i < data.size(); i++)
        {
            if (data1 == data[i])
            {
                index = i;
            }
        }
        data.erase(data.begin() + index);
    }
    //   ProductManager<T> operator - (ProductManager<T> & data2)
    //    {
    //     //eraise
    //      ProductManager<T> sub;

    //  for(size_t i=0;i<data.size();i++)
    //  {
    //      for(size_t j=0;j<i;j++)
    //      {
    //          if(data[j] != data2.data[i])
    //          {
    //             sub.data.push_back(data[j]);
    //          }
    //      }
    //  }
    //  return sub;
    //   }

    friend ostream &operator<<(ostream &os, const ProductManager<T> &m)
    {
        for (size_t i = 0; i < m.data.size(); i++)
        {
            os << m.data[i];
            if (i < m.data.size() - 1)
            {
                os << ", ";
            }
        }
        return os;
    }

    void sortby(string word)
    {

        if (word == "price")
        {
            sort(data.begin(), data.end(), comparePrice<T>);
        }

        else if (word == "name")
        {
            sort(data.begin(), data.end(), comapareName<T>);
        }
        else if (word == "quantity")
        {
            sort(data.begin(), data.end(), comapreQuantity<T>);
        }
    }
    //  bool operator < (T product1)
    // {
    //     T name,price,quantity;

    //     if( name!= product1.name )
    //     {
    //         return name<product1.name;

    //     }
    //     if(price!=product1.price )
    //     {
    //     return this->price<product1.price;
    //     }

    //     if (quantity!=product1.quantity)
    //     {
    //         return quantity<product1.quantity;
    //     }
    // }
    //   vector<T> display()
    //   {
    //      for(int i=0;i<data.size();i++)
    //      {
    //          cout<<data[i];
    //      }
    //     return;
    //   }
    vector<T> add(T &add)
    {
        data.push_back(add);
        return data;
    }
    // T remove(ProductManager<T>&remove)
    // {
    //     data.pop_back(remove);
    // }

    // ProductManager<T>operator - (ProductManager<T> & data1)
    // {
    //     ProductManager<T>removed;
    //     for(size_t i=0;i<data1.data.size;i++)
    //     {
    //         removed.data.push_back(data1.data[i]-data.)
    //     }

    // }
    double getMax();
    double getMin();
    double getAverage();
};
template <>
double ProductManager<ElectronicsProduct>::getMax()
{
    double max = 0;
    max = data[0].getwarranty();
    for (size_t i = 0; i < data.size(); i++)
    {

        if (max < data[i].getwarranty())
        {
            max = data[i].getwarranty();
        }
    }
    return max;
}
template <>
double ProductManager<ElectronicsProduct>::getMin()
{
    double min = 0;
    min = data[0].getwarranty();
    for (size_t i = 0; i < data.size(); i++)
    {
        if (min > data[i].getwarranty())
        {
            min = data[i].getwarranty();
        }
    }
    return min;
}
template <>
double ProductManager<ElectronicsProduct>::getAverage()
{
    double sum = 0;
    for (size_t i = 0; i < data.size(); i++)
    {
        sum = sum + data[i].getwarranty();
    }
    double average = sum / (data.size());

    return average;
}

class Discounts
{
private:
    string name;
    // double value;
    double precentage = 0.0;
    double fixed = 0.0;
    double bogo = 0.0;
    string cupon = " ";

public:
    Discounts()
    {
    }
    Discounts(double Precentage, double Fixed, double Bogo, string Cupon)
    {
        precentage = Precentage;
        fixed = Fixed;
        bogo = Bogo;
        cupon = Cupon;
    }
    void setfixed(double fixed1)
    {
        fixed = fixed1;
    }
    void setname(string name1)
    {
        name = name1;
    }
    string getname()
    {
        return name;
    }

    double getnotfixed(Discounts discount1, Discounts discount2)
    {
        return ((discount1.fixed / (discount2.fixed)) / 100.0) * 100.0;
    }
    double getnotprecentage()
    {
        return (precentage / 100.0);
    }
    double getnotcompo()
    {
        return (1 / 2.0);
    }
    string getcupon()
    {
        return cupon;
    }
    double convertcupon(string cupon)
    {
        if (cupon == "No")
        {
            return 0;
        }
        else
        {
            int size = cupon.length();
            char arr[1];
            int y = 0;
            int T = 0;

            for (int i = 0; i < size; i++)
            {
                if (i > 7)
                {
                    arr[T] = cupon[i];
                    T++;
                }
            }
            string cupon1;
            cupon1 = arr;
            return (stoi(cupon1)) / 100.0;
        }
    }
    double getvalue(Discounts &discount, Discounts &discount2)
    {
        double x = 0.0;
        // Discounts temp;
        // discount.getnotfixed(discount,discount2);
        // discount.getnotcompo();
        //  discount.convertcupon(discount.cupon);
        x = discount.getnotprecentage();
        //   if(x<discount.convertcupon(discount.cupon))
        //   {
        //      x=discount.convertcupon(discount.cupon);
        //   }
        if (x < discount.getnotcompo())
        {
            x = discount.getnotcompo();
        }

        //   if(x<discount.getnotfixed(discount,discount2));
        //   {
        //     x= temp.getnotfixed(discount,discount2);
        //   }
        return x;
    }

    double operator-(Discounts price)
    {

        double off = 0.0;
        double sub = 0.0;

        // }
        //      if(price.cupon=="maro")
        //  {
        //     off=25.0/100;
        //  }
        //  else if(price.cupon=="mo")
        //  {
        //     off=30.0/100;
        //  }
        //  else if(price.cupon=="mero")
        //  {
        //     off=(50.0/100);
        //  }
        //  else if(price.cupon=="khaled")
        //  {
        //     off=75.0/100;
        //  }
        //  else if(price.cupon=="mohap")
        //  {
        //     off=40.0/100;
        //  }
        if (price.precentage != 0)
        {
            sub = fixed - fixed * ((price.precentage) / 100.0);
            return sub;
        }
        else if (price.fixed != 0)
        {
            return fixed - price.fixed;
        }

        else if (price.bogo != 0)
        {
            sub = fixed / 2.0;

            return sub;
        }
        else if (price.cupon != " ")
        {
            off = convertcupon(price.cupon);

            cout << off;
            sub = fixed - fixed * off;

            return sub;
        }
        return 1;
    }
    // double Percentagediscounts(double &precent)
    // {
    //     return (precent/100);
    // }
    // double Fixedamountdiscounts(double &fixed)
    // {
    //     return fixed;
    // }
    // string BOGO (string BOGO )
    // {
    //     return BOGO;
    // }
    // // double Coupons(string coupon,double off)
    // // {

    // // }
    // double operator - ( Discounts & product)
    // {
    //     double sub;
    //     sub=price-product.price;
    //     return sub;
    // }
    // another ways :)
    // // void setName( string name1)
    // // {
    // //     name=name1;
    // // }
    // void setPrice(double price1)
    // {
    //     price=price1;
    // }
    // // string getName()
    // // {
    // //     return name;
    // // }
    // double getPrice()
    // {
    //     return price;
    // }
};
template <class S>
class Shoppingcart
{
private:
    vector<S> cart;
    // S arr[15];
    // S removearr[15];
public:
    Shoppingcart()
    {
    }
    // using arrays not vector :)
    //  Shoppingcart(S array[15],S  Removearr[15] )
    //  {
    //   arr=array;
    //   removearr=Removearr;
    //  }
    //  void setarr(S Array[15] )
    //  {
    //      arr=Array;
    //  }
    //  int count=0;
    //  void updateafteradd(S & obj)
    //  {
    //      obj.setquantity(obj.getquantity()-1);
    //  }
    //  void updateafterremove(S & obj)
    //  {
    //      obj.setquantity(obj.getquantity()+1);
    //  }
    bool add(S &obj, bool exist)
    {
        if (exist == 1)
        {
            cart.push_back(obj);
            return true;
        }
        else
        {
            cout << "the product does not exist" << endl;
            return false;
        }
    }
    void display()
    {
        if (cart.empty() == 1)
        {
            cout << "there are no products\n";
        }
        else
        {
            for (size_t i = 0; i < cart.size(); i++)
            {
                cout << cart[i];
            }
        }
    }
    void remove(S &obj)
    {
        int k = 0;
        int i = 0;
        while (i < cart.size() || k == 0)
        {
            if (obj == cart[i])
            {
                cart.erase(cart.begin() + i);
                k++;
            }
            i++;
        }
    }
    int getsize()
    {
        return cart.size();
    }
    S get(int index)
    {
        return cart[index];
    }
    S getlastindex()
    {
        return cart.end();
    }
    void cartsort()
    {
        sort(cart.begin(), cart.end(), comparePrice<S>);
    }

    // antoher ways to apply :)
    // void add(S & obj,bool exist)
    // {
    //     // int size= data.size();

    //     if(exist==1)
    //     {
    //     arr[count]=obj;
    //     count++;
    //     cout<<"success"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"the product does not exist"<<endl;
    //     }
    // }
    // void display()
    // {
    //     for(size_t i=0;i<count;i++)
    //     {
    //         cout<<arr[i];
    //     }
    // }

    // void remove(S & obj)
    // {
    //     int j=0;
    //     int counter=0;
    //     cout<<"the count is\n";
    //     cout<<count<<endl;
    //     for(size_t i=0;i<count;i++)
    //     {
    //         int w=0;
    //          if(obj!=arr[i])
    //          {

    //             removearr[j]=arr[i];
    //             j++;
    //             w=j;
    //          }
    //         // else if(obj==arr[i])
    //         // {
    //         //     counter++;
    //         // }

    //         cout<<"the counter is:\n";
    //         cout<<counter<<endl;
    //         //  if(obj!=arr[i]&&counter>0)
    //         // {
    //         //     int y=w;
    //         //     removearr[y]=arr[i];
    //         //     y++;
    //         // }
    //     }
    //     // cout<<"array:"<<endl;
    //     // // cout<<removearr[0]<<endl;
    //     // // cout<<removearr[1]<<endl;

    //     //  for(int i=0;i<count-1;i++)
    //     //     {
    //     //         cout<<removearr[i]<<endl;
    //     //     }
    //     for(size_t i=0;i<count-1;i++)
    //     {
    //         int j=0;
    //         arr[i]=removearr[i];
    //         count--;
    //     }
    // }
};

bool comapringdiscounts(Discounts &obj, Discounts &product)
{
    return max({obj.getnotprecentage(), obj.convertcupon("Nilecart50"), obj.getnotcompo()}) < max({product.getnotprecentage(), product.convertcupon("Nilecart25"), product.getnotcompo()});
}
class Order
{
private:
    int id = rand();
    Shoppingcart<ElectronicsProduct> electronicCart;
    Shoppingcart<FoodProducts> foodCart;
    Shoppingcart<BooksProducts> bookCart;
    Discounts customer[4];

public:
    Order()
    {
    }
    Order(Shoppingcart<ElectronicsProduct> Cart1, Shoppingcart<FoodProducts> Cart2, Shoppingcart<BooksProducts> Cart3, Discounts customer1[])
    {
        electronicCart = Cart1;
        foodCart = Cart2;
        bookCart = Cart3;
        for (int i = 0; i < 4; i++)
        {
            customer[i] = customer1[i];
        }
    }
    int getId()
    {
        return id;
    }
    void setId()
    {
        id = rand();
    }
    void setelectronicshopingcart(Shoppingcart<ElectronicsProduct> &cart1)
    {
        electronicCart = cart1;
    }
    void setcustomer(Discounts cupon, int index)
    {
        customer[index] = cupon;
    }
    Discounts getcustomer(int index)
    {
        return customer[index];
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // ProductManager<ElectronicsProduct> getcart()
    // {
    //     return
    // }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void display()
    {
        cout << "the ID of the order is\n";
        cout << getId();
        cout << endl;
        cout << "the products in the electronics cart are:" << endl;
        electronicCart.display();
        cout << endl;
        cout << "the products in the food cart are: " << endl;
        foodCart.display();
        cout << endl;
        cout << "the products in the book cart are:" << endl;
        bookCart.display();

        cout << endl;
    }

    // other ways of implementation :)
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // void dicountsort(Discounts& dicount5)
    // {
    //     vector<double> sortv;
    //     for(int i=0;i<4;i++)
    //     {
    //         sortv.push_back(customer[i].getvalue(customer[i],dicount5));
    //         cout<<customer[i].getvalue(customer[i],dicount5);
    //         cout<<sortv[i];
    //     }
    //     sort(sortv.begin(),sortv.end());
    //     for(int i=0;i<sortv.size();i++)
    //     {
    //         cout<<"the vector is:\n";
    //         cout<<sortv[i]<<"          ";
    //     }

    //  }
    // void sortingarray(Discounts arr[])
    // {
    //     Discounts temp=arr[0];
    //     Discounts array[4];
    //     for(int i=0;i<4;i++)
    //     {
    //         int j=0;
    //         if(temp.getnotcompo()<arr[i].getnotcompo())
    //         {
    //             temp=arr[i];
    //             array[j]=temp;
    //             j++;
    //         }

    //     }
    //     if(temp.getnotcompo()<arr[2].getnotcompo())
    //     {
    //         temp=arr[2];
    //     }
    //     if(temp.getnotcompo()<arr[3].convertcupon())
    //     {
    //         temp=arr[]
    //     }

    // }
    //  void sortingdiscounts()
    // {
    //             sort(customer,customer+4,comapringdiscounts);

    // }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    double totalpricebefore()
    {
        double totalpricebefore = 0.0;
        for (int i = 0; i < electronicCart.getsize(); i++)
        {
            ElectronicsProduct electricproduct;
            electricproduct = electronicCart.get(i);
            totalpricebefore = totalpricebefore + electricproduct.getprice();
        }
        for (int i = 0; i < foodCart.getsize(); i++)
        {
            FoodProducts foodproduct;
            foodproduct = foodCart.get(i);
            totalpricebefore = totalpricebefore + foodproduct.getprice();
        }
        for (int i = 0; i < bookCart.getsize(); i++)
        {
            BooksProducts bookproduct;
            bookproduct = bookCart.get(i);
            totalpricebefore = totalpricebefore + bookproduct.getprice();
        }
        cout << "the total price before the discount is:\n"
             << totalpricebefore << endl;
        return totalpricebefore;
    }
    double getmax()
    {
        vector<double> max;
        bool exist = false;
        bool exist2 = false;
        bool exist3 = false;
        for (int i = 0; i < electronicCart.getsize(); i++)
        {
            if (exist != 1)
            {
                if (electronicCart.get(i).getelectronicdiscount() != 0)
                {
                    max.push_back(electronicCart.get(i).getprice());
                    exist = 1;
                }
            }
        }
        for (int i = 0; i < foodCart.getsize(); i++)
        {
            if (exist != 1)
            {
                if (foodCart.get(i).getfooddiscount() != 0)
                {
                    max.push_back(foodCart.get(i).getprice());
                    exist = 1;
                }
            }
        }
        for (int i = 0; i < bookCart.getsize(); i++)
        {
            if (exist != 1)
            {
                if (bookCart.get(i).getbookdiscount() != 0)
                {
                    max.push_back(bookCart.get(i).getprice());
                    exist = 1;
                }
            }
        }

        // max.push_back(electronicCart.get(0).getprice());

        // max.push_back(foodCart.get(0).getprice());
        // max.push_back(bookCart.get(0).getprice());
        sort(max.begin(), max.end());
        return max[0];
    }

    double totalpriceafterproducts(double value, int differ)
    {
        // here I used the function to output the total price after applying discounts and also to get the total amount discounts cost the company  :)
        double totaldiscounts = 0.0;
        double totalpriceb = totalpricebefore();
        double totalpriceafter = 0.0;
        double x1 = customer[0].getnotprecentage();
        double x2 = customer[2].getnotcompo();
        double x3 = value;
        Discounts discout9;
        bool end = false;
        vector<double> maxdiscount;
        maxdiscount.push_back(x1);
        maxdiscount.push_back(x2);
        maxdiscount.push_back(x3);
        sort(maxdiscount.begin(), maxdiscount.end());
        for (int i = 0; i < 4; i++)
        {
            if (end != true)
            {
                if (differ == 1)
                {
                    discout9.setfixed(totalpriceb);
                    // cout<<"the value is\n"<<x<<endl;
                    totalpriceafter = discout9 - customer[3];
                    cout << "the total price after the discounts is:\n";
                    cout << totalpriceafter << endl;
                    end = true;
                }
                else
                {
                    if (maxdiscount[i] == x1)
                    {
                        discout9.setfixed(getmax());
                        double x = discout9 - customer[0];
                        if ((totaldiscounts + x) < totalpriceb)
                        {
                            totaldiscounts = totaldiscounts + x;
                        }
                    }
                    else if (maxdiscount[i] == x2)
                    {
                        discout9.setfixed(getmax());
                        double x = discout9 - customer[2];
                        if ((totaldiscounts + x) < totalpriceb)
                        {
                            totaldiscounts = totaldiscounts + x;
                        }
                    }
                    else if (maxdiscount[i] == x3)
                    {
                        discout9.setfixed(getmax());
                        double x = discout9 - customer[3];

                        if ((totaldiscounts + x) < totalpriceb)
                        {
                            totaldiscounts = totaldiscounts + x;
                        }
                    }
                    else
                    {
                        discout9.setfixed(getmax());
                        double x = discout9 - customer[1];
                        if ((totaldiscounts + x) < totalpriceb)
                        {
                            totaldiscounts = totaldiscounts + x;
                        }
                    }
                }
            }
        }

        // other ways while trying hope you consider the effort :)
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // for(int i=0;i<4;i++)
        // {

        // }
        // double totalpriceafter=totalpricebefore();
        // Discounts discount;
        // double x=0.0;

        // for(int i;i<electronicCart.getsize();i++)
        // {
        //     double max=electronicCart.get(0).getprice();
        //     if(max<electronicCart.get(i))
        //     {

        //     }
        // }
        // for(int i=0;i<4;i++)
        // {

        //         ElectronicsProduct product1;
        //         product1=electronicCart.get(i);
        // if(product1.getelectronicdiscount()!=0)
        // {
        //     discount.setfixed(product1.getprice());
        //     if(x<totalpriceafter)
        //     {
        //         totalpriceafter=totalpriceafter-x;
        //     }
        // }
        // }

        // for(int i=0;i<4;i++)
        // {
        //     ElectronicsProduct product1;
        //     for(int j=0;j<2;j++)
        //     {
        //         product1=electronicCart.get(j);

        //     }
        //     discount.setfixed(product1.getprice());

        //     double x=discount-customer[i];
        //     if(x<totalpriceafter)
        //     {
        //         totalpriceafter=totalpriceafter-x;
        //     }
        // }
        // for(int i=0;i<electronicCart.getsize();i++)
        // {
        //     ElectronicsProduct product1;
        //     product1=electronicCart.get(i);
        // //   double  product1price=product1.getprice();
        // if(product1.getelectronicdiscount()!=0)
        // {
        //     discount.setfixed(product1.getprice());

        //     for(int i=0;i<4;i++)
        //     {
        //        double x= discount-customer[i];
        //        if(x<totalpriceafter)
        //        {
        //        totalpriceafter=totalpriceafter-x;
        //     //    product1.setpriceperdecive(x);
        //       }

        //     }

        // }
        // else
        // {
        //     cout<<product1.getname()<<" can not be preformed any discounts on it \n";
        // }

        // }

        // for(int i=0;i<foodCart.getsize();i++)
        // {
        //     FoodProducts product1;
        //     product1=foodCart.get(i);
        //     if(product1.getfooddiscount()!=0)
        //     {
        //     discount.setfixed(product1.getprice());
        //     for(int i=0;i<4;i++)
        //     {
        //         double x=discount-customer[i];
        //         if(x<totalpriceafter)
        //         {
        //         totalpriceafter=totalpriceafter-x;
        //         }
        //     }
        //     }
        //     else
        //     {
        //         cout<<product1.getname()<<"can not have a discount\n";
        //     }
        // }
        // for(int i=0;i<bookCart.getsize();i++)
        // {
        //     BooksProducts product1;
        //     product1=bookCart.get(i);
        //     if(product1.getbookdiscount()!=0)
        //     {
        //     discount.setfixed(product1.getprice());
        //     for(int i=0;i<4;i++)
        //     {
        //         double x=discount-customer[i];
        //         if(x<totalpriceafter)
        //         totalpriceafter=totalpriceafter+x;
        //     }
        //     }
        //     else
        //     {
        //         cout<<product1.getname()<<"can not be discounted\n";
        //     }
        // }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        totalpriceafter = totalpriceb - totaldiscounts;
        cout << "the total price after the discounts is:\n";
        cout << totalpriceafter << endl;
        return totaldiscounts;
    }
};

int main()
{
    //////////////////////////////////////////////////////////////////////////////////////////
    ElectronicsProduct electronicproduct1("iphone", 10000, 3, 3, "china factory", "phone", 1);
    ElectronicsProduct electronicproduct2("oppo", 1500, 5, 5, "Egypt factory", "phone", 1);
    ElectronicsProduct electronicproduct3("samsung", 3000, 9, 10, "brazil factory", "phone", 1);
    FoodProducts burger1("mac", 1000, "3/10/2024", 7, "fastfood", 1);
    FoodProducts burger2("kin", 100, "8/9/2023", 4, "fastfood", 1);
    BooksProducts book1("never die", 1000, "fawzy", "science fiction", 10, 1);
    BooksProducts book2("love between life and death", 500, "mohamed", "romance", 9, 1);
    /////////////////////////////////////////////////////////////////////////////////////////
    ProductManager<ElectronicsProduct> electroniclist;
    ProductManager<FoodProducts> foodlist;
    ProductManager<BooksProducts> booklist;
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniclist + electronicproduct1;
    electroniclist + electronicproduct3;
    electroniclist + electronicproduct2;
    foodlist + burger1;
    foodlist + burger2;
    booklist + book1;
    booklist + book2;
    /////////////////////////////////////////////////////////////////////////////////////////
    cout << " the electroniclist content after the + is:\n";
    cout << electroniclist;
    cout << " the food list content after the + is: \n";
    cout << foodlist;
    cout << "the book list contetn after the + is: \n";
    cout << booklist;
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniclist - electronicproduct1;
    foodlist - burger1;
    booklist - book1;
    /////////////////////////////////////////////////////////////////////////////////////////
    cout << " the electroniclist content after the - is:\n";
    cout << electroniclist;
    cout << " the food list content after the - is: \n";
    cout << foodlist;
    cout << "the book list contetn after the - is: \n";
    cout << booklist;
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniclist + electronicproduct1;
    foodlist + burger1;
    booklist + book1;
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniclist.sortby("price");
    cout << " this is electronic list sorted by price:" << endl;
    cout << electroniclist;
    electroniclist.sortby("name");
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " this is electronic list sorted by name:" << endl;
    cout << electroniclist;
    electroniclist.sortby("quantity");
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " this is electronic list sorted by quantity:" << endl;
    cout << electroniclist;
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    /////////////////////////////////////////////////////////////////////////////////////////
    foodlist.sortby("price");
    cout << " this is food list sorted by price:" << endl;
    cout << foodlist;
    foodlist.sortby("name");
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " this is food list sorted by name:" << endl;
    cout << foodlist;
    foodlist.sortby("quantity");
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " this is food list sorted by quantity:" << endl;
    cout << foodlist;
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    /////////////////////////////////////////////////////////////////////////////////////////
    booklist.sortby("price");
    cout << " this is book list sorted by price:" << endl;
    cout << booklist;
    booklist.sortby("name");
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " this is book list sorted by name:" << endl;
    cout << booklist;
    booklist.sortby("quantity");
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " this is book list sorted by quantity:" << endl;
    cout << booklist;
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    /////////////////////////////////////////////////////////////////////////////////////////
    cout << "the max warranty duration in the electronic list is:\n";
    cout << electroniclist.getMax() << endl;
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << "the min warranty duration in the electronic list is:\n";
    cout << electroniclist.getMin() << endl;
    cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << "the average warranty duration in the electronic list is\n";
    cout << electroniclist.getAverage() << endl;
    /////////////////////////////////////////////////////////////////////////////////////////
    Shoppingcart<ElectronicsProduct> electroniccart1;
    Shoppingcart<FoodProducts> foodcart1;
    Shoppingcart<BooksProducts> bookcart1;
    /////////////////////////////////////////////////////////////////////////////////////////
    Shoppingcart<ElectronicsProduct> electroniccart2;
    Shoppingcart<FoodProducts> foodcart2;
    Shoppingcart<BooksProducts> bookcart2;
    /////////////////////////////////////////////////////////////////////////////////////////
    bool exist1 = electroniclist.validate(electronicproduct1);
    bool exist2 = electroniclist.validate(electronicproduct2);
    bool exist3 = foodlist.validate(burger1);
    bool exist4 = foodlist.validate(burger2);
    bool exist5 = booklist.validate(book1);
    bool exist6 = booklist.validate(book2);
    bool exist7 = electroniclist.validate(electronicproduct3);
    /////////////////////////////////////////////////////////////////////////////////////////
    bool accept1 = electroniccart1.add(electronicproduct2, exist2);
    bool accept2 = electroniccart1.add(electronicproduct1, exist1);
    bool accept3 = foodcart1.add(burger1, exist3);
    bool accept4 = bookcart1.add(book1, exist5);
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniclist.update(electronicproduct1, -1, accept1);
    electroniclist.update(electronicproduct2, -1, accept2);
    foodlist.update(burger1, -1, accept3);
    booklist.update(book1, -1, accept4);
    /////////////////////////////////////////////////////////////////////////////////////////
    cout << "content of electyonic cart1\n";
    electroniccart1.display();
    cout << "the content of food cart1\n";
    foodcart1.display();
    cout << "the content of book cart1\n";
    bookcart1.display();
    /////////////////////////////////////////////////////////////////////////////////////////

    bool accept5 = electroniccart2.add(electronicproduct3, exist7);

    bool accept6 = foodcart2.add(burger2, exist4);

    bool accept7 = bookcart2.add(book2, exist6);
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniclist.update(electronicproduct3, -1, accept5);
    foodlist.update(burger2, -1, accept6);
    booklist.update(book2, -1, accept7);
    /////////////////////////////////////////////////////////////////////////////////////////
    cout << "content of electyonic cart2\n";
    electroniccart2.display();
    cout << "the content of food cart2\n";
    foodcart2.display();
    cout << "the content of book cart2\n";
    bookcart2.display();
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniccart1.cartsort();
    foodcart1.cartsort();
    bookcart1.cartsort();
    /////////////////////////////////////////////////////////////////////////////////////////
    electroniccart2.cartsort();
    foodcart2.cartsort();
    bookcart2.cartsort();
    /////////////////////////////////////////////////////////////////////////////////////////
    Discounts discount1(50.0, 0, 0, " ");
    discount1.setname("precetnage");
    Discounts discount2(0, 100, 0, " ");
    discount2.setname("fixed");
    Discounts discount3(0, 0, 1, " ");
    discount3.setname("BOGO");
    Discounts discount4(0, 0, 0, "No");
    Discounts discount10(0, 0, 0, " ");
    string cupon = discount4.getcupon();
    double value = discount10.convertcupon(cupon);
    Discounts customerdiscounts[4] = {discount1, discount2, discount3, discount4};
    /////////////////////////////////////////////////////////////////////////////////////////
    Order order1(electroniccart1, foodcart1, bookcart1, customerdiscounts);
    cout << "youe order contaion: \n";
    order1.display();
    order1.totalpricebefore();
    double cost1 = order1.totalpriceafterproducts(value, 0);
    /////////////////////////////////////////////////////////////////////////////////////////
    Discounts discount(0, 0, 0, "Nilecart25");
    discount.setname("cupon");
    Discounts discount5(0, 0, 0, " ");
    Discounts discount6(0, 0, 0, " ");
    Discounts discount7(0, 0, 0, " ");
    string cupon1 = discount.getcupon();
    double value1 = discount10.convertcupon(cupon1);
    Discounts customerdiscounts2[4] = {discount5, discount6, discount7, discount};
    /////////////////////////////////////////////////////////////////////////////////////////
    Order order2(electroniccart2, foodcart2, bookcart2, customerdiscounts2);
    cout << "youe order contaion: \n";
    order2.display();
    order2.totalpricebefore();
    double cost2 = order2.totalpriceafterproducts(value, 1);
    /////////////////////////////////////////////////////////////////////////////////////////
    double total = cost1 + cost2;
    vector<string> namesOfDiscountsUsed({discount.getname(), discount1.getname(), discount2.getname(), discount3.getname()});
    cout << " the total cost that the discounts cost the company is:\n";
    cout << total << endl;
    cout << "the names of the discounts used are: \n";
    for (size_t i = 0; i < namesOfDiscountsUsed.size(); i++)
    {
        cout << namesOfDiscountsUsed[i];
        cout << endl;
    }

    return 0;
}

//  if(price.precentage!=0)
//         {
//             sub= fixed-(fixed*((price.precentage)/100.0));
//             return sub;
//         }
//         else if(price.fixed!=0)
//         {
//             return fixed-(price.fixed);

//         }

//         else if(price.bogo!=0)
//         {
//             sub= fixed/2.0;

//             return sub;
//         }
//         else if(price.cupon!=" ")
//         {
//             int size= price.cupon.length();
//             char arr[1];
//             int y=0;
//             int T=0;

//             for(int i=0;i<size;i++)
//             {
//                 if(i>7)
//                 {
//                 arr[T]=price.cupon[i];
//                 T++;
//                 }

//             }
//             string cupon1;
//             cupon1=arr;
//              off=(stoi(cupon1))/100.0;
//              cout<<off;
//         sub= fixed-fixed*off;

//            return sub;
//         }
//         return 1;
//    }

// all of this are testing
// cout<<electroniclist;
// cout<<discount1.convertcupon("Nilecart25");
// cout<<discount.getvalue(discount1,price);

// cout<<"the value is:\n";
// cout<<value<<endl;
// order1.dicountsort(price);
// cout<<"the value is:\n"<<discount1.getvalue(discount1,discount2);
// order1.display();
// order1.totalpricebefore();
// cout<<"the cupon is:\n"<<discount1.convertcupon("NileCart25");
// electroniclist+phone1;
// electroniclist-phone1;
// electroniclist-phone3;
//  foodlist+burger1;
//  foodlist+burger2;
//  electroniclist.sortby("price");
//  foodlist.sortby("price");
// bool exist=electroniclist.validate(phone1);
//  bool exist1=electroniclist.validate(phone2);
//  bool exist2=electroniclist.validate(phone3);
//  int search=electroniclist.search(phone1);
// electroniclist.search(phone1);
// cout<<"the index is:"<<endl;
// cout<< electroniclist.search(phone2)<<endl;
//  electroniclist.search(phone1);
//  electroniclist.search(phone3);
//  cout<<"the index is:"<<endl;
//  cout<<search<<endl;
// cout<<foodlist;
// Shoppingcart
// cout<< electroniclist.getAverage()<<endl;
// cout<<electroniclist.getMax()<<endl;
// cout<<electroniclist.getMin()<<endl;
// Shoppingcart<ElectronicsProduct> cart1;
// cart1.add(phone1,exist);
// cart1.add(phone1,exist);
// cart1.remove(phone1);
//  cout<<"//////////////////////////////////\n";

// cart1.display();
// Shoppingcart<FoodProducts>cart2;
// cart1.add(phone1,exist);
// electroniclist.update(phone1,search,-1);
//  cout<<"//////////////////////////////////\n";

//      cout<<electroniclist;

//  cart1.updateafteradd(phone1);
//  cart1.add(phone2,exist1);
//  cart1.add(phone3,exist2);
// cart2.add(burger1,foodlist);
// cart2.add(burger2,foodlist);
// cart1.updateafteradd(phone1);

// int c=order1.getId();
// cout<<c<<endl;
// int a=order2.getId();
// cout<<a;
// cout<<"//////////////////////////////////\n";

// double y;
// double z=0;

// cout<<"///////////////////////////////////"<<endl;
// cout<<"imporatant update after add:"<<endl;
// cout<<phone1.getquantity();
// cout<<"///////////////////////////////\n";
// cout<<"after addition\n";
// cart1.display();
// cout<<"///////////////////////////////\n";
// cart1.remove(phone2);
// cart2.remove(burger2);
// Discounts price(0,100,0," ");
// cout<<"///////////////////////////////\n";
// cout<<"after remove\n";
// cart1.display();
// product1ava=product1ava-2;
// phone1.setavadecives(product1ava);
// cout<<"/////////////////////////////////////////////\n";
// cout<<"the max is:\n";
// cout<<y<<endl;
// cout<<"/////////////////////////////////////////////\n";
// cout<<"the min is:\n";
// cout<<z<<endl;
// cout<<"/////////////////////////////////////////////\n";
// cout<<"the average is:\n";
// cout<<b<<endl;
//    double num=phone1.getprice();
//    Discounts discount1(0,num,0," ");
//       Discounts discount2(0,0,0,"NileCart50");
//    //Discounts discount3(0,100,0," ");
//    double d=discount1-discount2;
// //     double mero=discount1-discount3;
// //    double mo=abs(d-mero);
// //      cout<<mo<<endl;;
// //     phone1.setpriceperdecive(mo);
// //    double o= phone1.getprice();

//     cout<<"/////////////////////////////////////"<<endl;
// cout<<d<<endl;
// //    // cout<<o<<endl;
// //      cout<<"/////////////////////////////////////////////\n";
// //     product1ava=0;

//     //phone1.setpriceperdecive(num-discount1);
