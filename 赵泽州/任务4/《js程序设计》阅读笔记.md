
[toc]

# a
### ES和浏览器中的js有什么区别
一个完整的js实现由下列三个不同部分组成：
·核心（ECMAScript）
·文档对象模型（DOM）
·浏览器对象模型（BOM）
浏览器中的js只是ES可能实现的宿主环境之一。js是ES的一种实现，ES是js的规格。

### nodejs和ES6是什么
Node.js 是一个基于 Chrome V8 引擎的 JavaScript 运行环境。
ECMAScript 6.0是JavaScript语言的新一代标准。

# b
### Js 有几种数据类型
五种。Undefined、Null、Boolean、Number和String。

# c
###	Js 中如何创建函数
函数在主代码流中单独声明。

function sayHi() {
  alert( "Hello" );
}

赋值表达式 = 右侧创建

let sayHi = function() {
  alert( "Hello" );
};

# d	
### 项目引入 js,css 的几种方法
在html页面种插入js，就是使用<script>元素
有以下几个属性：
·async 可选，表示应该下载脚本，但不妨碍页面种其他操作
·charset 可选，表示通过src属性指定代码字符集
·defer 可选，表示脚本可以延迟到文档完全被解析和显示之后执行，只对外部脚本有效。
·language 已废弃
·src 可选，表示包含要执行代码的外部文件
·type 可选，可以看成language的替代属性；表示MIME类型。在非IE浏览器中还可以使用application/javascript和application/ecmascript
外链js，设置src即可（浏览器不会检查js扩展名）。
（heml文档中必须有闭合的</script>标签）

# e	
Js 是弱类型语言  在类型转换时可能会进行隐式类型转换
# number,string,array 转换成 boolean 类型时分别会转换成什么
除了以下六个值，其余转换成boolean类型时都为true
Boolean(undefined) // false
Boolean(null) // false
Boolean(0) // false
Boolean(NaN) // false
Boolean('') // false

