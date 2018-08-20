#include "NumberTheory.h"
typedef long long LL;
namespace sm {
	LL gcd(LL a, LL b) {
		return b == 0 ? a : gcd(b, a%b);
	}


}


