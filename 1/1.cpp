void NumberGeneration(int number[3])
{
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        number[i] = 1 + rand() % 9;
    }
}
