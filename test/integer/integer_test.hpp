#include "test.hpp"
#include "integer.hpp"

void gcd_test()
{
    eassert(gcd(1, 0) == 1, "gcd(1, 0) == %d", gcd(1, 0));
    eassert(gcd(0, 1) == 1, "gcd(0, 1) == %d", gcd(0, 1));
    eassert(gcd(2, 3) == 1, "gcd(2, 3) == %d", gcd(2, 3));
    eassert(gcd(12, 6) == 6, "gcd(12, 6) == %d", gcd(12, 6));
    eassert(gcd(24, 36) == 12, "gcd(24, 36) == %d", gcd(24, 36));
}

void lcm_test()
{
    eassert(lcm(1, 3) == 3, "lcm(1, 3) == %d", lcm(1, 3));
    eassert(lcm(2, 3) == 6, "lcm(2, 3) == %d", lcm(2, 3));
    eassert(lcm(3, 2) == 6, "lcm(3, 2) == %d", lcm(3, 2));
}

void modpow_test()
{
    eassert(modpow(2, 5, 3) == 2, "modpow(2, 5, 3) == %d", modpow(2, 5, 3));
    eassert(modpow(3, 4, 5) == 1, "modpow(3, 4, 5) == %d", modpow(3, 4, 5));
}

void is_prime_test()
{
    eassert(is_prime(2) == true, "is_prime(2) == %d", is_prime(2));
    eassert(is_prime(3) == true, "is_prime(3) == %d", is_prime(3));
    eassert(is_prime(4) == false, "is_prime(4) == %d", is_prime(4));
    eassert(is_prime(17) == true, "is_prime(17) == %d", is_prime(17));
    eassert(is_prime(23) == true, "is_prime(23) == %d", is_prime(23));
    eassert(is_prime(45) == false, "is_prime(45) == %d", is_prime(45));
}

void integer_test()
{
    gcd_test();
    lcm_test();
    modpow_test();
    is_prime_test();
}
