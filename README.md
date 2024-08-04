# TreeViewExample

クラス図
```mermaid
classDiagram
    MainWindow o-- "1" TreeItemViewModel : RootTreeItem
    TreeItemViewModel "1"o-- "*" TreeItemViewModel
```