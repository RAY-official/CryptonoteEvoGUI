#pragma once

#include <QFrame>

namespace WalletGui {

class GlassFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(GlassFrame)

public:
  explicit GlassFrame(QWidget* _parent);
  virtual ~GlassFrame();

  virtual void install(QWidget* _parent);
  virtual void remove();

protected:
  bool eventFilter(QObject* _object, QEvent* _event) override;
};

}
