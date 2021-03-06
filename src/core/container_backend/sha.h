#pragma once

#include "core/container_backend/container.h"

namespace CB {

class Sha : public ContainerHelper {
public:
  Sha(FB::FilePtr data, FB::FilePtr hash);
  std::any Value() override;

private:
  FB::FilePtr data;
  FB::FilePtr hash;
};

} // namespace CB