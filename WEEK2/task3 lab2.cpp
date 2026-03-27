//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
//int linearSearch(T arr[], T key, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == key)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//class Libraryitem
//{
//public:
//    virtual void display() = 0;
//};
//
//class Book : public Libraryitem
//{
//private:
//    string title;
//    string author;
//    int pages;
//
//public:
//    Book() {}
//
//    Book(string t, string a, int p)
//    {
//        title = t;
//        author = a;
//        pages = p;
//    }
//
//    string getTitle()
//    {
//        return title;
//    }
//
//    int getPages()
//    {
//        return pages;
//    }
//
//    void display()
//    {
//        cout << "Book: " << title << " | " << author << " | " << pages << " pages\n";
//    }
//};
//
//class Newspaper : public Libraryitem
//{
//private:
//    string name;
//    string date;
//    string edition;
//
//public:
//    Newspaper() {}
//
//    Newspaper(string n, string d, string e)
//    {
//        name = n;
//        date = d;
//        edition = e;
//    }
//
//    string getName()
//    {
//        return name;
//    }
//
//    string getEdition()
//    {
//        return edition;
//    }
//
//    void display()
//    {
//        cout << "Newspaper: " << name << " | " << date << " | " << edition << endl;
//    }
//};
//
//class Library
//{
//private:
//    Book books[10];
//    Newspaper papers[10];
//    int bcount = 0;
//    int pcount = 0;
//
//public:
//
//    void addBook(Book b)
//    {
//        books[bcount++] = b;
//    }
//
//    void addNewspaper(Newspaper n)
//    {
//        papers[pcount++] = n;
//    }
//
//    void displayCollection()
//    {
//        cout << "\nBooks:\n";
//        for (int i = 0; i < bcount; i++)
//            books[i].display();
//
//        cout << "\nNewspapers:\n";
//        for (int i = 0; i < pcount; i++)
//            papers[i].display();
//    }
//
//    void sortBooksByPages()
//    {
//        for (int i = 0; i < bcount - 1; i++)
//        {
//            for (int j = 0; j < bcount - i - 1; j++)
//            {
//                if (books[j].getPages() > books[j + 1].getPages())
//                {
//                    Book temp = books[j];
//                    books[j] = books[j + 1];
//                    books[j + 1] = temp;
//                }
//            }
//        }
//    }
//
//    void sortNewspapersByEdition()
//    {
//        for (int i = 0; i < pcount - 1; i++)
//        {
//            for (int j = 0; j < pcount - i - 1; j++)
//            {
//                if (papers[j].getEdition() > papers[j + 1].getEdition())
//                {
//                    Newspaper temp = papers[j];
//                    papers[j] = papers[j + 1];
//                    papers[j + 1] = temp;
//                }
//            }
//        }
//    }
//
//    Book* searchBookByTitle(string title)
//    {
//        string titles[10];
//
//        for (int i = 0; i < bcount; i++)
//            titles[i] = books[i].getTitle();
//
//        int index = linearSearch(titles, title, bcount);
//
//        if (index != -1)
//            return &books[index];
//
//        return NULL;
//    }
//
//    Newspaper* searchNewspaperByName(string name)
//    {
//        string names[10];
//
//        for (int i = 0; i < pcount; i++)
//            names[i] = papers[i].getName();
//
//        int index = linearSearch(names, name, pcount);
//
//        if (index != -1)
//            return &papers[index];
//
//        return NULL;
//    }
//};
//
//int main()
//{
//    Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
//    Book book2("To Kill a Mockingbird", "Harper Lee", 324);
//
//    Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
//    Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");
//
//    Library library;
//
//    library.addBook(book1);
//    library.addBook(book2);
//
//    library.addNewspaper(newspaper1);
//    library.addNewspaper(newspaper2);
//
//    cout << "Before Sorting:\n";
//    library.displayCollection();
//
//    library.sortBooksByPages();
//    library.sortNewspapersByEdition();
//
//    cout << "\nAfter Sorting:\n";
//    library.displayCollection();
//
//    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");
//
//    if (foundBook)
//    {
//        cout << "\nFound Book:\n";
//        foundBook->display();
//    }
//    else
//    {
//        cout << "\nBook not found.\n";
//    }
//
//    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");
//
//    if (foundNewspaper)
//    {
//        cout << "\nFound Newspaper:\n";
//        foundNewspaper->display();
//    }
//    else
//    {
//        cout << "\nNewspaper not found.\n";
//    }
//
//    return 0;
//}