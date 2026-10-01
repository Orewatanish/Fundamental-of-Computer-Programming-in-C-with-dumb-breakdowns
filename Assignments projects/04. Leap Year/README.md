# Leap-year-in-C-with-dumb-breakdowns
Just a college assignment, so these explanations might sound super basic, but this is how you lock down the fundamentals and build a solid foundation.

whats a Leap year?
a year with a extra y but out of no where. so acurately earth takes has 365.2422 days to complete 1 full orbit around sun 
normally in calenders we have 365 day to avoid a drift in calender after each 4 year we have 1 extra day to cancel the drift out
so in numbers if we check it this years are divisible by 4 but some expection in century years like 1900 so to cancel them out we go thorugh a 
flow to cancel it out so normally the flow is as follow 
[ Input Year ]
      │
      ▼
 Gate 1: Divisible by 400?  ───► (Yes) ──► is leap (Stop)
      │ (No)
      ▼
 Gate 2: Divisible by 100?  ───► (Yes) ──► is not leap (Stop)
      │ (No)
      ▼
 Gate 3: Divisible by 4?    ───► (Yes) ──► is leap (Stop)
      │ (No)
      ▼
[ Else Gate ]              ───► (All others) ──► isnt a leap year 

and thats the my dumbest way to put it out 
feel free to mail me if u still didnt understood it

the whole coding process is done in DEV C++ software as its compulsion for college assignment :) hope u learn a thing or two from the code