<?php

/**
 * @file
 * Default rule configurations for rules_block_user.
 */

/**
 * @todo Document this function.
 * @see https://docs.backdropcms.org/doc-standards
 */
function rules_block_user_default_rules_configuration() {
  $user_is_blocked = '{
    "user_has_been_blocked" : {
      "LABEL" : "User account has been blocked",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "rules_block_user" ],
      "ON" : [ "user_was_blocked" ],
      "DO" : [
        { "backdrop_message" : { "message" : "[account:name] has been blocked.", "repeat" : 0 } }
      ]
    }
  }';
  $configs['user_is_blocked'] = rules_import($user_is_blocked);

  $user_is_unblocked = '{
    "user_has_been_unblocked" : {
      "LABEL" : "User account has been unblocked",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "rules_block_user" ],
      "ON" : [ "user_was_unblocked" ],
      "DO" : [
        { "backdrop_message" : { "message" : "[account:name] has been unblocked.", "repeat" : 0 } }
      ]
    }
  }';
  $configs['user_is_unblocked'] = rules_import($user_is_unblocked);

  return $configs;
}
