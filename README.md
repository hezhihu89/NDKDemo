# NDKDemo
使用 JNI 以及 CMake 编译SO 库的方法


# Android Studio CMake 编译NDK
---
## Android Studio 创建一个新项目  创建的时候勾选 include C++ Support  



### 直接使用Android Studio 下载 更新 NDK环境


### 在Android 项目中 main/ 下面会生成一个 native-lib.cpp 文件

## 添加方法 :  
---
###  咋引用了so库文件的地方，创建一个Native 方法

```java
    public native String getText();
     
     
```

### 用Android studio 自带的方式创建一个方法


# 添加 .so 库文件

#### 编辑 CMakeList.txt 文件 拷贝  add_library() 里面的代码 到 另外一行

```C++
add_library( # Sets the name of the library.
             NDKDemo-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             # Associated headers in the same location as their source
             # file are automatically included.
             src/main/cpp/NDKDemo-lib.cpp )

```


#### 直接编译运行。。。。。

#### 正在研究 怎么导出.SO 文件  之后再补上
