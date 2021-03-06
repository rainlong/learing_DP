## 学习设计模式
___
### 具体DP
对各模式的测试代码位于example目录，其中又按模式功能分为三类：创建型模式CREATIONAL、结构型模式STRUCTURAL、行为型模式BEHAVIOURAL。其分布如下：
- [创建型](./example/CREATIONAL/创建型对比.md "")
  - AbstractFactory - [*抽象工厂*](./example/CREATIONAL/AbstractFactory/抽象工厂.md "查看抽象工厂的说明")
  - Builder - [*建造者模式*](./example/CREATIONAL/Builder/建造者.md " 查看建造者模式的说明")
  - FactoryMethod - [*工厂方法*](./example/CREATIONAL/FactoryMethod/工厂方法.md "查看工厂方法模式的说明")
  - Prototype - [*原型模式*](./example/CREATIONAL/Prototype/原型.md "查看原型模式的说明")
  - Singleton - [*单例模式*](./example/CREATIONAL/Singleton/单例.md "查看单例模式的说明")
- [结构型](./example/STRUCTURAL/结构型对比.md "")
  - Adapter - [*适配器模式*](./example/STRUCTURAL/Adapter/适配器.md "查看适配器模式的说明")
  - Bridge - [*桥接模式*](./example/STRUCTURAL/Bridge/桥接.md "查看桥接模式的说明")
  - Composite - [*组合模式*](./example/STRUCTURAL/Composite/组合.md "查看组合模式的说明")
  - Decorator - [*装饰器模式*](./example/STRUCTURAL/Decorator/装饰器.md "查看装饰器模式的说明")
  - Facade - [*外观模式*](./example/STRUCTURAL/Facade/外观.md "查看外观模式的说明")
  - Flyweight - [*享元模式*](./example/STRUCTURAL/Flyweight/享元.md "查看享元模式的说明")
  - Proxy - [*代理模式*](./example/STRUCTURAL/Proxy/代理.md "查看代理模式的说明")
- [行为型](./example/BEHAVIOURAL/行为型对比.md "")
  - ChainOfResponsibility - [*职责链模式*](./example/BEHAVIOURAL/ChainOfResponsibility/职责链.md "查看职责链模式的说明")
  - Command - [*命令模式*](./example/BEHAVIOURAL/Command/命令.md "查看命令模式的说明")
  - Interpreter - [*解释器模式*](./example/BEHAVIOURAL/Interpreter/解释器.md "查看解释器模式的说明")
  - Iterator - [*迭代器模式*](./example/BEHAVIOURAL/Iterator/迭代器.md "查看迭代器模式的说明")
  - Mediator - [*中介者模式*](./example/BEHAVIOURAL/Mediator/中介者.md "查看中介者模式的说明")
  - Mementor - [*备忘录模式*](./example/BEHAVIOURAL/Memento/备忘录.md "查看备忘录模式的说明")
  - Observer - [*观察者模式*](./example/BEHAVIOURAL/Observer/观察者.md "查看观察者模式的说明")
  - State - [*状态模式*](./example/BEHAVIOURAL/State/状态.md "查看状态模式的说明")
  - Strategy - [*策略模式*](./example/BEHAVIOURAL/Strategy/策略.md "查看策略模式的说明")
  - Template - [*模板模式*](./example/BEHAVIOURAL/Template/模板.md "查看模板模式的说明")
  - Visitor - [*访问者模式*](./example/BEHAVIOURAL/Visitor/访问者.md "查看访问者模式的说明")
  
___
### 设计模式的目标
面向对象的精神是更好地应对需求的变化。面向对象技术的最新进展是设计模式。设计模式的目标可以概括为：可维护、可拓展、可复用、灵活性好。

___
### 设计模式七大原则
##### 1. 单一职责原则（Single Responsibility Principle, SRP）

  + *一个类只负责一个功能领域中的相关职责*，或可定义为：*就一个类而言，应该只有一个引起它变化的原因*。
  
  + 用于控制**类的粒度**大小，是实现“高内聚、低耦合”的指导方针。

##### 2. 开放-封闭原则 (Open-Closed Principle, OCP)

  + *一个软件应对扩展开放，对修改封闭*，即软件实体应尽量*在不修改原有代码的情况下进行扩展*。

  + 用于组织**独立的类**，**抽象化**是实现该原则的关键，是重构和系统设计时的**目标**。

##### 3. 里氏替换原则 (Liskov Substitution Principle, LSP)

  + *所有引用基类的地方必须能透明地使用其子类的对象*。

  + 在程序中尽量使用**基类类型定义对象**，在运行时再确定其子类类型，用**子类对象替换父类**。

  + 是实现**OCP的基础**。

##### 4. 依赖倒置原则 (Dependency Inversion Principle, DIP)

  + *抽象不应该依赖于细节，细节应当依赖于抽象*，即：*要针对接口编程，而不是针对实现编程*。

  + **OCP主要实现机制**之一，系统**抽象化的具体实现**。

  + 在程序代码中*传递参数*时或在*关联关系*中，尽量**引用层次高的抽象层类**，即：使用接口和抽象类进行*变量类型声明*、*参数类型声明*、*方法返回类型声明*，以及*数据类型的转换*等，而不要用具体类来做这些事情。即：一个具体类应当**只实现接口或抽象类中声明过的方法**，而不要给出多余的方法，否则将无法调用到在子类中增加的新方法。

  + 针对抽象层编程,将具体类的对象通过**依赖注入(Dependency Injection, DI)**的方式注入到其他对象中。

  + *依赖注入*是指当一个对象要与其他对象发生依赖关系时，**通过抽象**来注入所依赖的对象。常用的注入方式有三种，分别是：构造注入，设值注入和接口注入。*构造注入*是指通过构造函数来传入具体类的对象；*设值注入*是指通过Setter方法来传入具体类的对象；而接口注入是指通过在*接口中声明*的业务方法来传入具体类的对象。这些方法在**定义时**使用的是**抽象**类型，在**运行时**再传入**具体类型**的对象，由**子类对象来覆盖父类对象**。
  
##### 5. 接口隔离原则 (Interface SegregationPrinciple, ISP)

  + *使用多个专门的接口，而不使用单一的总接口*，即*客户端不应该依赖那些不需要的接口*。

  + **接口**有两种定义：
    1. 指一个类型所具有的方法特征的集合，仅仅是一种逻辑上的抽象。

       可以把接口理解成角色，一个接口只能代表一个角色，每个角色都有它特定的一个接口

    2. 指某种语言具体的(狭义的)“接口”定义，有严格的定义和结构。

       接口仅仅提供客户端需要的行为，客户端不需要的行为则隐藏起来，应当为客户端提供尽可能小的单独的接口，而不要提供大的总接口。这里有可以表述为：**“定制服务”机制**，即为**不同的客户端提供宽窄不同的接口**.
       
  + 注意**控制接口的粒度**.接口不能太小，如果太小会导致系统中*接口泛滥*，不利于维护；接口也不能太大，太大的接口将违背接口隔离原则，*灵活性较差*，使用起来很不方便。

##### 6. 迪米特法则 (Law of Demeter, LoD) —— 又称最少知识原则 (Least Knowledge Principle, LKP)

  + *一个软件实体应尽可能少地与其他实体发生相互作用*。

  + 可以降低系统的耦合度，使类与类之间**保持松散的耦合关系**。

  + 如果其中的一个对象需要调用另一个对象的某一个方法的话，可以通过第三者转发这个调用。简言之，就是通过引入一个合理的第三者来降低现有对象之间的耦合度。

  + <sup>[1]</sup>在类的*划分*上，应当尽量**创建松耦合**的类，类之间的耦合度越低，就越有利于复用，一个处在松耦合中的类一旦被修改，不会对关联的类造成太大波及；<sup>[2]</sup>在类的*结构设计*上，每一个类都应当尽量**降低其成员变量和成员函数的访问权限**；<sup>[3]</sup>在*类的设计*上，只要有可能，一个类型应当设计成**不变类**；<sup>[4]</sup>在*对其他类的引用*上，一个对象对其他对象的**引用应当降到最低**。
##### 7. 合成聚合复用原则
