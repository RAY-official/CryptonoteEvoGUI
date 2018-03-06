#pragma once

#include <QTableView>

namespace WalletGui {

class LinkLikeColumnDelegate;

class WalletTableView : public QTableView {
  Q_OBJECT
  Q_DISABLE_COPY(WalletTableView)

public:
  explicit WalletTableView(QWidget* _parent);
  virtual ~WalletTableView();

  void setLinkLikeColumnSet(const QSet<int>& _linkLikeColumnSet);
  void setCopyableColumnSet(const QSet<int>& _copyableColumnSet);
  void setHoverIsVisible(bool _hoverIsVisible);
  void updateRowCount();
  void setAutoUpdateRowCount(bool _autoUpdateRowCount);

  virtual void setModel(QAbstractItemModel* _model) override;

protected:
  virtual void mouseMoveEvent(QMouseEvent* _event) override;
  virtual void paintEvent(QPaintEvent* _event) override;
  virtual void resizeEvent(QResizeEvent* _event) override;

private:
  QSet<int> m_linkLikeColumnSet;
  QSet<int> m_copyableColumnSet;
  LinkLikeColumnDelegate* m_linkLikeColumnDelegate;
  bool m_autoUpdateRowCount;

  void itemClicked(const QModelIndex& _index);
  int calculateVisibleRowCount() const;

Q_SIGNALS:
  void copyableItemClickedSignal(const QModelIndex& _index);
};

}
