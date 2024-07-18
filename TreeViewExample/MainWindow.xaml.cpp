#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::TreeViewExample::implementation
{
	MainWindow::MainWindow()
	{
		tree_item_view_model_ = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Root");

		TreeViewExample::TreeItemViewModel parent1 = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Parent1");
		TreeViewExample::TreeItemViewModel parent2 = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Parent2");
		TreeViewExample::TreeItemViewModel child11 = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Child11");
		TreeViewExample::TreeItemViewModel child12 = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Child12");
		TreeViewExample::TreeItemViewModel child21 = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Child21");
		TreeViewExample::TreeItemViewModel child22 = winrt::make<TreeViewExample::implementation::TreeItemViewModel>(L"Child22");

		parent1.Children().Append(child11);
		parent1.Children().Append(child12);
		parent2.Children().Append(child21);
		parent2.Children().Append(child22);

		tree_item_view_model_.Children().Append(parent1);
		tree_item_view_model_.Children().Append(parent2);

		InitializeComponent();
	}

	TreeViewExample::TreeItemViewModel MainWindow::RootTreeItem()
	{
		return tree_item_view_model_;
	}
}
