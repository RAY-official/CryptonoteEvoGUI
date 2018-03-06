#include "PoolHeaderView.h"
#include "Models/MinerModel.h"

namespace WalletGui {

PoolHeaderView::PoolHeaderView(QWidget* _parent) : QHeaderView(Qt::Horizontal, _parent) {
}

PoolHeaderView::~PoolHeaderView() {
}

void PoolHeaderView::paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const{
  if (_logicalIndex != MinerModel::COLUMN_POOL_URL) {
    QHeaderView::paintSection(_painter, _rect, _logicalIndex);
    return;
  }

  QRect rect(_rect);
  rect.setLeft(_rect.left() + 13);
  QHeaderView::paintSection(_painter, rect, _logicalIndex);
}

}
