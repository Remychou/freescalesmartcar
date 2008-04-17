// debug.h

// 有关于调试和测试的宏选项

/******************************************************************************
    在实际运行和最终集成时, 调试和测试时所用的一些全局变量和函数应当不被编译,
以节省和有效的利用RAM空间和减小代码长度, 所以,有理由保证系统各层之间以及与测试
层之间的独立性,以使在打开和关闭 DEBUG选项时,不会出现问题.
******************************************************************************/

#define DEBUG ON
