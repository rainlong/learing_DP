## 学习设计模式
### 设计模式六大原则
1. 单一职责原则（Single Responsibility Principle, SRP）

  + **一个类只负责一个功能领域中的相关职责**，或可定义为：**就一个类而言，应该只有一个引起它变化的原因**。
  
  + 用于控制**类的粒度**大小，是实现**“高内聚、低耦合”**的指导方针。

2. 开放-封闭原则 (Open-Closed Principle, OCP)

  + **一个软件应对扩展开放，对修改封闭**，即**软件实体应尽量在不修改原有代码的情况下进行扩展**。

  + 用于组织**独立的类**，**抽象化**是实现该原则的关键。

3. 里氏替换原则 (Liskov Substitution Principle, LSP)

  + **所有引用基类的地方必须能透明地使用其子类的对象**。

  + 在程序中尽量使用**基类类型定义对象**，在运行时再确定其子类类型，用**子类对象替换父类**。

  + 是实现**OCP**的重要方式之一。

4. 依赖倒置原则 (Dependency Inversion Principle, DIP)

  + **抽象不应该依赖于细节，细节应当依赖于抽象**，即：**要针对接口编程，而不是针对实现编程**。

  + 
  
5. 接口隔离原则 (Interface SegregationPrinciple, ISP)

  + **使用多个专门的接口，而不使用单一的总接口**，即**客户端不应该依赖那些不需要的接口**。

  + 

6. 迪米特法则 (Law of Demeter, LoD) —— 又称最少知识原则 (Least Knowledge Principle, LKP)

  + **一个软件实体应尽可能少地与其他实体发生相互作用**。

  + 可以降低系统的耦合度，使类与类之间保持松散的耦合关系。

### 具体DP
对各模式的测试代码位于example目录，其中又按模式功能分为三类：创建型模式CREATIONAL、结构型模式STRUCTURAL、行为型模式BEHAVIOURAL。其分布如下：
- 创建型
  - AbstractFactory - *抽象工厂*
  - Builder - *建造者模式*
  - FactoryMethod - *工厂方法*
  - Prototype - *原型模式*
  - Singleton - *单例模式 *
- 结构型
  - Adapter - *适配器模式*
  - Bridge - *桥接模式*
  - Composite - *组合模式*
  - Decorator - *装饰器模式*
  - Facade - *外观模式*
  - Flyweight - *享元模式*
  - Proxy - *代理模式*
- 行为型
  - ChainOfResponsibility - *职责链模式*
  - Command - *命令模式*
  - Interpreter - *解释器模式*
  - Iterator - *迭代器模式*
  - Mediator - *中介者模式*
  - Mementor - *备忘录模式*
  - Observer - *观察者模式*
  - State - *状态模式*
  - Strategy - *策略模式*
  - Template - *模板模式*
  - Visitor - *访问者模式*
