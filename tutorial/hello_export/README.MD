## module export

a module could be exported through `EXPORT_SYMBOL`, then another module ia able to import this module by using `extern`.

after `make`, the output of new file `Module.symvers` is:

```
0x7232037b      param_ex        /root/code/linux-kernel-learning/tutorial/hello_export/hello    EXPORT_SYMBOL
```

copy this file into folder `hello_import` to export external `param_ex` into `hello_import.c`.
