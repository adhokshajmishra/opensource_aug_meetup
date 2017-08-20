#include <iostream>
#include <sstream>

int main()
{
    std::stringstream ss;
    ss << "Decimal " << 15 << " Hex " << std::hex << 15 << std::endl;
    std::cout << ss.str() << std::endl;
    return 0;
}
