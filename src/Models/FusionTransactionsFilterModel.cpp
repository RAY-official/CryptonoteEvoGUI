#include "FusionTransactionsFilterModel.h"
#include "Settings/Settings.h"
#include "IOptimizationManager.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

FusionTransactionsFilterModel::FusionTransactionsFilterModel(QAbstractItemModel* _sourceModel, IOptimizationManager* _optimizationManager, QObject* _parent) : QSortFilterProxyModel(_parent),
  m_optimizationManager(_optimizationManager) {
  setSourceModel(_sourceModel);
  setDynamicSortFilter(true);
  setFilterRole(TransactionsModel::ROLE_IS_FUSION_TRANSACTION);
}

FusionTransactionsFilterModel::~FusionTransactionsFilterModel() {
}

bool FusionTransactionsFilterModel::filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const {
  QModelIndex sourceIndex = sourceModel()->index(_sourceRow, 0);
  if (m_optimizationManager->isFusionTransactionsVisible()) {
    return true;
  }

  return !sourceIndex.data(TransactionsModel::ROLE_IS_FUSION_TRANSACTION).toBool();
}

}
