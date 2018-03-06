#pragma once

#include "Gui/Common/GlassFrame.h"

class QLabel;

namespace WalletGui {

class OverviewHeaderGlassFrame : public GlassFrame {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewHeaderGlassFrame)

public:
  OverviewHeaderGlassFrame(QMovie* _syncMovie, QWidget* _parent);
  ~OverviewHeaderGlassFrame();

  virtual void install(QWidget* _parent);
  virtual void remove();

private:
  QLabel* m_syncLabel;
};

}
