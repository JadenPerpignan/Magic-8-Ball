#include <iostream>
#include <cstdlib>

int main ( ) {

    std::cout << "MAGIC 8-BALL:\n\n";

    srand ( time ( NULL ));

    int answer = std::rand ( ) % 10;

    if ( answer == 0 ) {

        std::cout << "It is certain.\n";

    } else if ( answer == 1 ) {
        std::cout << "Don't count on it.\n";

    } else if ( answer == 2 ) {

        std::cout << "Without a doubt.\n";

    } else if ( answer == 3 ) {

        std::cout << "My reply is no.\n";
    } else if ( answer == 4 ) {

        std::cout << "Yes - definitely.\n";
    } else if ( answer == 5 ) {

        std::cout << "My sources say no.\n";
    } else if ( answer == 6 ) {

        std::cout << "Most Likely\n";

    } else if ( answer == 7 ) {

        std::cout << "Concentrate and ask again.\n";
    } else if ( answer == 8 ) {

        std::cout << "Signs point to yes.\n";
    } else {
        std::cout << "Very doubtful.\n";
    }
    return 0;
}
