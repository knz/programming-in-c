=========================================
 Assignment 5: Heaps and priority queues
=========================================

:Date: xxx
:Deadline: xxx

Objectives
==========

You must implement a heap and priority queue API and use them
to write a waiting queue manager.

Requirements
============

You will construct a program ``queue`` that demonstrates your heap and
priority queue API.  The required behavior of the program is given in
the following section.

You must submit your work as a tarball [#]_. Next to the source code,
your archive must contain a text file file named “``AUTHORS``”
containing your name and Student ID(s).

.. [#] http://lmgtfy.com/?q=how+to+make+a+tarball

Waiting queue
=============

Your program will manage queuing at a Doctor's office which does not
take appointments. The situation at this office is as follows:

- patients arrive at the front door in random order and enter the
  waiting area;
- every session, the doctor picks the first patient in alphabetic
  order;
- at the end of every day, all remaining patients go back home.

To translate this into a program, you will work with the following:

- the program receives the incoming patients on its standard input.
  Each patient is given as a line of input text containing the patient's
  name followed by his/her age, separated by spaces.
- the program will work by running a perpetual loop, performing the following steps:

  1. accept all the patients "waiting at the door": read all the input lines
     available so far on the standard input;

  2. place the patients in a priority queue ordered by name;

  3. pick the first patient in alphabetic order using
     the priority queue;

  4. wait one second;

  5. make the patient leave: print the patient's name on the standard
     output and remove the patient from the queue.

- "every day" (every 10 seconds), before step 1, "all patients leave":
  print the names of all patients already in the queues and empty the
  queues.

(The durations in this assignment are accelerated to ease your testing.)

Getting started
===============

1. Unpack the provided source code archive; then run ``make``.

2. Try out the generated ``queue`` program and familiarize yourself
   with its interface.

3. Read the files ``prioq.h`` and understand the interface.

4. Implement the data structure in ``heap.c``.

5. Implement the missing code in ``queue``.

Grading
=======

Your grade starts from 0, and the following tests determine your grade:

- +0,5pt if you have submitted an archive in the right format with an ``AUTHORS`` file.
- +0,5pt if your source code builds without errors and you have modified ``heap.c`` in any way.
- +2pt if your priority queue API processes insertions and removal properly.
- +3pt if your ``queue`` program orders the patients properly.
- +1pt if your ``queue`` program properly forces every patient to leave every 10s.
- -0,5pt if your ``queue`` program misbehaves if no patient arrived since the last patient left.
- -1pt if ``valgrind`` reports errors while running your program.
- -1pt if ``clang -W -Wall`` reports warnings when compiling your code.

The following extra features will be tested to obtain higher grades,
but only if you have obtained a minimum of 5 points on the list above already:

- +1.5pt if your ``queue`` program accepts a single command-line
  argument ``-y`` which causes, when specified, to change all the
  patient processing based on age to pick the youngest patient instead
  of the oldest patient.
- +1.5pt if your ``queue`` program also accepts the desired duration of
  the patient's appointment on the input (after the age), and keeps
  the doctor busy for that duration when that patient is picked.
