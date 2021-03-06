intro-c-programming
===================

In 1992 I was working for the Computer and Information Sciences
department of the university of Pennsylvania. I was asked to teach the
summer session of CSE 110, the introduction to programming class for
non-CS majors.  This I did.  I did not like the course materials I was
given, so I assembled and taught a different course.

One noteworthy difference between this class and typical introduction
to C classes is in its treatment of pointers.  In most C clases
pointers are left until the end, as an advanced topic. This class
introduces them as early as possible.  This was an extremely
successful approach, which I strongly recommend.

The class met for 90 minutes per day, four days a week, for five weeks.

This repository contains:

  * `lec-notes`

    Each day I wrote up the notes from the previous day's lecture.
    There are no notes from lecture 1, as I didn't give this lecture.
    The lecture notes total about 115 pages.  The subdirectory
    `lec-notes/book` collects the lecture notes into book form,
    including a table of contents.  There is a `Makefile` there that
    will build the book.  I think the files in the `book` directory
    may have corrections that are not in the files in the parent
    directory, but I forget.

  * `quiz`

    Each class, I gave a five-minute written quiz on the material from
    the previous lecture.  For some of these I just asked the question
    orally, but the ones where there is a written quiz are in the
    `quiz` directory.

  * `hw` contains homework assignments and sample solutions.

  * `midterm` contains the midterm exam and solutions with
    explanations.  The midterm was much too difficult.

  * `final` contains the final exam and its solutions.

  * Somewhere along the way the students asked me to make up some
    practice problems for one of the exams.  These are in `practice`.

I plan to release this under a Creative Commons license shortly.

Makefiles, or instructions for building PDF output, or something like
that, will also appear here shortly.

WARNING
-------

The lecture notes contain errors!  I am aware of several, and there
are probably several more of which I am unaware.  Corrections are welcome.
