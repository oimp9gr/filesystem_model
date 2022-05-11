# File System Model

![image](https://user-images.githubusercontent.com/35418986/167731084-546d2a8e-9ec2-4719-bfbe-1c0a4535aa67.png)

1) Для того, чтобы два вью отображали информацию из одной и той же модели, только и нужно что вызвать метод setModel с одной и той же моделью 
для каждого из них [widget.cpp:13](https://github.com/oimp9gr/filesystemmodel/blob/6e5057ac040fc677edfcba4c677c0afe32fcc079/widget.cpp#L13)
2) Чтобы в listView в данном примере отображались файлы из директории, выбранной в treeView, нужно обработать клик мышкой по treeView. Это можно 
сделать нажав правой кнопкой мыши в дизайнере на treeView, затем `Go to slot...` и выбрать clicked
![image](https://user-images.githubusercontent.com/35418986/167731863-c4d28e66-0143-4a2d-bae5-7ffadac62404.png)
3) Метод Widget::on_treeView_clicked принимает QModelIndex (индекс его модели). Так как модель у обоих вью одна и та же, то мы можем задать этот индекс 
как корневой для listView, что и приведёт к отображению файлов и папок.
