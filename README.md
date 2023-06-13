Rules Block/Unblock User
========================

Rules Block/Unblock User adds a rule event for when a user account is blocked
 or unblocked. The module adds also two rules with that event.

Requirements
------------

This module requires that the following modules are also enabled:

- [Rules](https://github.com/backdrop-contrib/rules)


Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.


Configuration
-------------

- Visit the Rules configuration page at **Administration > Configuration >
 Workflow > Rules** (`admin/config/workflow/rules`).
- Enable the rule "User account has been blocked" and/or the rule "User account
 has been unblocked".
- Adjust the rule(s) as needed, e.g. add an action to send an email.


Issues
------

Bugs and Feature Requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/rules_block_user/issues.


Current Maintainers
-------------------

- [Olaf Grabienski](https://github.com/olafgrabienski)


Credits
-------

- Ported to Backdrop CMS by [Olaf Grabienski](https://github.com/olafgrabienski).
- Originally written for Drupal by [Oliver Davies](https://github.com/opdavies).


License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
