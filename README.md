14.04 (LTS)
    make 3.8

Use package config in makefile?

http://releases.ubuntu.com/14.04/
https://libcheck.github.io/check/doc/check_html/check_3.html

http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

http://stackoverflow.com/questions/9716704/building-the-library-for-check-test-c-framework

http://stackoverflow.com/questions/14176180/is-there-a-more-basic-tutorial-for-the-c-unit-testing-framework-check/15046864#comment63521263_15046864

http://stackoverflow.com/questions/1662909/undefined-reference-to-pthread-create-in-linux

http://stackoverflow.com/questions/8671366/undefined-reference-to-pow-and-floor

http://stackoverflow.com/questions/259784/what-libraries-need-to-be-linked-for-timer-create-timer-settime-and-other-timer


@schmonz:
test_name needs to be added to a TCase with tcase_add_test
And then the TCase needs to be added to a Suite
And then your test main() needs to add the Suite to an SRunner, which you tell to run
I just stole code from the example money thing
