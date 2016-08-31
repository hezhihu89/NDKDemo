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


##  JNI-NDK 快捷键
 ### Android Studio 设置-Tools- External Tools 添加
 
 ```java 
 
 javah    用于生成头文件
  Program：$JDKPath$/bin/javah
  注意：这个命令我加上了-encoding UTF-8 指定编码，你可以改成你工程的编码。
  Parameters：-encoding UTF-8 -d ../jni -jni $FileClass$
  Working directory：$SourcepathEntry$\..\java

  ndk-build    用于构建 so 包
  注意：MAC/Linux 用 ndk-build，没有.cmd 后缀
  Program：SKD path\Android\sdk\ndk-bundle\ndk-build.cmd
  Parameters：什么都不用填
  Working directory：$ModuleFileDir$\src\main

  ndk-build clean    清除 so 包
  注意：MAC/Linux 用 ndk-build，没有.cmd 后缀
  Program：SKD path\Android\sdk\ndk-bundle\ndk-build.cmd
  Parameters：clean
  Working directory：$ModuleFileDir$\src\main
  
  SDK-path === SDK 路径
 
 ```

### 在 gradle.properties 文件中添加
```java
在 gradle.properties 文件中添加
```

在 app build.gradle中
```java

android{
  // 添加-----------1
   sourceSets{
        main{
            jniLibs.srcDirs = ['src/main/libs']
        }
    }
// 添加-----------1
     defaultConfig {
        '''
        // 添加-----------2
       ndk{
                 moduleName   "NDKDemo-OS"
             }
        // 添加-----------2
         }
}




```



