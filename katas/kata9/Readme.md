You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

Assume your users will watch exactly two movies
Don't make your users watch the same movie twice
Optimize for runtime over memory

BREAKDOWN
We know our two movie lengths need to sum to flight_length.
for a given first_movie_length, we need a second_movie_length that equals flight_length - first_movie_length.

We need to go through movie_lengths from beginning to end, treating each item as first_movie_length, and for each of those check if there's a second_movie_length equal to flight_length - first_movie_length.

For this we can nest two loops:
  - The outer choosing first_movie_length
  - The inner choosing second_movie_length

COMPLEXITY
O(n^2)O(n​2).

CAN WE DO IT BETTER?
We could sort the movie_lengths first—then we could use binary search to find second_movie_length in O(\lg{n})O(lgn) time instead of O(n)O(n) time. But sorting would cost O(nlg(n))O(nlg(n)).

- We could throw all of our movie_lengths into a set first, in O(n)O(n) time.
- Then we could loop through our possible first_movie_lengths
- Replace our inner loop with a simple check in our set.
This'll give us O(n)O(n) runtime overall!

SOLUTION
We make one pass through movie_lengths, treating each item as the first_movie_length. At each iteration, we:
  - See if there's a matching_second_movie_length we've seen already (stored in our movie_lengths_seen set) that is equal to flight_length - first_movie_length.
    If there is, we short-circuit and return True.
  - Keep our movie_lengths_seen set up to date by throwing in the current first_movie_length.

  def can_two_movies_fill_flight(movie_lengths, flight_length):

    // movie lengths we've seen so far
    movie_lengths_seen = set()
    for first_movie_length in movie_lengths:
      matching_second_movie_length = flight_length - first_movie_length
      if matching_second_movie_length in movie_lengths_seen:
        return True
      movie_lengths_seen.add(first_movie_length)

    // If we never found a match we return False
    return False

We know users won't watch the same movie twice because we check movie_lengths_seen for matching_second_movie_length before we've put first_movie_length in it.

NEW COMPLEXITY  
O(n)O(n) time
O(n)O(n) space
