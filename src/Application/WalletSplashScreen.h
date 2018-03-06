#pragma once

#include <QSplashScreen>

namespace WalletGui {

class WalletSplashScreen : public QSplashScreen {
  Q_OBJECT
  Q_DISABLE_COPY(WalletSplashScreen)

public:
  explicit WalletSplashScreen(QWidget* _parent);
  ~WalletSplashScreen();

protected:
  virtual void mousePressEvent(QMouseEvent* _event) Q_DECL_OVERRIDE;
};

}
