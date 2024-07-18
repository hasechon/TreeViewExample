#pragma once

#include "MainWindow.g.h"
#include "TreeItemViewModel.h"

namespace winrt::TreeViewExample::implementation
{
	struct MainWindow : MainWindowT<MainWindow>
	{
	public:
		MainWindow();
		TreeViewExample::TreeItemViewModel RootTreeItem();

	private:
		TreeViewExample::TreeItemViewModel tree_item_view_model_{ nullptr };
	};
}

namespace winrt::TreeViewExample::factory_implementation
{
	struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
	{
	};
}
