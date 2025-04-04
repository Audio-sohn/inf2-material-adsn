#include "greeting.h"

#include <sstream>

namespace inf2_examples {



std::string greeting(std::string const& name) {
  std::ostringstream out;



  out << "Hello " << name << "!" << std::endl;
  return out.str();
}

}  // namespace inf2_examples
