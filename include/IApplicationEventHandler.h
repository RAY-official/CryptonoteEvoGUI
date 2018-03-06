#pragma once

class QUrl;

namespace WalletGui {

class IApplicationEventHandlerObserver {
public:
  virtual ~IApplicationEventHandlerObserver() {}
  virtual void urlReceived(const QUrl& _url) = 0;
  virtual void screenLocked() = 0;
  virtual void screenUnlocked() = 0;
};

class IApplicationEventHandler {
public:
  virtual ~IApplicationEventHandler() {}

  virtual void init() = 0;
  virtual QUrl getLastReceivedUrl() = 0;
  virtual void sendUrl(const QUrl& _url) = 0;
  virtual void addObserver(IApplicationEventHandlerObserver* _observer) = 0;
  virtual void removeObserver(IApplicationEventHandlerObserver* _observer) = 0;
};

}
