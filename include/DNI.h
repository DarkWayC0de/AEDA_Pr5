//
// Created by darkwaycode on 23/04/19.
//

#ifndef PR5_DNI_H
#define PR5_DNI_H

#include <ostream>
class DNI {
 private:
  long long int DNI_;
 public:
  DNI();
  DNI(long long int dni);
  bool operator<(const DNI &rhs) const;
  bool operator>(const DNI &rhs) const;
  bool operator<=(const DNI &rhs) const;
  bool operator>=(const DNI &rhs) const;
  ~DNI();
  bool operator==(const DNI &rhs) const;
  bool operator!=(const DNI &rhs) const;
  friend std::ostream &operator<<(std::ostream &os, const DNI &dni);

};

#endif //PR5_DNI_H
