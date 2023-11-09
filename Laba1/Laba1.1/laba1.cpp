#include <iostream>
#include <limits>

int main()
{
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    float x3 = 0;
    float y3 = 0;
    float r = 0;
    float side1 = 0;
    float side2 = 0;

    setlocale(LC_ALL, "RU");
    bool isIncorrect;
    do
    {
        isIncorrect = false;

        std::cout << "Введите координаты нижней левой точки прямоугольника\n";
        std::cin >> x1 >> y1;
        if (std::cin.fail())
        {
            std::cout << "Введенные данные не удовлетворяют условию.Повторите попытку.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            isIncorrect = true;
        }
    } while (isIncorrect);

    do
    {
        isIncorrect = false;
        std::cout << "Ведите координаты верхней правой точки прямоугольника : \n";
        std::cin >> x2 >> y2;
        if (std::cin.fail())
        {
            std::cout << "Введенные данные не удовлетворяют условию.Повторите попытку.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            isIncorrect = true;
        }
        if ((isIncorrect = false) && ((x1 > x2) || (y1 > y2))) {
            std::cout << "Ошибка! X1 должно быть меньше X2, и Y1 должно быть меньше Y2.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            isIncorrect = true;
        }

        

    } while (isIncorrect);

    do
    {
        isIncorrect = false;

        std::cout << "Введите координаты центра круга и его радиус\n";
        if (!(std::cin >> x3 >> y3 >> r))
        {
            std::cout << "Введенные данные не удовлетворяют условию.Повторите попытку.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            isIncorrect = true;
        }
    } while (isIncorrect);

    side1 = x2 - x1;
    side2 = y2 - y1;

    if (x1 < x2 && x3 < x2 && y1 < y3 && y3 < y2 && 2 * r < side1 || 2 * r == side1 && 2 * r < side2 || 2 * r == side2)
    {
        std::cout << " Принадлежит области прямоугольника.\n";
    }
    else
    {
        std::cout << " Не принадлежит области прямоугольника.\n";
    }

    return 0;
}