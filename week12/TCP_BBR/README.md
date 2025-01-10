# README for TCP_BBR Presentation

## Presentation Slides

[Slides](Presentation.pdf)

## 参考资料

### 制作Presentation时的参考资料

- [Cardwell N, Cheng Y, Gunn C S, et al. BBR: Congestion-Based Congestion Control[J]. 2016.](https://dl.acm.org/doi/10.1145/3012426.3022184)
- [BBR: Congestion-Based Congestion Control](https://queue.acm.org/detail.cfm?id=3022184)
- [TCP BBR on GCP](https://cloud.google.com/blog/products/networking/tcp-bbr-congestion-control-comes-to-gcp-your-internet-just-got-faster)
- [BBR Fundamentals and Updates (2023)](ref/BBR-Fundamentals_and_Updates2023-08-29.pdf)
- [Optimizing TCP for high WAN throughput while preserving low latency](https://blog.cloudflare.com/optimizing-tcp-for-high-throughput-and-low-latency/)

### 帮助我们理解TCP BBR的Core Ideas的参考资料

（除了上述内容，以下内容是我们组员在学习TCP BBR时的参考资料）

- [BBR TCP](https://wiki.geant.org/pages/releaseview.action?pageId=121340614)
- [浅谈TCP/IP传输层TCP BBR算法](https://www.51cto.com/article/614189.html)
- [从TCP Reno经BIC到Cubic](https://zhuanlan.zhihu.com/p/760480117?utm_campaign=)
- [TCP Congestion Control](https://en.wikipedia.org/wiki/TCP_congestion_control)
- [TCP BBR v2.0](https://megaredfan.github.io/2020/01/05/TCP-BBRv2.html)

## 小组分工

- 陈诺：搜集准备材料，完成TCP协议讲解以及传统拥堵控制算法部分PPT以及BBR之前的讲解
- 王翰宁：写Python模拟TCP协议。提供参考资料链接，完成BBRv1算法讲解部分PPT，以及其对应的讲解工作；
- 谢承熙：写Python模拟TCP协议，搜集资料，完成BBR后续的发展以及展望部分PPT，以及其对应的讲解工作。

## 模拟TCP BBR代码的仓库

这部分中，我们有两部分代码。谢承熙写的是一个“实时”的模拟代码（使用async，有实际的Server和Client概念），王翰宁写的是一个“离线”的模拟代码（实现了TCP的Packet，丢包由随机数决定，延迟则是预设的延迟）。

代码仓库： [TCP-Congestion-Control-Pre](https://github.com/ChengxiX/TCP-Congestion-Control-Pre)

## 小组提问记录

张博炬：展示的模拟是如何实现的？

Alei老师：
- 为什么TCP要求包按序到达？
- TCP BBR像比传统的拥堵控制为什么能降低延迟？
- 如何判定丢包？