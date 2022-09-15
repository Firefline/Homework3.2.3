// Homework3.2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct home
{
    std::string city;
    std::string street;
    int house = 0;
    int apartment = 0;
    int index = 0;
};

void show(home person)
{
    std::cout << "Город: " << person.city << std::endl;
    std::cout << "Улица: " << person.street << std::endl;
    std::cout << "Номер дома: " << person.house << std::endl;
    std::cout << "Номер квартиры: " << person.apartment << std::endl;
    std::cout << "Индекс: " << person.index << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    home adress_first;

    adress_first.city = "Москва";
    adress_first.street = "Арбат";
    adress_first.house = 12;
    adress_first.apartment = 8;
    adress_first.index = 123456;

    show(adress_first);

    home adress_second;

    adress_second.city = "Ижевск";
    adress_second.street = "Пушкина";
    adress_second.house = 59;
    adress_second.apartment = 143;
    adress_second.index = 953769;

    std::cout << std::endl;
    show(adress_second);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
