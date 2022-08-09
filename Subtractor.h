#ifndef SUBTRACTOR_H
#define SUBTRACTOR_H

class Subtractor
{
private:
    int lastResult;

public:
    Subtractor();
    ~Subtractor();
    bool sub(int a, int b);
    int get_last_result();
};

#endif // SUBTRACTOR_H
