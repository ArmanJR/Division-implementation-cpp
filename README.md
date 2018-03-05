# Division implementation cpp

<p>How to do division without "/" sign? in other words how our computer do the divion? here is a solution.</p>
In this C++ code I used geometric series to calculate a/(1-q)<br>
As you know, this is a geometric series:<br>
a , aq , aq^2 , aq^3 , ...<br>
And if |q|<1 limit of the sum of this series goes to a/(1-q) <br>
So assume that we want to use x/y. A geometric series should be created. As the formula above, we know a/1-q so y is 1-q but there is a problem. Waht if |q|>1 ?<br>
The solution is multiple dividing y by 10 until it fits to |q|<1 and then dividing x to keep the answer untouched. In other words for example 3/8 is exactly 0.3/0.8 (with a of 0.3) and 134/342.9 is 0.0134/0.3429 (with a of 0.0134)<br>
So far we have found our first element in geometric series and also found q. That's it! now we build the series and put a (big!) for loop to calculate the sum.<br>
Notice that it is NOT the most efficient obviously and for a better performance you should use Newton series.
