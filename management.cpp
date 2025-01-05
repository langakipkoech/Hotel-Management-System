#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Abstract base class for library items
class LibraryItem {
public:
    virtual void DisplayInfo() const = 0;   // Display item information
    virtual void CheckOut() = 0;            // Check out the item
    virtual void Return() = 0;              // Return the item
    virtual ~LibraryItem() = default;       // Virtual destructor
};

// Base class representing a generic book
class Book : public LibraryItem {
protected:
    std::string title;
    std::string author;
    std::string ISBN;
    bool isCheckedOut;

public:
    // Constructor
    Book(const std::string& t, const std::string& a, const std::string& isbn)
        : title(t), author(a), ISBN(isbn), isCheckedOut(false) {}

    // Virtual destructor
    virtual ~Book() {}

    // Display basic book details
    virtual void DisplayInfo() const override {
        std::cout << "Title: " << title << "\n"
                  << "Author: " << author << "\n"
                  << "ISBN: " << ISBN << "\n"
                  << "Status: " << (isCheckedOut ? "Checked Out" : "Available") << "\n";
    }

    // Check out and return logic
    void CheckOut() override {
        if (isCheckedOut) {
            std::cout << "Error: \"" << title << "\" is already checked out.\n";
        } else {
            isCheckedOut = true;
            std::cout << "You have successfully checked out \"" << title << "\".\n";
        }
    }

    void Return() override {
        if (!isCheckedOut) {
            std::cout << "Error: \"" << title << "\" is not checked out.\n";
        } else {
            isCheckedOut = false;
            std::cout << "You have successfully returned \"" << title << "\".\n";
        }
    }
};

// Derived class for e-books
class EBook : public Book {
private:
    std::string fileFormat;
    double fileSize; // in MB

public:
    // Constructor
    EBook(const std::string& t, const std::string& a, const std::string& isbn, const std::string& format, double size)
        : Book(t, a, isbn), fileFormat(format), fileSize(size) {}

    // Override DisplayInfo to include e-book-specific details
    void DisplayInfo() const override {
        Book::DisplayInfo();
        std::cout << "File Format: " << fileFormat << "\n"
                  << "File Size: " << fileSize << " MB\n";
    }
};

// Derived class for printed books
class PrintedBook : public Book {
private:
    int numberOfPages;
    std::string shelfLocation;

public:
    // Constructor
    PrintedBook(const std::string& t, const std::string& a, const std::string& isbn, int pages, const std::string& location)
        : Book(t, a, isbn), numberOfPages(pages), shelfLocation(location) {}

    // Override DisplayInfo to include printed book-specific details
    void DisplayInfo() const override {
        Book::DisplayInfo();
        std::cout << "Number of Pages: " << numberOfPages << "\n"
                  << "Shelf Location: " << shelfLocation << "\n";
    }
};

int main() {
    // Create a collection of library items
    std::vector<std::unique_ptr<LibraryItem>> library;

    // Add EBook and PrintedBook instances to the collection
    library.push_back(std::make_unique<EBook>("Digital Fortress", "Dan Brown", "1234567890", "EPUB", 2.5));
    library.push_back(std::make_unique<PrintedBook>("The Da Vinci Code", "Dan Brown", "0987654321", 689, "A1-B2"));

    // Interact with the library items
    for (const auto& item : library) {
        std::cout << "\nLibrary Item Details:\n";
        item->DisplayInfo();

        // Perform check-out and return operations
        item->CheckOut();
        item->Return();
        std::cout << "\n";
    }

    return 0;
}
