TExecFunc arrow_ascii() { return MakeIndirectExec<true, true>(&ascii); }
TExecFunc arrow_btrim() { return MakeIndirectExec<true, false>(&btrim); }
TExecFunc arrow_btrim1() { return MakeIndirectExec<true, false>(&btrim1); }
TExecFunc arrow_bytealike() { return MakeIndirectExec<true, true>(&bytealike); }
TExecFunc arrow_bytealtrim() { return MakeIndirectExec<true, false>(&bytealtrim); }
TExecFunc arrow_byteanlike() { return MakeIndirectExec<true, true>(&byteanlike); }
TExecFunc arrow_byteartrim() { return MakeIndirectExec<true, false>(&byteartrim); }
TExecFunc arrow_byteatrim() { return MakeIndirectExec<true, false>(&byteatrim); }
TExecFunc arrow_chr() { return MakeIndirectExec<true, false>(&chr); }
TExecFunc arrow_format_type() { return MakeIndirectExec<false, false>(&format_type); }
TExecFunc arrow_hashchar() { return MakeIndirectExec<true, true>(&hashchar); }
TExecFunc arrow_hashcharextended() { return MakeIndirectExec<true, true>(&hashcharextended); }
TExecFunc arrow_hashenum() { return MakeIndirectExec<true, true>(&hashenum); }
TExecFunc arrow_hashenumextended() { return MakeIndirectExec<true, true>(&hashenumextended); }
TExecFunc arrow_hashfloat4() { return MakeIndirectExec<true, true>(&hashfloat4); }
TExecFunc arrow_hashfloat4extended() { return MakeIndirectExec<true, true>(&hashfloat4extended); }
TExecFunc arrow_hashfloat8() { return MakeIndirectExec<true, true>(&hashfloat8); }
TExecFunc arrow_hashfloat8extended() { return MakeIndirectExec<true, true>(&hashfloat8extended); }
TExecFunc arrow_hashint2() { return MakeIndirectExec<true, true>(&hashint2); }
TExecFunc arrow_hashint2extended() { return MakeIndirectExec<true, true>(&hashint2extended); }
TExecFunc arrow_hashint4() { return MakeIndirectExec<true, true>(&hashint4); }
TExecFunc arrow_hashint4extended() { return MakeIndirectExec<true, true>(&hashint4extended); }
TExecFunc arrow_hashint8() { return MakeIndirectExec<true, true>(&hashint8); }
TExecFunc arrow_hashint8extended() { return MakeIndirectExec<true, true>(&hashint8extended); }
TExecFunc arrow_hashname() { return MakeIndirectExec<true, true>(&hashname); }
TExecFunc arrow_hashnameextended() { return MakeIndirectExec<true, true>(&hashnameextended); }
TExecFunc arrow_hashoid() { return MakeIndirectExec<true, true>(&hashoid); }
TExecFunc arrow_hashoidextended() { return MakeIndirectExec<true, true>(&hashoidextended); }
TExecFunc arrow_hashoidvector() { return MakeIndirectExec<true, true>(&hashoidvector); }
TExecFunc arrow_hashoidvectorextended() { return MakeIndirectExec<true, true>(&hashoidvectorextended); }
TExecFunc arrow_hashtext() { return MakeIndirectExec<true, true>(&hashtext); }
TExecFunc arrow_hashtextextended() { return MakeIndirectExec<true, true>(&hashtextextended); }
TExecFunc arrow_hashvarlena() { return MakeIndirectExec<true, true>(&hashvarlena); }
TExecFunc arrow_hashvarlenaextended() { return MakeIndirectExec<true, true>(&hashvarlenaextended); }
TExecFunc arrow_initcap() { return MakeIndirectExec<true, false>(&initcap); }
TExecFunc arrow_json_array_element() { return MakeIndirectExec<true, false>(&json_array_element); }
TExecFunc arrow_json_array_element_text() { return MakeIndirectExec<true, false>(&json_array_element_text); }
TExecFunc arrow_json_array_length() { return MakeIndirectExec<true, true>(&json_array_length); }
TExecFunc arrow_json_object_field() { return MakeIndirectExec<true, false>(&json_object_field); }
TExecFunc arrow_json_object_field_text() { return MakeIndirectExec<true, false>(&json_object_field_text); }
TExecFunc arrow_json_populate_record() { return MakeIndirectExec<false, true>(&json_populate_record); }
TExecFunc arrow_json_strip_nulls() { return MakeIndirectExec<true, false>(&json_strip_nulls); }
TExecFunc arrow_json_to_record() { return MakeIndirectExec<true, false>(&json_to_record); }
TExecFunc arrow_jsonb_array_element() { return MakeIndirectExec<true, false>(&jsonb_array_element); }
TExecFunc arrow_jsonb_array_element_text() { return MakeIndirectExec<true, false>(&jsonb_array_element_text); }
TExecFunc arrow_jsonb_array_length() { return MakeIndirectExec<true, true>(&jsonb_array_length); }
TExecFunc arrow_jsonb_concat() { return MakeIndirectExec<true, false>(&jsonb_concat); }
TExecFunc arrow_jsonb_delete() { return MakeIndirectExec<true, false>(&jsonb_delete); }
TExecFunc arrow_jsonb_delete_idx() { return MakeIndirectExec<true, false>(&jsonb_delete_idx); }
TExecFunc arrow_jsonb_delete_path() { return MakeIndirectExec<true, false>(&jsonb_delete_path); }
TExecFunc arrow_jsonb_insert() { return MakeIndirectExec<true, false>(&jsonb_insert); }
TExecFunc arrow_jsonb_object_field() { return MakeIndirectExec<true, false>(&jsonb_object_field); }
TExecFunc arrow_jsonb_object_field_text() { return MakeIndirectExec<true, false>(&jsonb_object_field_text); }
TExecFunc arrow_jsonb_populate_record() { return MakeIndirectExec<false, true>(&jsonb_populate_record); }
TExecFunc arrow_jsonb_pretty() { return MakeIndirectExec<true, false>(&jsonb_pretty); }
TExecFunc arrow_jsonb_set() { return MakeIndirectExec<true, false>(&jsonb_set); }
TExecFunc arrow_jsonb_set_lax() { return MakeIndirectExec<false, false>(&jsonb_set_lax); }
TExecFunc arrow_jsonb_strip_nulls() { return MakeIndirectExec<true, false>(&jsonb_strip_nulls); }
TExecFunc arrow_jsonb_subscript_handler() { return MakeIndirectExec<true, true>(&jsonb_subscript_handler); }
TExecFunc arrow_jsonb_to_record() { return MakeIndirectExec<true, false>(&jsonb_to_record); }
TExecFunc arrow_like_escape() { return MakeIndirectExec<true, false>(&like_escape); }
TExecFunc arrow_like_escape_bytea() { return MakeIndirectExec<true, false>(&like_escape_bytea); }
TExecFunc arrow_lower() { return MakeIndirectExec<true, false>(&lower); }
TExecFunc arrow_lpad() { return MakeIndirectExec<true, false>(&lpad); }
TExecFunc arrow_ltrim() { return MakeIndirectExec<true, false>(&ltrim); }
TExecFunc arrow_ltrim1() { return MakeIndirectExec<true, false>(&ltrim1); }
TExecFunc arrow_nameiclike() { return MakeIndirectExec<true, true>(&nameiclike); }
TExecFunc arrow_nameicnlike() { return MakeIndirectExec<true, true>(&nameicnlike); }
TExecFunc arrow_nameicregexeq() { return MakeIndirectExec<true, true>(&nameicregexeq); }
TExecFunc arrow_nameicregexne() { return MakeIndirectExec<true, true>(&nameicregexne); }
TExecFunc arrow_namelike() { return MakeIndirectExec<true, true>(&namelike); }
TExecFunc arrow_namenlike() { return MakeIndirectExec<true, true>(&namenlike); }
TExecFunc arrow_nameregexeq() { return MakeIndirectExec<true, true>(&nameregexeq); }
TExecFunc arrow_nameregexne() { return MakeIndirectExec<true, true>(&nameregexne); }
TExecFunc arrow_oidvectortypes() { return MakeIndirectExec<true, false>(&oidvectortypes); }
TExecFunc arrow_pg_ndistinct_in() { return MakeIndirectExec<true, false>(&pg_ndistinct_in); }
TExecFunc arrow_pg_ndistinct_out() { return MakeIndirectExec<true, false>(&pg_ndistinct_out); }
TExecFunc arrow_pg_ndistinct_recv() { return MakeIndirectExec<true, false>(&pg_ndistinct_recv); }
TExecFunc arrow_pg_ndistinct_send() { return MakeIndirectExec<true, false>(&pg_ndistinct_send); }
TExecFunc arrow_pg_nextoid() { return MakeIndirectExec<true, true>(&pg_nextoid); }
TExecFunc arrow_pg_replication_origin_advance() { return MakeIndirectExec<true, true>(&pg_replication_origin_advance); }
TExecFunc arrow_pg_replication_origin_create() { return MakeIndirectExec<true, true>(&pg_replication_origin_create); }
TExecFunc arrow_pg_replication_origin_drop() { return MakeIndirectExec<true, true>(&pg_replication_origin_drop); }
TExecFunc arrow_pg_replication_origin_oid() { return MakeIndirectExec<true, true>(&pg_replication_origin_oid); }
TExecFunc arrow_pg_replication_origin_progress() { return MakeIndirectExec<true, true>(&pg_replication_origin_progress); }
TExecFunc arrow_pg_replication_origin_session_is_setup() { return MakeIndirectExec<true, true>(&pg_replication_origin_session_is_setup); }
TExecFunc arrow_pg_replication_origin_session_progress() { return MakeIndirectExec<true, true>(&pg_replication_origin_session_progress); }
TExecFunc arrow_pg_replication_origin_session_reset() { return MakeIndirectExec<true, true>(&pg_replication_origin_session_reset); }
TExecFunc arrow_pg_replication_origin_session_setup() { return MakeIndirectExec<true, true>(&pg_replication_origin_session_setup); }
TExecFunc arrow_pg_replication_origin_xact_reset() { return MakeIndirectExec<true, true>(&pg_replication_origin_xact_reset); }
TExecFunc arrow_pg_replication_origin_xact_setup() { return MakeIndirectExec<true, true>(&pg_replication_origin_xact_setup); }
TExecFunc arrow_pgsql_version() { return MakeIndirectExec<true, false>(&pgsql_version); }
TExecFunc arrow_regexp_match() { return MakeIndirectExec<true, false>(&regexp_match); }
TExecFunc arrow_regexp_match_no_flags() { return MakeIndirectExec<true, false>(&regexp_match_no_flags); }
TExecFunc arrow_regexp_split_to_array() { return MakeIndirectExec<true, false>(&regexp_split_to_array); }
TExecFunc arrow_regexp_split_to_array_no_flags() { return MakeIndirectExec<true, false>(&regexp_split_to_array_no_flags); }
TExecFunc arrow_repeat() { return MakeIndirectExec<true, false>(&repeat); }
TExecFunc arrow_rpad() { return MakeIndirectExec<true, false>(&rpad); }
TExecFunc arrow_rtrim() { return MakeIndirectExec<true, false>(&rtrim); }
TExecFunc arrow_rtrim1() { return MakeIndirectExec<true, false>(&rtrim1); }
TExecFunc arrow_similar_escape() { return MakeIndirectExec<false, false>(&similar_escape); }
TExecFunc arrow_similar_to_escape_1() { return MakeIndirectExec<true, false>(&similar_to_escape_1); }
TExecFunc arrow_similar_to_escape_2() { return MakeIndirectExec<true, false>(&similar_to_escape_2); }
TExecFunc arrow_texticlike() { return MakeIndirectExec<true, true>(&texticlike); }
TExecFunc arrow_texticnlike() { return MakeIndirectExec<true, true>(&texticnlike); }
TExecFunc arrow_texticregexeq() { return MakeIndirectExec<true, true>(&texticregexeq); }
TExecFunc arrow_texticregexne() { return MakeIndirectExec<true, true>(&texticregexne); }
TExecFunc arrow_textlike() { return MakeIndirectExec<true, true>(&textlike); }
TExecFunc arrow_textnlike() { return MakeIndirectExec<true, true>(&textnlike); }
TExecFunc arrow_textregexeq() { return MakeIndirectExec<true, true>(&textregexeq); }
TExecFunc arrow_textregexne() { return MakeIndirectExec<true, true>(&textregexne); }
TExecFunc arrow_textregexreplace() { return MakeIndirectExec<true, false>(&textregexreplace); }
TExecFunc arrow_textregexreplace_noopt() { return MakeIndirectExec<true, false>(&textregexreplace_noopt); }
TExecFunc arrow_textregexsubstr() { return MakeIndirectExec<true, false>(&textregexsubstr); }
TExecFunc arrow_translate() { return MakeIndirectExec<true, false>(&translate); }
TExecFunc arrow_upper() { return MakeIndirectExec<true, false>(&upper); }