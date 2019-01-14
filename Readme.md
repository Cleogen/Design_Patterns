<article>
        <h1 class="title">Design Patterns</h1>
                
<p class="ebook_ignore">In software engineering, a
  <strong>design pattern</strong> is a general repeatable solution to a commonly occurring problem in software design. A design pattern isn’t a finished design that can be transformed directly into code. It is a description or template for how to solve a problem that can be used in many different situations.
</p>

<h3 class="ebook_ignore">Uses of Design Patterns</h3>

<p>Design patterns can speed up the development process by providing tested, proven development paradigms. Effective software design requires considering issues that may not become visible until later in the implementation. Reusing design patterns helps to prevent subtle issues that can cause major problems and improves code readability for coders and architects familiar with the patterns.</p>
<p>Often, people only understand how to apply certain software design techniques to certain problems. These techniques are difficult to apply to a broader range of problems. Design patterns provide general solutions, documented in a format that doesn’t require specifics tied to a particular problem.</p>
<p>In addition, patterns allow developers to communicate using well-known, well understood names for software interactions. Common design patterns can be improved over time, making them more robust than ad-hoc designs.</p>

<h3><a>Creational design patterns</a></h3>
<p>These design patterns are all about class instantiation. This pattern can be further divided into class-creation patterns and object-creational patterns. While class-creation patterns use inheritance effectively in the instantiation process, object-creation patterns use delegation effectively to get the job done.</p>

<ul>
  <li>
    <a title="Provides a way to encapsulate a group of individual factories that have a common theme.">Abstract Factory</a><br>
    Creates an instance of several families of classes
  </li>
  <li>
    <a title="Separate the construction of a complex object from its representation so that the same construction process can create different representations.">Builder</a><br>
    Separates object construction from its representation
  </li>
  <li>
    <a title="Defines a separate method for creating the objects, which subclasses can then override to specify the derived type of product that will be created.">Factory Method</a><br>
    Creates an instance of several derived classes
  </li>
  <li>
    <a title="Avoid expensive acquisition and release of resources by recycling objects that are no longer in use">Object Pool</a><br>
    Avoid expensive acquisition and release of resources by recycling objects that are no longer in use
  </li>
  <li><a title="Being cloned to produce new objects.">Prototype</a><br>
    A fully initialized instance to be copied or cloned
  </li>
  <li><a title="Restricts instantiation of a class to one object.">Singleton</a><br>
    A class of which only a single instance can exist
  </li>
</ul>


<h3><a >Structural design patterns</a></h3>
<p>These design patterns are all about Class and Object composition. Structural class-creation patterns use inheritance to compose interfaces. Structural object-patterns define ways to compose objects to obtain new functionality.</p>

<ul>
  <li>
    <a title="Adapts one interface for a class into one that a client expects.">Adapter</a><br>
    Match interfaces of different classes
  </li>
  <li>
    <a title="Decouples an abstraction from its implementation so that the two can vary independently.">Bridge</a><br>
    Separates an object’s interface from its implementation
  </li>
  <li>
    <a title="Designed as a composition of one-or-more similar objects, all exhibiting similar functionality.">Composite</a><br>
    A tree structure of simple and composite objects
  </li>
  <li>
    <a title="Allows new/additional behavior to be added to an existing method of an object dynamically.">Decorator</a><br>
    Add responsibilities to objects dynamically
  </li>
  <li>
    <a title="Provides a simplified interface to a larger body of code.">Facade</a><br>
    A single class that represents an entire subsystem
  </li>
  <li>
    <a title="When many objects must be manipulated and these cannot afford to have extraneous data, flyweight is appropriate.">Flyweight</a><br>
    A fine-grained instance used for efficient sharing
  </li>
  <li>

<a title="Restricts accessor/mutator access">Private Class Data</a><br>
Restricts accessor/mutator access
  </li>
  <li><a title="Class functioning as an interface to another thing.">Proxy</a><br>
    An object representing another object
  </li>
</ul>


<h3><a>Behavioral design patterns</a></h3>
<p>These design patterns are all about Class’s objects communication. Behavioral patterns are those patterns that are most specifically concerned with communication between objects.</p>
<div style="float:right; width:30%;" class="ebook_ignore"><a ><img width="200" style="background:#fff;" src="/files/v2/content/patterns/Interpreter-preview.png" srcset="/files/v2/content/patterns/Interpreter-preview-2x.png 2x" alt=""></a></div>
<ul>
  <li>
    <a title="Source of command objects and a series of processing objects.">Chain of responsibility</a><br>
    A way of passing a request between a chain of objects
  </li>
  <li><a title="Objects are used to represent actions.">Command</a><br>
    Encapsulate a command request as an object
  </li>
  <li>
    <a title="The basic idea is to implement a specialized computer language to rapidly solve a defined class of problems.">Interpreter</a><br>
    A way to include language elements in a program
  </li>
  <li>
    <a title="Used to access the elements of an aggregate object sequentially without exposing its underlying representation.">Iterator</a><br>
    Sequentially access the elements of a collection
  </li>
  <li>
    <a title="Provides a unified interface to a set of interfaces in a subsystem.">Mediator</a><br>
    Defines simplified communication between classes
  </li>
  <li>
    <a title="Provides the ability to restore an object to its previous state.">Memento</a><br>
    Capture and restore an object’s internal state
  </li>
  <li>
    <a title="Designed to act as a default value of an object.">Null Object</a><br>
    Designed to act as a default value of an object
  </li>
  <li><a title="Observes the state of an object in a program.">Observer</a><br>
    A way of notifying change to a number of classes
  </li>
  <li>

<a title="Represent the state of an object.">State</a><br>
Alter an object’s behavior when its state changes
  </li>
  <li><a title="Algorithms can be selected on-the-fly at runtime.">Strategy</a><br>
    Encapsulates an algorithm inside a class
  </li>
  <li>
    <a title="A template method defines the skeleton of an algorithm.">Template method</a><br>
    Defer the exact steps of an algorithm to a subclass
  </li>
  <li>
    <a title="A way of separating an algorithm from an object structure.">Visitor</a><br>
    Defines a new operation to a class without change
  </li>
</ul>

<h3 class="ebook_ignore">Criticism</h3>

<div class="ebook_ignore">
  <p>The concept of design patterns has been criticized by some in the field of computer science.</p>
  <h4>Targets the wrong problem</h4>

  <p>The need for patterns results from using computer languages or techniques with insufficient abstraction ability. Under ideal factoring, a concept should not be copied, but merely referenced. But if something is referenced instead of copied, then there is no “pattern” to label and catalog. Paul Graham writes in the essay
    <a >Revenge of the Nerds</a>.</p>

  <p>Peter Norvig provides a similar argument. He demonstrates that 16 out of the 23 patterns in the Design Patterns book (which is primarily focused on C++) are simplified or eliminated (via direct language support) in Lisp or Dylan.</p>

  <h4>Lacks formal foundations</h4>

  <p>The study of design patterns has been excessively ad hoc, and some have argued that the concept sorely needs to be put on a more formal footing. At
    <abbr data-original-title="" title="">OOPSLA 1999</abbr>, the Gang of Four were (with their full cooperation) subjected to a show trial, in which they were “charged” with numerous crimes against computer science. They were “convicted” by ⅔ of the “jurors” who attended the trial.
  </p>

  <h4>Leads to inefficient solutions</h4>

  <p>The idea of a design pattern is an attempt to standardize what are already accepted best practices. In principle this might appear to be beneficial, but in practice it often results in the unnecessary duplication of code. It is almost always a more efficient solution to use a well-factored implementation rather than a “just barely good enough” design pattern.</p>

  <h4>Does not differ significantly from other abstractions</h4>

  <p>Some authors allege that design patterns don’t differ significantly from other forms of abstraction, and that the use of new terminology (borrowed from the architecture community) to describe existing phenomena in the field of programming is unnecessary. The Model-View-Controller paradigm is touted as an example of a “pattern” which predates the concept of “design patterns” by several years. It is further argued by some that the primary contribution of the Design Patterns community (and the Gang of Four book) was the use of Alexander’s pattern language as a form of documentation; a practice which is often ignored in the literature.</p>
</div>
</article>