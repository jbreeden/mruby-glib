mruby-glib
==========

Bindings to GLib. Generated with [mruby-bindings](https://github.com/jbreeden/mruby-bindings)

This gem is being built as an alternative to [mruby-apr](https://github.com/jbreeden/mruby-apr),
with the same goals in mind. While mruby-apr works well, there are certain characteristics
of the APR library that can be irritating. Mainly, the fact that all memory must be managed
in pools. I was able to work around this in most cases, but certain issues could not be avoided.
For example, every open file creates it's own pool, which is an 8K memory hit.

Besides the memory pool issue, GLib seems to have a fuller API that maps more directly
to implementing Ruby standard library features. That makes my job easier.

You may want to use mruby-apr if the LGPL license is not suitable, or if you
wish to deploy to Windows as a single executable. Glib requires distributing,
for example, separate executables to assist in spawning processes in a more
unix-like way (with greater control over file descriptors, etc). If you're not
using the spawn family of functions, that shouldn't be a concern for you.

API
===

This is a work in progress, but the currently supported API is listed below.

MRuby-GLib
==========

Dir
---

Class Methods:
  - `::chdir`
  - `::delete`
  - `::entries`
  - `::exist?`
  - `::exists?`
  - `::foreach`
  - `::getcwd`
  - `::home`
  - `::mkdir`
  - `::mktmpdir`
  - `::pwd`
  - `::rmdir`
  - `::tmpdir`
  - `::unlink`


File
----

Ancestors: `IO`

Class Methods:
  - `::absolute_path`
  - `::basename`
  - `::delete`
  - `::dirname`
  - `::expand_path`
  - `::extname`
  - `::join`
  - `::open`
  - `::read`

Instance Methods:
  - `#initialize`

FileTest
--------

Class Methods:
  - `::directory?`
  - `::executable?`
  - `::exist?`
  - `::exists?`
  - `::file?`
  - `::owned?`
  - `::readable?`
  - `::size`
  - `::size?`
  - `::symlink?`
  - `::writable?`
  - `::zero?`

Instance Methods:
  - `#directory?`
  - `#executable?`
  - `#exist?`
  - `#exists?`
  - `#file?`
  - `#owned?`
  - `#readable?`
  - `#size`
  - `#size?`
  - `#symlink?`
  - `#writable?`
  - `#zero?`

Forwardable
-----------

Class Methods:
  - `::debug`
  - `::debug=`

Instance Methods:
  - `#def_delegator`
  - `#def_delegators`
  - `#def_instance_delegator`
  - `#def_instance_delegators`
  - `#delegate`
  - `#instance_delegate`

IO
--

Instance Methods:
  - `#<<`
  - `#assert_can_read`
  - `#assert_can_write`
  - `#close`
  - `#closed?`
  - `#each`
  - `#each_byte`
  - `#each_char`
  - `#each_line`
  - `#eof`
  - `#eof?`
  - `#flush`
  - `#getbyte`
  - `#getc`
  - `#gets`
  - `#initialize`
  - `#print`
  - `#puts`
  - `#read`
  - `#seek`
  - `#tell`
  - `#write`

Observable
----------

Instance Methods:
  - `#add_observer`
  - `#changed`
  - `#changed?`
  - `#count_observers`
  - `#delete_observer`
  - `#delete_observers`
  - `#notify_observers`

OpenStruct
----------

Instance Methods:
  - `#==`
  - `#[]`
  - `#[]=`
  - `#delete_field`
  - `#each_pair`
  - `#eql?`
  - `#hash`
  - `#initialize`
  - `#initialize_copy`
  - `#inspect`
  - `#marshal_dump`
  - `#marshal_load`
  - `#method_missing`
  - `#modifiable`
  - `#new_ostruct_member`
  - `#table`
  - `#to_h`
  - `#to_s`

Shellwords
----------

Class Methods:
  - `::escape`
  - `::join`
  - `::shellescape`
  - `::shelljoin`
  - `::shellsplit`
  - `::shellwords`
  - `::split`

Instance Methods:
  - `#shellescape`
  - `#shelljoin`
  - `#shellsplit`
  - `#shellwords`

Process
-------

Class Methods:
  - `::spawn`
  - `::wait`
  - `::waitpid`


Process::Status
---------------

Instance Methods:
  - `#coredump?`
  - `#exited?`
  - `#exitstatus`
  - `#initialize`
  - `#pid`
  - `#signaled?`
  - `#success?`
  - `#termsig`
