# mpeg2
用于解析海康平台传输的PS流，将起转换成标准的rtp流

## 主要思路
首先利用jitterBuffer进行数据包的缓存，等有了完整的帧数据后，在将其解析为PS数据包，之后再去除PS头，并添加RTP头

暂时先不考虑音频帧，遇到音频帧直接丢弃

## 需考虑的问题
* 分片的情况

## 当前任务

判断当前是否为一个完整帧
调研方法
帧结尾的标识符：0x000001B9

之前一直写错了，我要缓存的是PS数据包，而不是rtp数据包
开始进行PS数据包的解析
* 首先判断包类型
* 若为包头，则进行相应的解析
* 若为普通的数据包，则进行
