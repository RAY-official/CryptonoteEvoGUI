#include <QDateTime>

#include "SortedTransactionsModel.h"
#include "TransactionsModel.h"

namespace WalletGui {

SortedTransactionsModel::SortedTransactionsModel(QAbstractItemModel* _sourceModel, QObject* _parent) : QSortFilterProxyModel(_parent) {
  setSourceModel(_sourceModel);
  setDynamicSortFilter(true);
  setSortRole(TransactionsModel::ROLE_RAW_TIME);
  sort(TransactionsModel::COLUMN_TIME, Qt::DescendingOrder);
}

SortedTransactionsModel::~SortedTransactionsModel() {
}

bool SortedTransactionsModel::lessThan(const QModelIndex& _left, const QModelIndex& _right) const {
  quint64 leftDate = _left.data(TransactionsModel::ROLE_RAW_TIME).value<quint64>();
  quint64 rightDate = _right.data(TransactionsModel::ROLE_RAW_TIME).value<quint64>();
  if (rightDate == 0 && leftDate == 0) {
    return _left.row() < _right.row();
  }

  if (leftDate == 0) {
    return false;
  }

  if (rightDate == 0) {
    return true;
  }

  return leftDate < rightDate;
}

}
