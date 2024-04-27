#include <iostream>
#include <vector>
#include "EString.h"


EString demo(EString str) {
    return str;
}

int main() {
    // Example usage of the EString() constructor
    EString es1;

    // Example usage of the EString(const value_type*) constructor 
    EString es2("Edsger W. Dijkstra");

    // Example usage of the EString(const value_type*) constructor
    EString es3 = "David Gries";

    // Example usage of the EString(const value_type*, size_type) constructor 
    EString es4("Thomas H. Cormen is an emeritus professor", 16);

    // Example usage of the EString(size_type, value_type) constructor 
    EString es5(2, 'V');

    // Example usage of the EString(std::initializer_list<value_type>) constructor
    EString es6({'D', 'o', 'n', 'a', 'l', 'd', ' ', 'K', 'n', 'u', 't', 'h'});

    // Example usage of the EString(It, It) constructor
    char arr1[] = {'U', 'n', 'c', 'l', 'e', ' ', 'B', 'o', 'b'};
    EString es7(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));

    // Example usage of the EString(const std::string&) constructor
    std::string s1("Bjarne Stroustrup");
    EString es8(s1);

    // Example usage of the EString(const EString&) copy constructor
    EString es9(es2);

    // Example usage of the operator=(const EString&) assignment operator
    EString es10 = es3;

    // Example usage of the EString(EString&&) move constructor
    EString temp1("Alexander Stepanov");
    EString es11 = demo(std::move(temp1));

    // Example usage of the operator=(EString&&) move assignment operator
    EString temp2("Scott Meyers");
    EString es12;
    es12 = std::move(temp2);

    // Example usage of the operator=(const std::string&) assignment operator 
    std::string s2("Andrei Alexandrescu");
    EString es13 = s2;

    // Example usage of the begin(), the end() forward iterators and the rbegin(), the rend() reverse iterators
    EString es14("LIVE");
    for (EString::iterator it = es14.begin(); it != es14.end(); ++it) {
        // std::cout << *it;
    }
    // std::cout << std::endl;
    for (EString::reverse_iterator it = es14.rbegin(); it != es14.rend(); ++it) {
        // std::cout << *it;
    }
    // std::cout << std::endl;

    // Example usage of the at(size_type) function
    es5.at(1) = 'i';
    // std::cout << es5 << std::endl;

    // Example usage of the operator[](size_type) indexing operator
    es5[0] = 'p';
    // std::cout << es5 << std::endl;

    // Example usage of the front() and the back() functions
    // std::cout << es5.back() << es5.front() << std::endl;

    // Example usage of the assign(const value_type*) function 
    es9.assign("Jon Bentley");

    // Example usage of the assign(const value_type*, size_type) function 
    es14.assign("Robert Sedgewick is an American computer scientist", 16);

    // Example usage of the assign(size_type, value_type) function 
    es5.assign(3, 'D');

    // Example usage of the assign(It, It) function
    std::vector<char> vec1 = {'R', 'o', 'b', 'e', 'r', 't', ' ', 'C', 'e', 'c', 'i', 'l', ' ', 'M', 'a', 'r', 't', 'i', 'n'};
    es7.assign(vec1.begin(), vec1.end());

    // Example usage of the assign(const EString&) function
    es1.assign(es14);

    // Example usage of the assign(const EString&, size_type, size_type) function
    EString es15 = "Etudes for Programmers by Charles Wetherell (Author)";
    es3.assign(es15, 26, 17);

    // Example usage of the assign(EString&&) function
    EString temp3("Stanley B. Lippman");
    es15.assign(std::move(temp3));

    // Example usage of the assign(std::initializer_list<value_type>) function
    es5.assign({'B', 'r', 'u', 'c', 'e', ' ', 'S', 'c', 'h', 'n', 'e', 'i', 'e', 'r'});

    // Example usage of the assign(const std::string&) function 
    es8.assign(s2);

    // Example usage of the assign(const std::string&, size_type, size_type) function
    std::string s3("Professor Walter Rudin was an Austrian-American mathematician");
    es13.assign(s3, 10, 12);

    // Example usage of the insert(size_type, size_type, value_type) function 
    EString es16("Raymond Merri Smuyan");
    es16.insert(13, 2, 'l');
    es16.insert(19, 2, 'l');

    // Example usage of the insert(size_type, const value_type*) function 
    es6.insert(6, " Ervin");

    // Example usage of the EString& insert(size_type, const value_type*, size_type) function 
    EString es17("Demidovich");
    es17.insert(0, "Boris Spassky", 6);

    // Example usage of the insert(size_type, const const EString&) function
    EString es18("Douglas Hofstadter");
    EString es19(" Richard");
    es18.insert(7, es19);

    // Example usage of the insert(size_type, const EString&, size_type, size_type) function
    EString es20("Christopher Date");
    EString es21("A. V. Aho & J. E. Hopcroft");
    es20.insert(11, es21, 11, 3);

    // Example usage of the insert(const_iterator, value_type) function
    EString es22("Charles E Leiserson");
    EString::const_iterator it1 = es22.begin() + 9;
    EString::iterator insertedIt1 = es22.insert(it1, '.');

    // Example usage of the insert(const_iterator, size_type, value_type) function 
    EString es23("Cliord Stein");
    EString::const_iterator it2 = es23.begin() + 3;
    EString::iterator insertedIt2 = es23.insert(it2, 2, 'f');

    // Example usage of the insert(const_iterator, It, It) function
    EString es24("Gerald Sussman");
    std::vector<char> vec2 = {'V', 'e', 'e', '-', 'J', 'a', 'y', ' ', 'R', 'e', 'c', 'o', 'r', 'd', 's'};
    es24.insert(es24.begin() + 7, vec2.begin() + 4, vec2.begin() + 8);

    // Example usage of the insert(const_iterator, std::initializer_list<value_type>) function
    EString es25("Kenneth Thompson");
    es25.insert(es25.begin() + 7, {' ', 'L', 'a', 'n', 'e'});

    // Example usage of the insert(size_type, const std::string&) function 
    EString es26("Dennis Ritchie");
    std::string s4(" MacAlistair");
    es26.insert(6, s4);

    // Example usage of the insert(size_type, const std::string&, size_type, size_type) function
    EString es27("Linus Torvalds");
    std::string s5("Saint Benedict");
    es27.insert(5, s5, 5, 9);

    // Example usage of the clear() function
    es1.clear();

    // Example usage of the pop_back() function and the push_back(value_type) function
    EString es28("William FelleR");
    es28.pop_back();
    es28.push_back('r');

    // Example usage of the erase(const_iterator) function 
    EString es29("Frank Harrary");
    EString::const_iterator it3 = es29.erase(es29.begin() + 8);

    // Example usage of the erase(const_iterator, const_iterator) function
    EString es30("Gilbert Strang");
    EString::const_iterator it4 = es30.erase(es30.begin() + 3, es30.begin() + 7);

    // Example usage of the replace(size_type, size_type, const EString&, size_type, size_type) function
    EString es31("Ronald Graham, Joel Spencer, and Oren Patashnik");
    EString es32("Donald E. Knuth, Tracy L. Larrabee, and Paul M. Roberts");
    es31.replace(15, 13, es32, 0, 16);

    // Example usage of the replace(const_iterator, const_iterator, std::initializer_list<value_type>) function
    EString es33("Thomas Cormen, Clifford Stein, and Ronald Rivest");
    es33.replace(es33.begin() + 15, es33.begin() + 29, {'C', 'h', 'a', 'r', 'l', 'e', 's', ' ', 'L', 'e', 'i', 's', 'e', 'r', 's', 'o', 'n'});

    // Example usage of the copy(value_type*, size_type, size_type pos = 0) function 
    EString es34("Srinivasa Ramanujan");
    char dest1[10];
    size_t copied_chars = es34.copy(dest1, 9, 10);
    dest1[copied_chars] = '\0';

    // Example usage of the resize(size_type, char) function 
    EString es35("1");
    es35.resize(101, '0');

    // Example usage of the resize(size_type, char) function
    EString es36("1");
    es36.resize(101);

    // Example usage of the swap(EString&) function
    es36.swap(es35);

    // Example usage of the append(size_type, value_type) function
    EString es37("Marshall Ha");
    es37.append(2, 'l');

    // Example usage of the append(const EString&) function
    EString es38(" Jr.");
    es37.append(es38);

    // Example usage of the append(const EString&, size_type, size_type) function
    EString es39("John Edensor Little");
    EString es40("Edward Brerewood");
    es39.append(es40, 12, 4);

    // Example usage of the append(const value_type*, size_type) function
    EString es41("James");
    es41.append(" Mercer Ellington", 7);

    // Example usage of the append(const value_type*) function
    EString es42("Sam");
    es42.append(" Loyd");

    // Example usage of the append(It, It) function
    EString es43("Terence Chi-Shen");
    std::vector<char> vec3 = {' ', 'T', 'a', 'o'};
    es43.append(vec3.begin(), vec3.end());

    // Example usage of the append(std::initializer_list<value_type>) function
    EString es44("Richard");
    es44.append({' ', 'S', 't', 'a', 'l', 'l', 'm', 'a', 'n'});

    // Example usage of the append(const std::string&) function
    EString es45("Paul");
    std::string s6(" Erdős");
    es45.append(s6);

    // Example usage of the append(const std::string&, size_type, size_type) function
    EString es46("Grigori Yakovlevich");
    std::string s7("Yakov Isidorovich Perelman");
    es46.append(s7, 17, 9);

    // Example usage of the substr(size_type pos = 0, size_type count = npos) function
    EString es47("Gerald L. Thompson, John G. Kemeny, and J. Laurie Snell");
    EString es48 = es47.substr(20, 14);

    // Example usage of the operator+(const EString&, const EString&) concatenation operator
    EString es49("The Art");
    EString es50(" of Computer Programming");
    EString es51(es49 + es50);

    // Example usage of the operator+(const EString&, const value_type*) concatenation operator
    EString es52("Concrete");
    const char* str1 = " Mathematics";
    EString es53(es52 + str1);

    // Example usage of the operator+(const EString&, value_type) concatenation operator
    EString es54("What is the name of this book");
    EString es55 = es54 + '?';

    // Example usage of the operator+(const EString&, const std::string&) concatenation operator
    EString es56("A Discipline");
    std::string s8 = " of Programming";
    EString es57 = es56 + s8;

    // Example usage of the operator+(const EString::value_type*, const EString&) concatenation operator
    const char* str2 = "The Science";
    EString es58(" of Programming");
    EString es59 = str2 + es58;

    // Example usage of the operator+(EString::value_type, const EString&) concatenation operator
    EString es60("tructure and Interpretation of Computer Programs");
    EString es61 = 'S' + es60;

    // Example usage of the operator+(const std::string&, const EString&) concatenation operator
    std::string s9 = "Gödel, Escher, Bach:";
    EString es62(" an Eternal Golden Braid");
    EString es63 = s9 + es62;



    return 0;
}


























 