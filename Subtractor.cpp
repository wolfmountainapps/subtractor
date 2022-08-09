#include "Subtractor.h"

Subtractor::Subtractor()
{
    lastResult = 0;
}

Subtractor::~Subtractor()
{

}

bool Subtractor::sub(int a, int b)
{
    lastResult = a - b;
    return true;
}

int Subtractor::get_last_result()
{
    return lastResult;
}
