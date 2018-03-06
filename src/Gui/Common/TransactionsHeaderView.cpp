#include "TransactionsHeaderView.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

TransactionsHeaderView::TransactionsHeaderView(QWidget* _parent) : QHeaderView(Qt::Horizontal, _parent) {
}

TransactionsHeaderView::~TransactionsHeaderView() {
}

void TransactionsHeaderView::paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const{
  if (_logicalIndex != TransactionsModel::COLUMN_AMOUNT) {
    QHeaderView::paintSection(_painter, _rect, _logicalIndex);
    return;
  }

  QRect rect(_rect);
  rect.setRight(_rect.right() - 24);
  QHeaderView::paintSection(_painter, rect, _logicalIndex);
}

}
