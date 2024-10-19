# PHP Security

___

## PHP Injection

PHP Object Injection is an application level vulnerability that could allow an attacker to perform different kinds of malicious attacks, such as Code Injection, SQL Injection, Path Traversal and Application Denial of Service, depending on the context.

<u>__Note:__</u> ```)' DROP Table '";```, if we write it in the username section and submit the form, it can delete the entile database. So it is a big security threat.

```php
$username = mysqli_real_escape_string($connection, $username);
$password = mysqli_real_escape_string($connection, $password);
```

It will clear all the special symbols from the input field. So that noone can write the commands inside the input field.

### Password Encryption

```php
$hashFormat = "$2y$10$";
$salt = "iusesomecrazystrings22";
$hashF_and_salt = $hashFormat . $salt;
$password = crypt($password, $hashF_and_salt);
```

### What is ```crypt();``` in PHP

The crypt() function returns a hashed string using DES, Blowfish, or MD5 algorithms.

This function behaves different on different operating systems. PHP checks what algorithms are available and what algorithms to use when it is installed.

The salt parameter is optional. However, crypt() creates a weak password without the salt. Make sure to specify a strong enough salt for better security.

There are some constants that are used together with the crypt() function. The value of these constants are set by PHP when it is installed.

