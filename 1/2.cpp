#include <iostream>
#include <ctime>

using namespace std;

void NumberGeneration(int number[2])  
{
    srand(time(0));
    for (int i = 0; i < 2; i++)
    {
        number[i] = 1 + rand() % 9;
    }
}

void NumberGeneration(int number[3])
{
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        number[i] = 1 + rand() % 9;
    }
}
void MainFunctionCalculation(int number_1, int number_2, int number_3, int answer)  
{
    int summ = number_1 + number_2 ; 
    do 
    {
        if (answer == summ)  
        {
            cout << "Молодец! Очень хорошо! " << endl;
        }
        else
        {
            cout << "Не верно , повтори еще раз! " << endl;
            cin >> answer; 
        }
    } while (answer != summ); 
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int number[2]; 
    int answer_user; 
    int repeat = 0; 
    while (repeat != -1)  
    {
        NumberGeneration(number);
        cout << "Сколько будет " << number[0] << " плюс " << number[1] << " ?" << "\n" << "Для завершение введите -1" << endl;
        cin >> answer_user;
        MainFunctionCalculation(number[0], number[1], answer_user);
        cout << "Хотите еще раз сыграть? Если да , то введите 1,  если нет то -1" << endl;
        cin >> repeat;
    }
    system("pause");
    return 0;
}