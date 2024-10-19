# The First Steps

## <u>Introduction</u>

- Stay Motivated

## <u>Course Overview</u>

1. The First Steps
2. Data Types and More
3. Control Structures
4. Custom Functions
5. PHP Built-in Functions
6. How To Use Form Data in PHP
7. How To Use Databases in PHP
8. PHP Security
9. PHP and The Web
10. Object Oriented PHP Introduction
11. Working with files
12. CMS Project / Blogging System - Front End and First Steps
13. CMS - Categories & More...
14. CMS - POSTS
15. CMS - COMMENTS
16. CMS - USERS
17. CMS - Login
18. CMS - Profile
19. CMS - Dashboard
20. Improving Our CMS
21. CMS -Extra Features
22. CMS -Extra Features - User Registration
23. CMS-Extra Features - Author Related Posts
24. Pagination
25. CMS - Extra Features - Users ONLINE
26. CMS- Extra Feature - NEW Simple Password Encrypting and Login System
27. CMS - Extra Feature - Improved Comment system count and diplay
28. CMS - Extra Feature - Post for Specific User in admin
29. CMS - More Security
30. Taking the Project to the Internet.
31. Sending Emails
32. Bootstrap Modal Delete Confirm Feature
33. No posts or category message feature
34. Some miscellaneous features
35. Having fun with bugs
36. Refactoring part 1
37. New registration system
38. CMS Extra feature - Pretty URL's
39. CMS Extra Feature - Forgot Password System
40. CMS Extra Feature - Forgot Password System - Sending Email
41. CMS Extra Feature - POST LIKES
42. CMS Extra Feature - Creating A Separate Admin for Logged In Users
43. CMS Extra Feature - Multi-Language Feature

## Local  Development Environemnt Tools

### <u>XAMPP</u>

**XAMPP** is an open-source software package that provides a local web server environment. It stands for:

- **X** - Cross-platform (available for multiple operating systems)
- **A** - Apache (web server software)
- **M** - MySQL (database management system)
- **P** - PHP (server-side scripting language)

<u>__Note__:</u><span style="color: #982ef3"> Every php program will be made in htdocs folder inside at C:/Xampp/htdocs</span>

### Opening and closing tags for php

- Recommended

```php
<?php
// Your PHP code here
?>
```

- Not Recommended (As they doesn't work well in all browsers)

```php
<?
// Your PHP code here
?>
```

```php
<?=
// Your PHP code here
?>
```

```php
<%
// Your PHP code here
%>
```

___

### Hello World Program in PHP

```php
<?php
echo "Hello, World!";
?>
```

### Add Dynamic Text Inside

<pre>dynamic_text.php</pre>

```php

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dynamic text</title>
</head>
<body>
    <?php
    $name="James Carter";
    ?>
    <h1>Hello, <?php echo $name; ?></h1>;
</body>
</html>
```

### Comments in PHP

```php
// single line comment

/* multiline comment */
```
