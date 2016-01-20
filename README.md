MRuby-GLib
==========

Bindings to GLib, providing standard library functionality like `File.open` & `Process.spawn`.

Built as an alternative to [mruby-apr](https://github.com/jbreeden/mruby-apr), with the same goals in mind.

Comparison to MRuby-APR
-----------------------

*+1 Glib*

In general `mruby-glib` has a fuller API than `mruby-apr`. Nearly everything in `mruby-apr` has been ported to
`mruby-glib` - with the exception of the various socket classes and `File::Stat`. In most cases the ported
versions support more standard library features (especially the `File` class). The IO model in `mruby-glib`
is cleaner, as is the source code in general. (`mruby-apr` was initially generated from an early version
of [mruby-bindings](https://github.com/jbreeden/mruby-bindings)... it was pretty ugly.)

*+1 APR*

That said, `mruby-apr` does not require linking to LGPL code, and it easier to distribute as a single
executable.

*+1, for both*

Both libraries will give you familiar file, directory, and environment access methods. Both can spawn processes.
Both are cross platform. Both have a quick CRuby compatible `Dir.glob` implementations. Both are free :)

MRuby-GLib API
==============

Digest::SHA1
------------

Class Methods:
  - `::hexdigest`

Digest::SHA256
--------------

Class Methods:
  - `::hexdigest`

Digest::SHA512
--------------

Class Methods:
  - `::hexdigest`

Digest::MD5
-----------

Class Methods:
  - `::hexdigest`

Dir
---

Class Methods:
  - `::[]`
  - `::chdir`
  - `::delete`
  - `::entries`
  - `::exist?`
  - `::exists?`
  - `::foreach`
  - `::getcwd`
  - `::glob`
  - `::home`
  - `::mkdir`
  - `::mktmpdir`
  - `::pwd`
  - `::rmdir`
  - `::tmpdir`
  - `::unlink`

ENV
---

Class Methods:
  - `::[]`
  - `::[]=`
  - `::delete`
  - `::each`
  - `::keys`

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
  - `#eof`
  - `#eof?`
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
  - `#iostream`
  - `#istream`
  - `#ostream`
  - `#print`
  - `#puts`
  - `#read`
  - `#seek`
  - `#tell`
  - `#truncate`
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

Open3
-----

Class Methods:
  - `::popen2`
  - `::popen2e`
  - `::popen3`

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
