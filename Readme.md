<article>
        <h1>Design Patterns</h1>

<p>In software engineering, a
  <strong>design pattern</strong> is a general repeatable solution to a commonly occurring problem in software design. A design pattern isn’t a finished design that can be transformed directly into code. It is a description or template for how to solve a problem that can be used in many different situations.
</p>

<h3>Uses of Design Patterns</h3>

<p>Design patterns can speed up the development process by providing tested, proven development paradigms. Effective software design requires considering issues that may not become visible until later in the implementation. Reusing design patterns helps to prevent subtle issues that can cause major problems and improves code readability for coders and architects familiar with the patterns.</p>
<p>Often, people only understand how to apply certain software design techniques to certain problems. These techniques are difficult to apply to a broader range of problems. Design patterns provide general solutions, documented in a format that doesn’t require specifics tied to a particular problem.</p>
<p>In addition, patterns allow developers to communicate using well-known, well understood names for software interactions. Common design patterns can be improved over time, making them more robust than ad-hoc designs.</p>

><h2>Creational design patterns</h2>
>These design patterns are all about class instantiation. This pattern can be further divided into class-creation patterns and object-creational patterns. While class-creation patterns use inheritance effectively in the instantiation process, object-creation patterns use delegation effectively to get the job done.

><h2>Structural design patterns</h2>
>These design patterns are all about Class and Object composition. Structural class-creation patterns use inheritance to compose interfaces. Structural object-patterns define ways to compose objects to obtain new functionality.


><h2>Behavioral design patterns</h2>
>These design patterns are all about Class’s objects communication. Behavioral patterns are those patterns that are most specifically concerned with communication between objects.


<table>
  <tr>
    <th>Creational</th>
    <th>Structural</th>
    <th>Behavioral</th>
  </tr>
  <tr>
    <td>Abstract Factory</td>
    <td>Adapter</td>
    <td>Chain of responsibility</td>
  </tr>
  <tr>
    <td>Builder</td>
    <td>Bridge</td>
    <td>Command</td>
  </tr>
  <tr>
    <td>Factory Method</td>
    <td>Composite</td>
    <td>Interpreter</td>
  </tr>
  <tr>
    <td>Object Pool</td>
    <td>Decorator</td>
    <td>Iterator</td>
  </tr>
  <tr>
    <td>Prototype</td>
    <td>Facade</td>
    <td>Mediator</td>
  </tr>
  <tr>
    <td><a href="/Creational/Singleton">Singleton</a></td>
    <td>Flyweight</td>
    <td>Memento</td>
  </tr>
  <tr>
    <td></td>
    <td>Private Class Data</td>
    <td>Null Object</td>
  </tr>
  <tr>
    <td></td>
    <td>Proxy</td>
    <td>Observer</td>
  </tr>
  <tr>
    <td></td>
    <td></td>
    <td>State</td>
  </tr> 
<tr>
    <td></td>
    <td></td>
    <td><a href="/Behavioral/Strategy">Strategy</a></td>
  </tr> 
<tr>
    <td></td>
    <td></td>
    <td>Template method</td>
  </tr>
<tr>
    <td></td>
    <td></td>
    <td>Visitor</td>
  </tr>
</table>

<h3>Criticism</h3>

<div>
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
