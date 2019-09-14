// Sales prediction
#include <iostream>

int main()
{
  const double PERCENT_INCREASE = 1.18;
  const int _2018_SALES = 2103419277;

  long sales_for_2019 = _2018_SALES * PERCENT_INCREASE;

  std::cout << "Last year's sales were $" << _2018_SALES << std::endl;
  std::cout << "This year's sales prediction: $ " << sales_for_2019 << std::endl;

  return 0;
}
