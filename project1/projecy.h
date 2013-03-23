#ifndef projecy_H
#define projecy_H
#include "math.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <set>


class project
{
    public:
        project();

    void multiples_3_and_5();//done
    void even_fibonacce();//done
    void largest_prime_factor();//done
    void largest_palindrome_product();//done
    void smallest_multiple();//done
    void sum_square_diff();//done
    void the_10001st_prime();//done
    void largest_product_in_series();//done
    void special_pytho_triplet();//done
    void summation_of_primes();//done

    void largest_product_in_grid();
    void highly_divisible_triangular_number();
                int number_divisors(int number);
    void large_sum();
                int charToInt(char line);
    void longest_collatz_sequence();
                int collatz_func(long long num);
    void diophantine_reciprocals_a();
                void seive(int n);
    void power_digit_sum();
    void number_letter_counts();
    void maximum_path_sum_I();
                int maxsum (int num1, int num2, int up);
                int path(int num, int tri[][15]);
    void counting_sundays();
    void setStartDate(int startDay, int startMonth, int startYear);
                bool isLeapYear();
                int daysInMonth();
    void updateDate(int numDays);
                int sundaysOnFirst(int endYear);
                int day,month,year;
    void factorial_digit_sum();
    void name_score();
    void first_1000_digit_fibonacci();
        int right(int i);
        int left(int i);
        int convertCharToNum(char num1);
        char convertNumToChar(int num1);

     void truncable_primes();
        bool prime_check(long num);

};

#endif // project_H
