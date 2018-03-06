#pragma once

#include <QObject>

namespace WalletGui {

class IOptionsPage {

public:
  virtual void load() = 0;
  virtual void save() = 0;
  virtual void setData(const QVariantMap& _data) = 0;
  virtual bool isEnabled() const = 0;
  virtual bool needToRestartApplication() const = 0;
  virtual bool canAccept() const = 0;

Q_SIGNALS:
  virtual void showRestartWarningSignal(bool _show) = 0;
  virtual void disableAcceptButtonSignal(bool _disable) = 0;
};

}

Q_DECLARE_INTERFACE(WalletGui::IOptionsPage, "WalletGui::IOptionsPage")
