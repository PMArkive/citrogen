#pragma once

#include "core/container.h"
#include "frontend/session.h"

class NcsdSession : public Session {
  Q_OBJECT
public:
  NcsdSession(std::shared_ptr<Session> parent_session, const QString &name,
              CB::ContainerPtr container_);

private:
  void onOpenPartition(std::size_t index);
  CB::ContainerPtr container;
};