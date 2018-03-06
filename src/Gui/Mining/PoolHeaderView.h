#pragma once

#include <QHeaderView>

namespace WalletGui {

class PoolHeaderView : public QHeaderView {
  Q_OBJECT
  Q_DISABLE_COPY(PoolHeaderView)

public:
  explicit PoolHeaderView(QWidget* _parent);
  ~PoolHeaderView();

protected:
  void paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const override;
};

}
