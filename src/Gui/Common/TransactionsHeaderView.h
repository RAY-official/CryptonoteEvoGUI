#pragma once

#include <QHeaderView>

namespace WalletGui {

class TransactionsHeaderView : public QHeaderView {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsHeaderView)

public:
  explicit TransactionsHeaderView(QWidget* _parent);
  ~TransactionsHeaderView();

protected:
  void paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const override;
};

}
