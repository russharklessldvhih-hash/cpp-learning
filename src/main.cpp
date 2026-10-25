#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    const std::string name = "wsss";
    std::cout << "姓名: " << name << '\n';

    const auto now = std::chrono::system_clock::now();
    const std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm tm_buf{};
    localtime_r(&t, &tm_buf);
    std::cout << "当前时间: "
              << std::put_time(&tm_buf, "%Y-%m-%d %H:%M:%S") << '\n';

    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "1+2+...+100 = " << sum << '\n';

    return 0;
}