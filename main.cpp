#include <iostream>

int main()
{
    int age{};
    std::string gender{}, zodiac{};
    std:: cout << "Enter the gender: ";
    std:: cin >> gender;
    std:: cout << "Enter the zodiac sign: ";
    std:: cin >> zodiac;
    std:: cout << "Enter the age: ";
    std:: cin >> age;

    if ((gender == "m") && (zodiac == "cancer" || zodiac == "scorpio" || zodiac == "pisces") && (age < 40))
    {
        std::cout << "Today is a veri fruitful day, and we can achieve things that previously seemed almost impossible." << std::endl;
    } 
    else if ((gender == "w") && (zodiac == "taurus" || zodiac == "virgo" || zodiac == "capricorn") && (15 <= age <= 30))
    {
        std::cout << "Tonight is a good time to hang out with friends, host home parties, and throw impromptu gatherings. It will be not only fun but also interesting: there will be something to keep everyone engaged." << std::endl;
    }
    else {
        std::cout << "The horoscope for you is still in the works. Come back a little later ;)" << std::endl;
    }
    
    return EXIT_SUCCESS;

}