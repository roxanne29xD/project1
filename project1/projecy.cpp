#include "projecy.h"
#define MAX    200000
#define LL	long long
#define LIMIT	1000
    bool composite[MAX + 1];
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>



using namespace std;
project::project()
{
}

void project::multiples_3_and_5()
{
int sum = 0;

    for(int i = 0; i < 1000; i++)
    {
        if(i%3 == 0 || i%5 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
}

void project::even_fibonacce()
{
    int sum = 0, present = 1, previous = 1, temp;
        while(present < 4000000)
        {
            if(present%2 == 0)
            {
                sum += present;
            }

            temp = present;
            present += previous;
            previous = temp;
        }

        cout << "The sum of all even numbers is " << sum << endl;
}

void project::largest_prime_factor()
{

    long long largest_prime = 0LL;
    long long num = 600851475143LL;
    int i, k;

    for(i = 2; i < num; i++)
    {

        if(num%i == 0)
        {
            for(k = 2; k < i; k ++)
            {
                if(i%k == 0)
                {
                    break;
                }

                else if(k == i - 1)
                {
                    largest_prime = i;
                }
            }
        }
    }

    cout << largest_prime << endl;

}

void project::largest_palindrome_product()
{
    int numbers[2];
    int largest[2];

    for(int i = 100; i < 1000; i++)
    {
        numbers[0] = i;
        for(int k = 100; k < 1000; k++)
        {
            ostringstream convert;
            string palindrome;
            string final_palindrome = "";
            numbers[1] = k;
            int product = numbers[0]*numbers[1];
            convert << product;
            palindrome = convert.str();
            int range = palindrome.length();
            for(int x = 0; x < range; x++)
            {
                final_palindrome = palindrome.at(x) + final_palindrome;
                if(palindrome == final_palindrome)
                {
                    for(int j = 0; j < 2; j++)
                    {
                        largest[j] = numbers[j];
                    }
                }
            }
        }
    }

    for(int i = 0; i < 2; i++)
    {
        cout << largest[i] << endl;
    }

}

void project::smallest_multiple()
{
    int i = 1;
    bool c = false;
    while(!c)
    {
        for(int k = 1; k <= 20; k++)
        {

            if(i%k == 0)
            {
                if(k == 20)
                {
                    c = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        i++;
    }
    i--;
    cout << i << endl;
}

void project::sum_square_diff()
{
    int sum = 0;
    int sqr = 0;
    int temp = 0;
    for(int i = 1; i <= 100; i++)
    {
        sum += i;
        temp = i*i;
        sqr += temp;
    }

    sum *= sum;
    cout << sum - sqr << endl;

}

void project::the_10001st_prime()
{
    int x = 2;
    for(int i = 0; i < 10001; i++)
    {
        bool a = 0;
        while(!a)
        {
            for(int k = 2; k <= x; k++)
            {

                if(k == x)
                    a = true;

                else if(x%k == 0)
                    break;
            }
            x++;
        }
    }
    x--;
    cout << x << endl;
}

void project::largest_product_in_series()
{

    ifstream ReadFile;
    string line, str;
    string numbers = "";
    int index = 0;
    int temp = 0;
    int y = 0;
    int product = 1;
    int product2 = 1;
    int getnumber[5];
    int highestproduct[5];
    ReadFile.open("4digits.txt");

    while(ReadFile.good())
    {
        getline(ReadFile, line);
        str = line;
        numbers += str;
    }
        string a;
        for(int i = 0; i < 1000 - 4;i++)
        {
            product2 = 1;

            index = i;
            for(int k = 0; k < 5; k++)
            {
                a = numbers.at(index);
                stringstream(a) >> temp;
                y = temp;
                getnumber[k] = y;
                product2 *= getnumber[k];
                index++;
             }

            if(product < product2)
            {
                product = product2;
                for(int k = 0; k < 5; k++)
                {
                    highestproduct[k] = getnumber[k];
                }
            }

        }
      cout << product << endl;

}

void project::special_pytho_triplet()
{
    bool test = false;
    int a, b, c;
    for(a = 1; a < 1000/3; a++)
    {
        for(b = 2; b < 1000/2; b++)
        {
            c = 1000 - a - b;

            if(a*a + b*b == c*c)
            {
                test = true;
                break;
            }
        }
        if(test)
        {
            break;
        }
    }

    cout << a*b*c << endl;
}

void project::summation_of_primes()
{
    long long sum = 0LL;
    int range = 2000000;


    for(int i = 2; i < range; i++)
    {
        for(int k = 2; k <= i; k++)
        {
            if(k == i)
            {

                sum += i;
            }

            else if(i%k == 0)
            {
                break;
            }
        }
    }
    cout << sum << endl;
}

void project::largest_product_in_grid()
{
    int num_container[20][20] = {
                                { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
                                {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
                                {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
                                {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
                                {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
                                {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
                                {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
                                {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
                                {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
                                {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
                                {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
                                {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
                                {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
                                {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
                                {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
                                {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
                                {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
                                {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
                                {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
                                {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},
                                };

    int start = 0;
    int end = 3;
    int product = 1;

    vector<long int>final_results;

    //left/right/up/down//
    for(int i=0; i<20; i++)
    {
        for(int j=start; j<=end; j++)

        {
            product=product*num_container[i][j];
            if(j==end)

            {
            final_results.push_back(product);
            product=1;
            start++;
            end++;
            }

            if(j==19)break;
        }

        start=0;
        end=3;

        for(int k=start; k<=end; k++)
        {
            product=product*num_container[k][i];
            if(k==end)

            {
            final_results.push_back(product);
            product=1;
            start++;
            end++;
            }

            if(k==19)

            {
            start=0;
            end=3;
            break;
            }
        }
    }

    //Diagonal_top-right_to_bot-left//and_vice_versa//
    int current_row = 0;
    for(int i=0; i<=16; i++)

    {
        for(int j=0; j<=16; j++)

        {
            current_row = i;
            for(int k=start; k<=end; k++)

            {
                product = product * num_container[current_row][k];
                current_row++;
                if (k==end)
                    final_results.push_back(product);
            }

            product = 1;
            start++;
            end++;
        }

        start = 0;
        end = 3;

        for(int j=0; j<=16; j++)

        {
            current_row = i+3;
            for(int k=start; k<=end; k++)

            {
                product = product * num_container[current_row][k];
                current_row--;
                if (k==end)
                    final_results.push_back(product);
            }

            product = 1;
            start++;
            end++;
        }

        start = 0;
        end = 3;
    }

    int max_product=0;
    for(unsigned p=0; p<final_results.size(); p++)

    {
        if(final_results[p]>max_product)
            max_product=final_results[p];
    }

    cout << "Greatest Product: " << max_product << endl;
}

void project::highly_divisible_triangular_number()
{
    int triangle=0;
    int n=1;
    while(project::number_divisors(triangle)<500)

    {
        triangle+=n;
        n++;
    }

    cout<<  "Value of the First Triangle: " << triangle << endl;
}

    int project::number_divisors(int number)
    {
        int numberDivisor = 0;
        int root = sqrt(number);

        for(int i = 1; i<= root; i++)

        {
        if(number % i == 0)

        {
            numberDivisor += 2;
        }
        }

        if (root * root == number)

        {
        numberDivisor--;
        }

        return numberDivisor;
}

void project::large_sum()
{
    int numbers[100][50];
    string line;
    int sum=0;
    int carry=0,remainder=0;
        vector<int>largenumber;

    ifstream myfile;
    myfile.open("largestSum.txt");

    int j=0;
    while(myfile.good())
    {
        getline(myfile,line);
        for(int i=0;i<50;i++)
            numbers[j][i]=charToInt(line[i]);
            j++;
    }

    myfile.close();

    int a=49;
    while(a>=0)
    {
        sum=0;
        for(int b=0; b<100; b++)

        {
            sum =sum + numbers[b][a];
        }

        sum=sum+carry;
        carry=sum/10;
        remainder=sum-carry*10;
        largenumber.insert(largenumber.begin(),remainder);
        a--;
        }

        largenumber.insert(largenumber.begin(),carry);

        for(int i=0;i<9;i++)
            cout<< "Sum: "<<largenumber[i];
            cout<<"\n";
}

    int project::charToInt(char line)
    {
        if(line == '0')
            return 0;

        if (line == '1')
            return 1;

        if (line == '2')
            return 2;

        if (line == '3')
            return 3;

        if (line == '4')
            return 4;

        if (line == '5')
            return 5;

        if (line == '6')
            return 6;

        if (line == '7')
            return 7;

        if (line == '8')
            return 8;

        if (line == '9')
            return 9;

    return 0;
}

void project::longest_collatz_sequence()
{
    long int num_of_terms=0;
    long int highest_term=0;
    int num_with_highestTerm=0;

    for(int i=999999; i>1; i--)

    {
        num_of_terms=collatz_func(i);
        if(num_of_terms>highest_term)

        {
            highest_term=num_of_terms;
            num_with_highestTerm=i;
        }

    }
        cout << "Number with Highest Term: " << num_with_highestTerm<< endl;
}

    int project::collatz_func(long long num)
    {
        long int terms=1;
        while (num != 1)

        {
            if (num%2 == 0)
                num = num/2;

            else if (num%2 == 1)
                num = 3*num + 1;
                    terms++;
        }

        return terms;
}

void project::diophantine_reciprocals_a()
{
    vector<int> prime;
    seive(MAX);
	for (int N = 1000; N < MAX; N++)

	{
		if (!composite[N])
			continue;

    // Compute number of divisors of N squared
    int numdiv = 1, cn = N;
    for (unsigned i = 0; 1 != cn && i < prime.size(); i++)

		{
			int	count = 0;
			while (cn % prime[i] == 0)

			{
				cn /= prime[i];
				count++;
			}

			numdiv *= (count * 2 + 1);
		}

		int ans = (numdiv + 1) / 2;
		if (ans > LIMIT)

		{
			cout << "Value of N: " << N << endl;
			break;
		}
	}
}

void project::seive(int n)
{
    vector<int> prime;
	int	i, j;
	for (i = 2; i * i <= n; i++)

	{
		if (composite[i])
			continue;

		for (j = 2 * i; j <= n; j += i)
			composite[j] = 1;
            prime.push_back(i);
	}

	for (; i <= n; i++)
		if (!composite[i])
			prime.push_back(i);
}

void project::power_digit_sum()
{
    stringstream ss;
    string num = "";
    int answer = 0;
    ss.setf(ios::fixed);
    ss << setprecision(0) << pow(2, 1000);
    ss >> num;
    for(unsigned int i = 0; i < num.length(); i++)
        answer += atoi(num.substr(i,1).c_str());

    cout <<"Sum: " << answer << endl;
}

void project::number_letter_counts()
{
    string dictionary1[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string dictionary2[18] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    string dictionary3[10] = { "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred", "onethousand" };

    int sum_of_all_letters=0;
    int i=0,start,j,k;
    while(i<10)

    {
        sum_of_all_letters+=dictionary1[i].length();
        i++;
    }

        sum_of_all_letters-=4;
        i=0;

    while(i<10)

    {
        sum_of_all_letters+=dictionary2[i].length();
        i++;
    }

    start=10;
    while(start<18)

    {
        sum_of_all_letters+=dictionary2[start].length();
        for(i=1; i<10; i++)
        sum_of_all_letters+=dictionary2[start].length()+dictionary1[i].length();
        start++;
    }

    j=0;
    start=10;
    while(j<9)

    {
        sum_of_all_letters+=dictionary3[j].length();
        for(i=1; i<10; i++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary1[i].length()+3;
        for(k=0; k<10; k++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary2[k].length()+3;
        for(int p=10; p<18; p++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary2[p].length()+3;

        while(start<18)
        {
            for(int a=1; a<10; a++)
                sum_of_all_letters+=dictionary3[j].length()+dictionary2[start].length()+dictionary1[a].length()+3;
            start++;
        }

        start=10;
        j++;
    }

        sum_of_all_letters+=dictionary3[9].length();
        cout<< "Sum of all Letters: "<<sum_of_all_letters<<endl;
}

void project::maximum_path_sum_I()
{
    int tri [15][15] = {
                       {75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {95, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {17, 47, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {18, 35, 87, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {20, 4, 82, 47, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {19, 1, 23, 75, 3, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {88, 2, 77, 73, 7, 63, 67, 0, 0, 0, 0, 0, 0, 0, 0},
                       {99, 65, 4, 28, 6, 16, 70, 92, 0, 0, 0, 0, 0, 0, 0},
                       {41, 41, 26, 56, 83, 40, 80, 70, 33, 0, 0, 0, 0, 0, 0},
                       {41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 0, 0, 0, 0, 0},
                       {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14, 0, 0, 0, 0},
                       {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 0, 0, 0},
                       {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 0, 0},
                       {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 0},
                       {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
                       };

        cout << "Maximum Total: "<<path(15, tri) << endl;
}

    /* Finds largest of 3 and adds to upper num */
    int project::maxsum (int num1, int num2, int up)

    {
    int biggest = num1;
    if(num2 > biggest)
        biggest = num2;
    return biggest + up;
    }

    /* Finds largest path */
    int project::path(int num, int tri[][15])

    {
        for(int i = num-1; i >= 0; i--)

        {
            for(int j = 0; j+1 < num && tri[i][j+1] != 0; j++)
            tri[i-1][j] = maxsum(tri[i][j], tri[i][j+1], tri[i-1][j]);
        }

        return tri[0][0];
}

void project::counting_sundays()
{
    setStartDate(6, 1, 1901);
    cout << "Number of Sundays: "<<sundaysOnFirst(2000) << endl;
}

void project::setStartDate(int startDay, int startMonth, int startYear)
{
   day = startDay;
   month = startMonth;
   year = startYear;
}

    bool project::isLeapYear()

    {
    if(year % 100 == 0)

        {
            //if century
            if(year % 400 == 0)

            //if divisible by 400
            return true;

    else
            return false;
        }

    else if(year % 4 == 0)

    //else if divisible by 4
        return true;

    else
        return false;
}

    int project::daysInMonth()
    {
    if(month == 2)

        {
        if(isLeapYear())
            return 29;

        else
            return 28;
        }

     else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
        return 30;

    else
        return 31;
}

/* Variable 'numDays' must not be greater than 27*/
void project::updateDate(int numDays)
{
    day += numDays;
    if(day > daysInMonth())

    {
        day -= daysInMonth();
        month++;
    }

    if(month > 12)

    {
        month = 1;
        year++;
    }
}

/* Global variable 'day' must be set to a Sunday */
int project::sundaysOnFirst(int endYear)
{
    int sundays = 0;
    for(; year <= endYear; updateDate(7))

    {
        if(day == 1)
            sundays++;
    }

    return sundays;
}

void project::factorial_digit_sum()
{
    int i = 0, j = 0;
int summation = 0;
int array[1000] = {0};
array[0] = 1;

for (i = 1; i <= 100; i++)
{
for (j = 0; j < 1000; j++)
{
array[j] = array[j]*i;
}
for (j = 0; j < 1000; j++)
{
array[j+1] += (array[j])/10;
array[j] = (array[j])%10;
}
}
for (j = 0; j < 1000; j++)
{
summation += array[j];
}
cout << "The sum is: " << summation <<endl;

    }
void project::name_score()
{
    ifstream ReadFile;
    string line, temp = "";
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int range_c = alphabet.length();
    int rank = 0, letter = 0, product = 0, range = 0, range_n = 0, i_n = 0;
    long int sum = 0;
    ReadFile.open("names.txt");
    getline(ReadFile,line);
    ReadFile.close();
    range = line.length();

    for(int i = 0; i < range; i++)
    {
        if(line.at(i) == '"')
        {
            range_n++;
        }
    }
    range_n /=2;

    string names[range_n];
    for(int i = 1; i < range; i++)
    {
        if(line.at(i) == '"' || line.at(i) == ',')
        {
            if(temp != "")
            {
                names[i_n] = temp;
                temp = "";
                i_n++;
            }
            continue;
        }
        temp += line.at(i);
    }

    for(int i = 0; i < range_n; i++)
    {
        for(int k = 0; k < range_n;k++)
        {
            if(names[i] > names[k])
            {
                string temp_r = names[k];
                names[k] = names[i];
                names[i] = temp_r;
            }
        }
    }

    for(int i = 0; i < range_n; i++)
    {
        letter = 0;
        rank = range_n - i;
        int range_a = names[i].length();
        for(int k = 0; k < range_a; k++)
        {
            for(int j = 0; j < range_c; j++)
            {
                if(names[i].at(k) == alphabet.at(j))
                {
                    letter += j + 1;
                    break;
                }
            }
        }

        product = rank*letter;
        sum += product;
    }

    cout << "The sum of the product of Rank and letter of names is: " <<  sum << endl;
}

int project::convertCharToNum(char num1)
{
    int num;
    if(num1 == '1') num = 1;
    else if(num1 == '2') num = 2;
    else if(num1 == '3') num = 3;
    else if(num1 == '4') num = 4;
    else if(num1 == '5') num = 5;
    else if(num1 == '6') num = 6;
    else if(num1 == '7') num = 7;
    else if(num1 == '8') num = 8;
    else if(num1 == '9') num = 9;
    else if(num1 == '0') num = 0;
    return num;
}//for prob 16, 20 and 22

char project::convertNumToChar(int num1)
{
    char num;
    if(num1 == 1) num = '1';
    else if(num1 == 2) num = '2';
    else if(num1 == 3) num = '3';
    else if(num1 == 4) num = '4';
    else if(num1 == 5) num = '5';
    else if(num1 == 6) num = '6';
    else if(num1 == 7) num = '7';
    else if(num1 == 8) num = '8';
    else if(num1 == 9) num = '9';
    else if(num1 == 0) num = '0';

    return num;
}

void project::first_1000_digit_fibonacci(){
    string present = "1";
    string previous = "0";
    string temp = present;
    string temp_sum = "";

    int carry = 0;
    int term = 1;
    int range_pt = present.length();
    int range_pv = previous.length();
    while (range_pt < 1000)
    {
        if(range_pt > range_pv)
        {
            for(int i = 0; i < range_pt - range_pv; i++)
            {
                previous = "0" + previous;
            }
            range_pv = previous.length();
        }

        for(int i = range_pt - 1; i >= 0; i--)
        {
            int num_a = convertCharToNum(present.at(i));
            int num_b = convertCharToNum(previous.at(i));
            int sum = num_a + num_b + carry;
            carry = 0;

            if(sum > 9)
            {
                int a = sum%10;
                sum -= a;
                carry = sum/10;
                temp_sum = convertNumToChar(a) + temp_sum;
            }

            else
            {
                temp_sum = convertNumToChar(sum) + temp_sum;
            }

            if(carry != 0 && i == 0)
            {
                temp_sum = convertNumToChar(carry) + temp_sum;
                carry = 0;
            }
        }

        temp = present;
        present = temp_sum;
        previous = temp;
        term++;
        temp_sum = "";
        range_pt = present.length();
        range_pv = previous.length();
    }
    cout <<  term << endl;
}
int project::right(int i)
{
    ostringstream convert;
    convert << i;
    string x = convert.str();
    int temp;
    int remainder;
    int divide = 10;
    int times = 1;
    bool prime = true;
    int range = x.length();


    for(int k = 0; k < range - 1 ; k++)
    {
        if(x.at(0) == '1' || x.at(0) == '4' || x.at(0) == '6' || x.at(0) == '8')
        {
            prime = false;
            break;
        }

        divide = divide*times;
        remainder = i%divide;
        temp = i - remainder;
        temp = temp/divide;

        if(temp == 1)
        {
            prime = false;
            break;
        }

        for(int j = 2; j < temp; j++)
        {
            if(temp%j == 0)
            {
                prime = false;
                k = range;
                break;
            }
        }

        times *= 10;
    }

    return prime;
}//for soln23

int project::left(int i)
{
    ostringstream convert;
    convert << i;
    string x = convert.str();
    bool prime = true;
    int range = x.length();
    int divide = 1;
    int temp;
    for(int k = 0; k < range; k++)
    {
        divide *= 10;
    }

    for(int k = 0; k < range; k++)
    {

        temp = i%divide;

        if(temp == 1)
        {
            prime = false;
            break;
        }

        for(int j = 2; j < temp; j++)
        {
            if(temp%j == 0)
            {
                k = range;
                prime = false;
                break;
            }
        }

        divide /= 10;
    }
    return prime;
}//for soln23

void project::truncable_primes(){
    int number = 23;
    int term = 0;
    int sum = 0;
    bool ok;
    while(term < 11)
    {
        ok = true;
        for(int a = 2; a < number; a++)
        {
            if(number%a == 0)
            {
                ok = false;
                break;
            }
        }

        if(ok)
        {
            if(right(number) && left(number))
            {
                sum += number;
                term++;
            }
        }

        number += 2;
    }

    cout << sum << "  total" << endl;
}

