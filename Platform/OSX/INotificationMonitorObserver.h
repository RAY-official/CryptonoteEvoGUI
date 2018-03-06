#pragma once

#include <QString>

namespace WalletGui {

class INotificationMonitorObserver {
public:
  virtual ~INotificationMonitorObserver() {}
  virtual void notify(const QString& _notification) = 0;
};

}
