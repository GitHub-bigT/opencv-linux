参考：

opencv build

http://blog.csdn.net/shawn_ht/article/details/40795039

gtk+2.0 pkg-config:

http://blog.sina.com.cn/s/blog_96b836170102wadb.html

http://blog.csdn.net/alec1987/article/details/9467981

安装qt

安装cmake-gui

安装GTK+ 2.x和pkg-config (在编译前)

sudo apt-get install build-essential cmake libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev 

cmake编译

make

make install

配置opencv环境变量：sudo gedit /etc/ld.so.conf.d/opencv.conf

在文件最后加上/usr/local/lib

执行sudo ldconfig

配置环境变量：sudo gedit /etc/bash.bashrc

PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/local/lib/pkgconfig export 

PKG_CONFIG_PATH

