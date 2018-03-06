#pragma once

#include "MagicLabel.h"

namespace WalletGui {

class CopyMagicLabel : public MagicLabel {
  Q_OBJECT
  Q_DISABLE_COPY(CopyMagicLabel)

public:
  explicit CopyMagicLabel(QWidget* _parent);
  ~CopyMagicLabel();
};

}
