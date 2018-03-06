#include <QSize>

#include "RecentTransactionsModel.h"
#include "Settings/Settings.h"
#include "Models/SortedTransactionsModel.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

RecentTransactionsModel::RecentTransactionsModel(QAbstractItemModel* _sourceModel, QObject* _parent) : WalletWindowedItemModel(-1, _parent) {
  setSourceModel(_sourceModel);
  connect(sourceModel(), &QAbstractItemModel::rowsInserted, this, &RecentTransactionsModel::invalidateFilter);
  connect(sourceModel(), &QAbstractItemModel::rowsRemoved, this, &RecentTransactionsModel::invalidateFilter);
}

RecentTransactionsModel::~RecentTransactionsModel() {
}

bool RecentTransactionsModel::filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const {
  return _sourceColumn == TransactionsModel::COLUMN_NEW_TRANSACTION || _sourceColumn == TransactionsModel::COLUMN_TIME ||
    _sourceColumn == TransactionsModel::COLUMN_AMOUNT || _sourceColumn == TransactionsModel::COLUMN_HASH;
}

}
