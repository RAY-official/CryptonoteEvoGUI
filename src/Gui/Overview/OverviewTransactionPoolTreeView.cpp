#include <QMouseEvent>

#include "OverviewTransactionPoolTreeView.h"
#include "Models/TransactionPoolModel.h"

namespace WalletGui {

OverviewTransactionPoolTreeView::OverviewTransactionPoolTreeView(QWidget* _parent) : QTreeView(_parent) {
  setMouseTracking(true);
  connect(this, &OverviewTransactionPoolTreeView::clicked, this, &OverviewTransactionPoolTreeView::itemClicked);
}

OverviewTransactionPoolTreeView::~OverviewTransactionPoolTreeView() {
}

void OverviewTransactionPoolTreeView::mouseMoveEvent(QMouseEvent* _event) {
  QPoint pos = _event->pos();
  QModelIndex index = indexAt(pos);
  if (index.isValid() && index.data(TransactionPoolModel::ROLE_COLUMN).toInt() == TransactionPoolModel::COLUMN_HASH) {
    setCursor(Qt::PointingHandCursor);
  } else {
    setCursor(Qt::ArrowCursor);
  }

  QTreeView::mouseMoveEvent(_event);
}

void OverviewTransactionPoolTreeView::itemClicked(const QModelIndex& _index) {
  if (_index.isValid() && _index.data(TransactionPoolModel::ROLE_COLUMN).toInt() == TransactionPoolModel::COLUMN_HASH) {
    Q_EMIT doubleClicked(_index);
  }
}

}
