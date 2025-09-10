Prod endpoint: https://cs.hpware.me

Test env: use this Caddyfile, dev server on http://localhost:9280
```caddyfile
:9280 {
    root * {root_dir_of_the_html-si_folder_use_pwd_on_unix_systems}
    file_server browse
}
```
