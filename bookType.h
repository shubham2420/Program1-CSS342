#include <iostream>
#include <string>
using namespace std;
/**
 * Description: Interface for class booktype
 *  
 * @author: Shubham Kamboj 
 * @version date: October 16, 2020 
 * */
class bookType{
    public:
    bookType(); // no-arg constructor for bootType
    bookType(string title, string author, int ISBN, string publisher,
     int copies, int numAuthor, double price); // arg constructor for bookType 
    
    //getters
    string getTitle() const;
    string getAuthot() const;
    int getISBN() const;
    string getPublisher() const;
    int getCopies() const;
    int getNumAuthor() const;
    double getPrice() const;

    //setters
    void setTtitle(string title);
    void setAuthor(string author);
    void setISBN(int ISBN);
    void setPublisher(string publisher);
    void setCopies(int copies);
    void setNumAuthor(int numAuthor);
    void setPrice(double price);

    
    void updateCopy(int copy); // updates the copies in stock 

    //shows  the respective categpory for book type
    void showCopy();
    void showPublisher();
    void showISBN();
    void showPrice();
    void showAuthors();
    //checks for the respective categories
    bool checkTitle(string title);
    bool checkNumAuthor(int authors);
    bool checkISBN(int ISBN);
    bool checkPublisher(string publisher);
    bool checkPrice(double price);

    private: //variables not available to user 
    string title; 
    string author;
    int ISBN;
    string publisher;
    int copies;
    int numAuthor;
    double price; 
};
