#include <iostream>
#include <cmath>
#include <deque>

typedef std::deque<std::pair<double, double>> pair_deque;
#define root(input, n) pow(input, 1./n)

pair_deque get_number()
{
    double a;
    double b;
    std::string current_string;
    pair_deque my_pair_vector;
    while (getline(std::cin, current_string))
    {
        sscanf(current_string.c_str(), "%lf", &a);
        getline(std::cin, current_string);
        sscanf(current_string.c_str(), "%lf", &b);
        my_pair_vector.push_back(std::pair<double, double>(a, b));
    }
    return my_pair_vector;
}

int main()
{
    pair_deque my_values = get_number();

    for (pair_deque::const_iterator it = my_values.begin() ; it != my_values.end(); ++it)
        printf("%.0lf\n",root(it->second, it->first));
    return 0;   
}
