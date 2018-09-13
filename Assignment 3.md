Part 1

```
(M -> H)^(S -> C)
```
"If mathematics is easy then homework is done and if it is sunny then camping is fun." 

```
“Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
```
(S^H) -> (MvC)

Part 2
```
 (¬B → ¬A) → ((¬B → A) → B)
```

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B| (¬B -> ¬A) -> ((¬B -> A) -> B)
|---|---|--- |--- |---       |---      |---             |---
| T | T | F  | F  |T         |T        |T               |T
| T | F | F  | T  |F         |T        |F               |T
| F | T | T  | F  |T         |T        |T               |T
| F | F | T  | T  |T         |F        |T               |T

This is a tautology!

```
 ((A → B)∧(B → ¬A)) → A
```

| A | B | ¬A | A -> B | B -> ¬A | ((A -> B)^(B -> ¬A) | ((A -> B)^((B -> ¬A)) -> A
|---|---|--- |---     |---      |---                  |---             
| T | T | F  | T      | F       | F                   | T
| T | F | F  | F      | T       | F                   | T
| F | T | T  | T      | T       | T                   | F
| F | F | T  | T      | T       | T                   | F

This is neither a tautology nor is it a contradiction!

Part 3

```
(p ∧ q) → r , p → (q → r )
```
<pre>
(p ^ q) -> r  <=> p -> (q -> r)  
(p ^ q)' v r  <=> p' v (q' v r)  Implication x3  
(p' v q') v r <=> p' v (q' v r)  De Morgan's Law  
p' v (q' v r) <=> p' v (q' v r)  Associative
</pre>

```
(q ∨ r ) → p, (q → p)∧(r → p)
```
<pre>
(q v r) -> p      <=> (q -> p)^(r -> p)  
(q v r)' v p      <=> (q' v p)^(r' v p)  Implication x3  
(q' ^ r') v p     <=> (q' v p)^(r' v p)  De Morgan's Law  
(q' v p)^(r' v p) <=> (q' v p)^(r' v p)  Distributive
</pre>

Part 4

```
∃x∀y∀z(City(x)∧Traveler(y)∧Lives(z,x)) → (Loves(y,x)∧ ¬Loves(z,x))
```

"All travelers love the cities they visit while no residents love the cities they live in."

```
“No traveler loves the city they live in.”
```
∃x∀y(City(x)^Traveler(y)^Lives(y,x)) -> ¬Loves(y,x)

Part 5

```
Assuming: p → (q ∧ r ), s → r , r → p
Prove: s → q.
```


