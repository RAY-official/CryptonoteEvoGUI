#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class SortedTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(SortedTransactionsModel)

public:
  SortedTransactionsModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~SortedTransactionsModel();

protected:
  bool lessThan(const QModelIndex& _left, const QModelIndex& _right) const override;
};

}
