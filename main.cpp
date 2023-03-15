#include <iostream>
#include <string>

// std::string is a class, not a primitive type
// how to use it?



// 2. string object can be used as a function parameter
void printString(const std::string &str) {
    std::cout << str << std::endl;
}

void iterateString1(std::string str) {
    // 3. iterate string
    for (int i = 0; i < str.length(); i++) {
        std::cout << str[i]<< " ";
    }
}

std::string getStr(std::string str);

int main() {
    // 1. create a string object
    std::string str = "Hello, World!";
    std::cout << str << std::endl;

    std::cout << "... "<< std::endl;

    // print string using printString function
    printString(str);

    std::cout << "... "<< std::endl;

    // iterate string using iterateString1 function
    iterateString1(str);

    std::cout << "... "<< std::endl;

    // 4. string object can be used as a function return value
    std::string str2 = getStr(str);
    std::cout << str2 << std::endl;

    std::cout << "... "<< std::endl;
    std::cout << "... "<< std::endl;
    std::cout << "... "<< std::endl;

    // 5. creating a string object using a constructor
    std::string str3("creating str using object !");
    std::cout << str3 << std::endl;

    std::cout << "... "<< std::endl;
    std::cout << "... "<< std::endl;
    std::cout <<getStr(str3) << std::endl;

    std::cout << "... "<< std::endl;
    std::cout << "... "<< std::endl;
    std::string str4(10, 's'); // create a string object with 10 's, string of 10 characters 'a'
    std::cout <<getStr(str4) << std::endl;

    std::cout << "... "<< std::endl;

    // 6. char  * to string
    char *cstr = "char * to string"; // char cstr[] = "char [] to string";
    std::string str5(cstr);
    std::cout << str5 << std::endl;

    std::cout << "... "<< std::endl;

    // 7. string to char *
    std::string str6 = "string to char *";
    char *cstr2 = new char[str6.length() + 1];
    strcpy(cstr2, str6.c_str());
    std::cout << cstr2 << std::endl;

    delete [] cstr2;

    std::cout << "... "<< std::endl;
    std::string str7 = "Accessing individual characters";
    std::string str8 = getStr(str7);
    printString(str8);
    char firstChar = str8[0];
    std::cout << firstChar << std::endl;
    char lastChar = str8[str8.length() - 1];
    std::cout << lastChar << std::endl;

    std::cout << "... "<< std::endl;
    std::cout << "Concatenating strings: "<< std::endl;
    std::string str9 = "Saïd";
    std::string str10 = "Benaissa";
    std::string str11 = str9 + " " + str10;
    printString(str11);

    std::cout << "... "<< std::endl;
    std::cout << "Comparing strings: "<< std::endl;
    std::string str12 = "Saïd";
    std::string str13 = "Benaisa";

    if (str12 == str13) {
        std::cout << "str12 == str13" << std::endl;
    } else {
        std::cout << "str12 != str13" << std::endl;
    }

    std::cout << "... "<< std::endl;
    std::cout << "Finding substrings: "<< std::endl;
    std::string str14 = "Jeg elsker C++ ";
    std::string str15 = "elsker";
    std::size_t found_pos = str14.find(str15);
    std::cout << "found_pos: " << found_pos << std::endl;
    if (found_pos != std::string::npos) {
        std::cout << "Found " << str15 << " at position " << found_pos << std::endl;
    } else {
        std::cout << "Not found_pos" << std::endl;
    }

    std::cout << "... "<< std::endl;

    std::cout << "Replacing substrings: "<< std::endl;
    std::string str16 = str14.replace(str14.find(str15), str15.length(), "liker");
    printString(str16);


    std::cout << "... "<< std::endl;
    std::cout << "Converting to uppercase: "<< std::endl;
    std::string str17 = "Hello, World!";
    for (int i = 0; i < str17.length(); i++) {
        str17[i] = toupper(str17[i]);
    }
    printString(str17);

    std::cout << "... "<< std::endl;
    std::cout << "Converting to lowercase: "<< std::endl;
    std::string str18 = "Hello, World!";
    for (int i = 0; i < str18.length(); i++) {
        str18[i] = tolower(str18[i]);
    }

    printString(str18);

    std::cout << "... "<< std::endl;
    std::cout << " Extracting substrings: "<< std::endl;
    std::string str19 = "Hello, World!";
    std::string str20 = str19.substr(0, 5);
    printString(str20);
    std::string str21 = str19.substr(7, 5);
    printString(str21);

    std::cout << "... "<< std::endl;
    std::cout << "Removing whitespace: "<< std::endl;
    std::string str22 = "   Hello, World!   ";
    std::cout << "Before: " << str22 << std::endl;
    std::cout << "After: " << str22.erase(0, str22.find_first_not_of(' ')) << std::endl;

    std::cout << "... "<< std::endl;
    std::cout << " Converting to other data types: "<< std::endl;
    std::string str23 = "123";
    int num = std::stoi(str23);
    std::cout << num << std::endl;
    double num2 = std::stod(str23);
    std::cout << num2 << std::endl;




    return 0;
}

std::string getStr(std::string str) {
    return str;
}
