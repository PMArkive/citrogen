#pragma once

#include "core/container.h"

namespace CB {

class Exefs : public ContainerHelper {
public:
  Exefs(FB::FilePtr primary, FB::FilePtr secondary);

private:
  FB::FilePtr primary, secondary;
};

} // namespace CB