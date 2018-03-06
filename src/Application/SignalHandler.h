#pragma once

#include <QObject>

namespace WalletGui {

class SignalHandler : public QObject {
  Q_OBJECT
  Q_DISABLE_COPY(SignalHandler)

public:
  static SignalHandler& instance();

  void init();

private:
  SignalHandler();
  ~SignalHandler();

  static void sigHandler(int _signal);

Q_SIGNALS:
  void quitSignal();
};

}
