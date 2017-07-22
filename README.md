# OpenCV 3.2.0 + Ubuntu 16.04 + QT 5.9.1
## 参考博客：
opencv build：

1. http://blog.csdn.net/shawn_ht/article/details/40795039

gtk+2.0 pkg-config:
1. http://blog.sina.com.cn/s/blog_96b836170102wadb.html
2. http://blog.csdn.net/alec1987/article/details/9467981
## Step
1. 安装qt
2. 安装cmake-gui
3. 安装GTK+ 2.x和pkg-config (在编译前)

`sudo apt-get install build-essential cmake libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev `

4. cmake编译
5. make
6. make install
7. 配置opencv环境变量：

`sudo gedit /etc/ld.so.conf.d/opencv.conf`

  1. 在文件最后加上/usr/local/lib
  2. 执行sudo ldconfig
  
8. 配置环境变量：sudo gedit /etc/bash.bashrc
``````
PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/local/lib/pkgconfig export 
PKG_CONFIG_PATH
``````
