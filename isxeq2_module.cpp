#include "ISXPyPCH.h"
#include "ISXPy.h"

BOOST_PYTHON_MODULE(isxeq2)
{
	using namespace boost::python;

	class_<LSOBJECT>("lsobject_base", no_init);

	class_<py_lsobject>("lsobject", init<const LSOBJECT&>())
		.add_property("to_bool", &py_lsobject::get_bool_from_lso)
		.add_property("to_byte", &py_lsobject::get_byte_from_lso)
		.add_property("to_float", &py_lsobject::get_float_from_lso)
		.add_property("to_int", &py_lsobject::get_int_from_lso)
		.add_property("to_int64", &py_lsobject::get_int64_from_lso)
		.add_property("to_string", &py_lsobject::get_string_from_lso)
		.add_property("to_uint", &py_lsobject::get_uint_from_lso)
		.def("to_lso", &py_lsobject::get_lso, return_value_policy<reference_existing_object>());

	class_<py_eq2, bases<py_lsobject>>("eq2")
		.def("accept_pending_quests", &py_eq2::accept_pending_quest)
		.def("check_collision", &py_eq2::check_collision)
		.def("confirm_zone_teleporter_destination", &py_eq2::confirm_zone_teleporter_destination)
		.def("decline_pending_quest", &py_eq2::decline_pending_quest)
		.def("get_persistent_zones", &py_eq2::get_persistent_zones)
		.def("heading_to", &py_eq2::heading_to)
		.add_property("ho_current_wheel_slot", &py_eq2::get_ho_current_wheel_slot)
		.add_property("ho_description", &py_eq2::get_ho_description)
		.add_property("ho_icon_id_1", &py_eq2::get_ho_icon_id_1)
		.add_property("ho_icon_id_2", &py_eq2::get_ho_icon_id_2)
		.add_property("ho_icon_id_3", &py_eq2::get_ho_icon_id_3)
		.add_property("ho_icon_id_4", &py_eq2::get_ho_icon_id_4)
		.add_property("ho_icon_id_5", &py_eq2::get_ho_icon_id_5)
		.add_property("ho_icon_id_6", &py_eq2::get_ho_icon_id_6)
		.add_property("ho_last_manipulator", &py_eq2::get_ho_last_manipulator)
		.add_property("ho_name", &py_eq2::get_ho_name)
		.add_property("ho_time_elapsed", &py_eq2::get_ho_time_elapsed)
		.add_property("ho_time_limit", &py_eq2::get_ho_time_limit)
		.add_property("ho_time_remaining", &py_eq2::get_ho_time_remaining)
		.add_property("ho_wheel_state", &py_eq2::get_ho_wheel_state)
		.add_property("ho_wheel_type", &py_eq2::get_ho_wheel_type)
		.add_property("ho_window_active", &py_eq2::get_ho_window_active)
		.add_property("ho_window_state", &py_eq2::get_ho_window_state)
		.add_property("inbox_mail_count", &py_eq2::get_inbox_mail_count)
		.add_property("master_volume", &py_eq2::get_master_volume, &py_eq2::set_master_volume)
		.add_property("num_radars", &py_eq2::get_num_radars)
		.add_property("on_battleground", &py_eq2::get_on_battleground)
		.add_property("pending_quest_description", &py_eq2::get_pending_quest_description)
		.add_property("pending_quest_name", &py_eq2::get_pending_quest_name)
		.def("persistent_zone_id", &py_eq2::persistent_zone_id)
		.add_property("ready_to_refine_transmute_or_salvage", &py_eq2::get_ready_to_refine_transmute_or_salvage)
		.add_property("server_name", &py_eq2::get_server_name)
		.def("toggle_show_all_on_screen_announcements", &py_eq2::toggle_show_all_on_screen_announcements)
		.def("query_actors", &py_eq2::query_actors, py_eq2::query_actors_overloads(args("actor_list", "query")))
		.add_property("zoning", &py_eq2::get_zoning);

	class_<py_eq2_actor, bases<py_lsobject>>("actor")
		.def(init<const int&>())
		.def(init<const std::string&>())
		.def(init<const LSOBJECT&>())
		.add_property("aura", &py_eq2_actor::get_aura)
		.add_property("can_turn", &py_eq2_actor::get_can_turn)
		.add_property("char_class", &py_eq2_actor::get_class)
		.def("check_collision", &py_eq2_actor::check_collision, py_eq2_actor::check_collision_overloads(args("to_x", "to_y", "to_z")))
		.add_property("collision_radius", &py_eq2_actor::get_collision_radius)
		.add_property("collision_scale", &py_eq2_actor::get_collision_scale)
		.def("con_color", &py_eq2_actor::get_con_color, py_eq2_actor::get_con_color_overloads(args("as_rgb")))
		.add_property("current_animation", &py_eq2_actor::get_current_animation)
		.add_property("difficulty", &py_eq2_actor::get_difficulty)
		.add_property("distance", &py_eq2_actor::get_distance)
		.add_property("distance2d", &py_eq2_actor::get_distance2d)
		.add_property("effective_level", &py_eq2_actor::get_effective_level)
		.add_property("encounter_size", &py_eq2_actor::get_encounter_size)
		.add_property("faction", &py_eq2_actor::get_faction)
		.add_property("faction_standing", &py_eq2_actor::get_faction_standing)
		.add_property("flying_using_mount", &py_eq2_actor::get_flying_using_mount)
		.add_property("gender", &py_eq2_actor::get_gender)
		.add_property("guild", &py_eq2_actor::get_guild)
		.add_property("heading", &py_eq2_actor::get_heading)
		.def("heading_to", &py_eq2_actor::get_heading_to)
		.add_property("heading_to_as_compass_bearing", &py_eq2_actor::get_heading_to_as_compass_bearing)
		.add_property("id", &py_eq2_actor::get_id)
		.add_property("in_combat_mode", &py_eq2_actor::get_in_combat_mode)
		.add_property("in_my_group", &py_eq2_actor::get_in_my_group)
		.add_property("interactable", &py_eq2_actor::get_interactable)
		.add_property("is_afk", &py_eq2_actor::get_is_afk)
		.add_property("is_aggro", &py_eq2_actor::get_is_aggro)
		.add_property("is_a_pet", &py_eq2_actor::get_is_a_pet)
		.add_property("is_backing_up", &py_eq2_actor::get_is_backing_up)
		.add_property("is_banker", &py_eq2_actor::get_is_banker)
		.add_property("is_camping", &py_eq2_actor::get_is_camping)
		.add_property("is_chest", &py_eq2_actor::get_is_chest)
		.add_property("is_climbing", &py_eq2_actor::get_is_climbing)
		.add_property("is_crouching", &py_eq2_actor::get_is_crouching)
		.add_property("is_dead", &py_eq2_actor::get_is_dead)
		.add_property("is_encounter_broken", &py_eq2_actor::get_is_encounter_broken)
		.add_property("is_epic", &py_eq2_actor::get_is_epic)
		.add_property("is_falling", &py_eq2_actor::get_is_falling)
		.add_property("is_fd", &py_eq2_actor::get_is_fd)
		.add_property("is_heroic", &py_eq2_actor::get_is_heroic)
		.add_property("is_idle", &py_eq2_actor::get_is_idle)
		.def("is_in_same_encounter", &py_eq2_actor::get_is_in_same_encounter)
		.add_property("is_invis", &py_eq2_actor::get_is_invis)
		.add_property("is_jumping", &py_eq2_actor::get_is_jumping)
		.add_property("is_lfg", &py_eq2_actor::get_is_lfg)
		.add_property("is_lfw", &py_eq2_actor::get_is_lfw)
		.add_property("is_linkdead", &py_eq2_actor::get_is_linkdead)
		.add_property("is_locked", &py_eq2_actor::get_is_locked)
		.add_property("is_merchant", &py_eq2_actor::get_is_merchant)
		.add_property("is_my_pet", &py_eq2_actor::get_is_my_pet)
		.add_property("is_named", &py_eq2_actor::get_is_named)
		.add_property("is_on_carpet", &py_eq2_actor::get_is_on_carpet)
		.add_property("is_on_griffin", &py_eq2_actor::get_is_on_griffin)
		.add_property("is_on_horse", &py_eq2_actor::get_is_on_horse)
		.add_property("is_rooted", &py_eq2_actor::get_is_rooted)
		.add_property("is_sitting", &py_eq2_actor::get_is_sitting)
		.add_property("is_solo", &py_eq2_actor::get_is_solo)
		.add_property("is_stealthed", &py_eq2_actor::get_is_invis)
		.add_property("is_strafing_left", &py_eq2_actor::get_is_strafing_left)
		.add_property("is_strafing_right", &py_eq2_actor::get_is_strafing_right)
		.add_property("is_swimming", &py_eq2_actor::get_is_swimming)
		.add_property("health", &py_eq2_actor::get_health)
		.add_property("last_name", &py_eq2_actor::get_last_name)
		.add_property("level", &py_eq2_actor::get_level)
		.add_property("loc", &py_eq2_actor::get_loc)
		.add_property("mood", &py_eq2_actor::get_mood)
		.add_property("name", &py_eq2_actor::get_name)
		.add_property("get_num_effects", &py_eq2_actor::get_num_effects)
		.add_property("on_flying_mount", &py_eq2_actor::get_on_flying_mount)
		.add_property("pet", &py_eq2_actor::get_pet)
		.add_property("power", &py_eq2_actor::get_power)
		.add_property("race", &py_eq2_actor::get_race)
		.add_property("raid_size", &py_eq2_actor::get_raid_size)
		.add_property("speed", &py_eq2_actor::get_speed)
		.add_property("suffix_title", &py_eq2_actor::get_suffix_title)
		.add_property("swimming_speed_mod", &py_eq2_actor::get_swimming_speed_mod)
		.add_property("tag_target_icon", &py_eq2_actor::get_tag_target_icon)
		.add_property("tag_target_number", &py_eq2_actor::get_tag_target_number)
		.add_property("target", &py_eq2_actor::get_target)
		.add_property("target_ring_radius", &py_eq2_actor::get_target_ring_radius)
		.add_property("threat_to_me", &py_eq2_actor::get_threat_to_me)
		.add_property("threat_to_next", &py_eq2_actor::get_threat_to_next)
		.add_property("threat_to_pet", &py_eq2_actor::get_threat_to_pet)
		.add_property("tint_flags", &py_eq2_actor::get_tint_flags)
		.add_property("type", &py_eq2_actor::get_type)
		.add_property("velocity", &py_eq2_actor::get_velocity)
		.add_property("visual_variant", &py_eq2_actor::get_visual_variant)
		.add_property("who_following", &py_eq2_actor::get_who_following)
		.add_property("who_following_id", &py_eq2_actor::get_who_following_id)
		.add_property("x", &py_eq2_actor::get_x)
		.add_property("y", &py_eq2_actor::get_y)
		.add_property("z", &py_eq2_actor::get_z)
		.def("get_effects", &py_eq2_actor::get_effects)
		.def("double_click", &py_eq2_actor::double_click)
		.def("waypoint_to", &py_eq2_actor::waypoint_to)
		.def("do_face", &py_eq2_actor::do_face)
		.def("do_target", &py_eq2_actor::do_target)
		.def("location", &py_eq2_actor::location, py_eq2_actor::location_overloads(args("add_location", "notes")))
		.def("get_actor", &py_eq2_actor::from_id)
		.def("get_actor", &py_eq2_actor::from_query);

	class_<py_eq2_actor_effect, bases<py_lsobject>>("actor_effect", init<const LSOBJECT&>())
		.add_property("back_drop_icon_id", &py_eq2_actor_effect::get_back_drop_icon_id)
		.add_property("current_increments", &py_eq2_actor_effect::get_current_increments)
		.add_property("is_effect_info_available", &py_eq2_actor_effect::get_is_effect_info_available)
		.add_property("main_icon_id", &py_eq2_actor_effect::get_main_icon_id)
		.add_property("effect_info", &py_eq2_actor_effect::get_effect_info)
		.add_property("id", &py_eq2_actor_effect::get_id);

	class_<py_eq2_character, bases<py_eq2_actor>>("character")
		.add_property("agility", &py_eq2_character::get_agility)
		.add_property("arcane_resist", &py_eq2_character::get_arcane_resist)
		.add_property("arcane_resist_percent", &py_eq2_character::get_arcane_resist_percent)
		.add_property("archetype", &py_eq2_character::get_archetype)
		.add_property("ascension_exp_bubble", &py_eq2_character::get_ascension_exp_bubble)
		.add_property("ascension_exp_current", &py_eq2_character::get_ascension_exp_current)
		.add_property("ascension_exp_next_level", &py_eq2_character::get_ascension_exp_next_level)
		.add_property("ascension_exp_percent", &py_eq2_character::get_ascension_exp_percent)
		.add_property("ascension_level", &py_eq2_character::get_ascension_level)
		.add_property("at_char_select", &py_eq2_character::get_at_char_select)
		.add_property("base_agility", &py_eq2_character::get_base_agility)
		.add_property("base_intelligence", &py_eq2_character::get_base_intelligence)
		.add_property("base_stamina", &py_eq2_character::get_base_stamina)
		.add_property("base_strength", &py_eq2_character::get_base_strength)
		.add_property("base_wisdom", &py_eq2_character::get_base_wisdom)
		.add_property("breath", &py_eq2_character::get_breath)
		.def("check_collision", &py_eq2_character::check_collision)
		.add_property("copper", &py_eq2_character::get_copper)
		.add_property("count_maintained", &py_eq2_character::get_count_maintained)
		.add_property("current_health", &py_eq2_character::get_current_health)
		.add_property("current_power", &py_eq2_character::get_current_power)
		.add_property("dissipation", &py_eq2_character::get_dissipation)
		.add_property("dissonance", &py_eq2_character::get_dissonance)
		.add_property("dissonance_remaining", &py_eq2_character::get_dissonance_remaining)
		.add_property("elemental_resist", &py_eq2_character::get_elemental_resist)
		.add_property("elemental_resist_percent", &py_eq2_character::get_elemental_resist_percent)
		.add_property("exp_bubble", &py_eq2_character::get_exp_bubble)
		.add_property("exp_current", &py_eq2_character::get_exp_current)
		.add_property("exp_debt_current", &py_eq2_character::get_exp_debt_current)
		.add_property("exp_next_level", &py_eq2_character::get_exp_next_level)
		.add_property("exp_percent", &py_eq2_character::get_exp_percent)
		.add_property("gold", &py_eq2_character::get_gold)
		.add_property("grouped", &py_eq2_character::get_grouped)
		.add_property("group_count", &py_eq2_character::get_group_count)
		.add_property("health_regen", &py_eq2_character::get_health_regen)
		.add_property("is_auto_attack_on", &py_eq2_character::get_is_auto_attack_on)
		.add_property("is_casting_spell", &py_eq2_character::get_is_casting_spell)
		.add_property("in_game_world", &py_eq2_character::get_in_game_world)
		.add_property("is_in_combat", &py_eq2_character::get_is_in_combat)
		.add_property("is_in_first_person_view", &py_eq2_character::get_is_in_first_person_view)
		.add_property("is_in_pvp", &py_eq2_character::get_is_in_pvp)
		.add_property("is_in_raid", &py_eq2_character::get_is_in_raid)
		.add_property("is_in_third_person_view", &py_eq2_character::get_is_in_third_person_view)
		.add_property("is_in_water", &py_eq2_character::get_is_in_water)
		.add_property("is_ranged_auto_attack_on", &py_eq2_character::get_is_ranged_auto_attack_on)
		.add_property("intelligence", &py_eq2_character::get_intelligence)
		.add_property("is_group_leader", &py_eq2_character::get_is_group_leader)
		.add_property("is_hated", &py_eq2_character::get_is_hated)
		.add_property("is_moving", &py_eq2_character::get_is_moving)
		.def("Maintained", &py_eq2_character::maintained_1)
		.def("Maintained", &py_eq2_character::maintained_2)
		.add_property("max_conc", &py_eq2_character::get_max_conc)
		.add_property("max_dissonance", &py_eq2_character::get_max_dissonance)
		.add_property("max_health", &py_eq2_character::get_max_health)
		.add_property("max_power", &py_eq2_character::get_max_power)
		.add_property("noxious_resist", &py_eq2_character::get_noxious_resist)
		.add_property("noxious_resist_percent", &py_eq2_character::get_noxious_resist_percent)
		.add_property("platinum", &py_eq2_character::get_platinum)
		.add_property("power_regen", &py_eq2_character::get_power_regen)
		.add_property("raid_count", &py_eq2_character::get_raid_count)
		.add_property("raid_group_num", &py_eq2_character::get_raid_group_num)
		.add_property("silver", &py_eq2_character::get_silver)
		.add_property("stamina", &py_eq2_character::get_stamina)
		.add_property("strength", &py_eq2_character::get_strength)
		.add_property("subclass", &py_eq2_character::get_subclass)
		.add_property("tithe_exp_bubble", &py_eq2_character::get_tithe_exp_bubble)
		.add_property("tithe_exp_current", &py_eq2_character::get_tithe_exp_current)
		.add_property("tithe_exp_next_level", &py_eq2_character::get_tithe_exp_next_level)
		.add_property("tithe_exp_percent", &py_eq2_character::get_tithe_exp_percent)
		.add_property("tithe_vitality_overflow_marker", &py_eq2_character::get_tithe_vitality_overflow_marker)
		.add_property("ts_archetype", &py_eq2_character::get_ts_archetype)
		.add_property("ts_class", &py_eq2_character::get_ts_class)
		.add_property("ts_exp_bubble", &py_eq2_character::get_ts_exp_bubble)
		.add_property("ts_exp_current", &py_eq2_character::get_ts_exp_current)
		.add_property("ts_exp_debt_current", &py_eq2_character::get_ts_exp_debt_current)
		.add_property("ts_exp_next_level", &py_eq2_character::get_ts_exp_next_level)
		.add_property("ts_exp_percent", &py_eq2_character::get_ts_exp_percent)
		.add_property("ts_level", &py_eq2_character::get_ts_level)
		.add_property("ts_subclass", &py_eq2_character::get_ts_subclass)
		.add_property("ts_vitality", &py_eq2_character::get_ts_vitality)
		.add_property("ts_vitality_lower_marker", &py_eq2_character::get_ts_vitality_lower_marker)
		.add_property("ts_vitality_overflow_marker", &py_eq2_character::get_ts_vitality_overflow_marker)
		.add_property("ts_vitality_upper_marker", &py_eq2_character::get_ts_vitality_upper_marker)
		.add_property("used_conc", &py_eq2_character::get_used_conc)
		.add_property("vitality", &py_eq2_character::get_vitality)
		.add_property("vitality_lower_marker", &py_eq2_character::get_vitality_lower_marker)
		.add_property("vitality_overflow_marker", &py_eq2_character::get_vitality_overflow_marker)
		.add_property("vitality_upper_marker", &py_eq2_character::get_vitality_upper_marker)
		.add_property("water_depth", &py_eq2_character::get_water_depth)
		.add_property("wisdom", &py_eq2_character::get_wisdom)
		.def("query_effects", &py_eq2_character::query_effects, py_eq2_character::query_effects_overloads(args("effect_list", "query")))
		.def("query_inventory", &py_eq2_character::query_inventory, py_eq2_character::query_inventory_overloads(args("item_list", "query")))
		.def("query_recipes", &py_eq2_character::query_recipes, py_eq2_character::query_recipes_overloads(args("recipe_list", "query")))
		.def("get_maintained", &py_eq2_character::get_maintained)
		.def("heading_to", &py_eq2_character::get_heading_to)
		.def("heading_to_as_compass_bearing", &py_eq2_character::get_heading_to_as_compass_bearing)
		.def("get_group", &py_eq2_character::get_group)
		.def("get_group_member", &py_eq2_character::get_group_member_1)
		.def("get_group_member", &py_eq2_character::get_group_member_2)
		.def("get_raid", &py_eq2_character::get_raid)
		.def("get_raid_member", &py_eq2_character::get_raid_member_1)
		.def("get_raid_member", &py_eq2_character::get_raid_member_2)
		.def("get_raid_member", &py_eq2_character::get_raid_member_3);

	class_<py_eq2_dynamic_data, bases<py_lsobject>>("dynamic_data", init<const LSOBJECT&>())
		.add_property("label", &py_eq2_dynamic_data::get_label)
		.add_property("percent", &py_eq2_dynamic_data::get_percent);

	class_<py_eq2_effect, bases<py_lsobject>>("effect", init<const LSOBJECT&>())
		.add_property("back_drop_icon_id", &py_eq2_effect::get_back_drop_icon_id)
		.add_property("current_increments", &py_eq2_effect::get_current_increments)
		.add_property("duration", &py_eq2_effect::get_duration)
		.add_property("effect_info", &py_eq2_effect::get_effect_info)
		.add_property("id", &py_eq2_effect::get_id)
		.add_property("is_effect_info_available", &py_eq2_effect::get_is_effect_info_available)
		.add_property("main_icon_id", &py_eq2_effect::get_main_icon_id)
		.add_property("max_duration", &py_eq2_effect::get_max_duration);

	class_<py_eq2_effect_info, bases<py_lsobject>>("effect_info", init<const LSOBJECT&>())
		.add_property("description", &py_eq2_effect_info::get_description)
		.add_property("name", &py_eq2_effect_info::get_name)
		.add_property("type", &py_eq2_effect_info::get_type);

	class_<py_eq2_group_member, bases<py_eq2_actor>>("group_member")
		.add_property("arcane", &py_eq2_group_member::get_arcane)
		.add_property("current_health", &py_eq2_group_member::get_current_health)
		.add_property("current_power", &py_eq2_group_member::get_current_power)
		.add_property("cursed", &py_eq2_group_member::get_cursed)
		.add_property("elemental", &py_eq2_group_member::get_elemental)
		.add_property("max_health", &py_eq2_group_member::get_max_health)
		.add_property("max_power", &py_eq2_group_member::get_max_power)
		.add_property("noxious", &py_eq2_group_member::get_noxious)
		.add_property("in_zone", &py_eq2_group_member::get_in_zone)
		.add_property("is_afflicted", &py_eq2_group_member::get_is_afflicted)
		.add_property("pet_id", &py_eq2_group_member::get_pet_id)
		.add_property("raid_group_num", &py_eq2_group_member::get_raid_group_num)
		.add_property("raid_role", &py_eq2_group_member::get_raid_role)
		.add_property("trauma", &py_eq2_group_member::get_trauma)
		.add_property("zone_name", &py_eq2_group_member::get_zone_name);

	class_<py_eq2_item, bases<py_lsobject>>("item")
		.add_property("name", &py_eq2_item::get_name);

	class_<py_eq2_maintained, bases<py_lsobject>>("maintained")
		.add_property("concentration_cost", &py_eq2_maintained::get_concentration_cost)
		.add_property("current_increments", &py_eq2_maintained::get_current_increments)
		.add_property("damage_remaining", &py_eq2_maintained::get_damage_remaining)
		.add_property("duration", &py_eq2_maintained::get_duration)
		.add_property("is_beneficial", &py_eq2_maintained::get_is_beneficial)
		.add_property("max_duration", &py_eq2_maintained::get_max_duration)
		.add_property("name", &py_eq2_maintained::get_name)
		.add_property("target", &py_eq2_maintained::get_target)
		.add_property("target_type", &py_eq2_maintained::get_target_type)
		.add_property("uses_remaining", &py_eq2_maintained::get_uses_remaining);

	class_<py_isxeq2, bases<py_lsobject>>("isxeq2")
		.def("add_loc", &py_isxeq2::add_loc, py_isxeq2::add_loc_overloads(args("label", "notes")))
		.add_property("affliction_events_on", &py_isxeq2::get_affliction_events_on)
		.add_property("api_version", &py_isxeq2::get_api_version)
		.def("clear_abilities_cache", &py_isxeq2::clear_abilities_cache)
		.def("disable_affliction_events", &py_isxeq2::disable_affliction_events)
		.def("disable_custom_zoning_text", &py_isxeq2::disable_custom_zoning_text)
		.def("enable_affliction_events", &py_isxeq2::enable_affliction_events)
		.def("enable_custom_zoning_text", &py_isxeq2::enable_custom_zoning_text)
		.def("eq2locs_count", &py_isxeq2::get_eq2locs_count, py_isxeq2::get_eq2locs_count_overloads(args("all_zones")))
		.add_property("is_ready", &py_isxeq2::get_is_ready)
		.def("is_valid_eq2press_key", &py_isxeq2::get_is_valid_eq2press_key, args("key"))
		.def("popup", &py_isxeq2::popup, py_isxeq2::popup_overloads(args("message", "title", "status")))
		.def("reset_internal_vending_system", &py_isxeq2::reset_internal_vending_system)
		.def("set_actor_events_range", &py_isxeq2::set_actor_events_range, args("range"))
		.def("set_actor_events_time_interval", &py_isxeq2::set_actor_events_time_interval, args("time"))
		.def("set_affliction_events_time_interval", &py_isxeq2::set_affliction_events_time_interval, args("time"))
		.add_property("version", &py_isxeq2::get_version);	

	class_<py_point3_f, bases<py_lsobject>>("point3f")
		.add_property("x", &py_point3_f::get_x)
		.add_property("y", &py_point3_f::get_y)
		.add_property("z", &py_point3_f::get_z)
		.def("xyz", &py_point3_f::get_xyz, py_point3_f::get_xyz_overloads(args("separator")));

	class_<py_eq2_recipe, bases<py_lsobject>>("recipe")
		.add_property("name", &py_eq2_recipe::get_name);

	class_<eq2_actor_despawned_args>("eq2_actor_despawned_args")
		.add_property("id", &eq2_actor_despawned_args::get_id, &eq2_actor_despawned_args::set_id)
		.add_property("name", &eq2_actor_despawned_args::get_name, &eq2_actor_despawned_args::set_name);

	class_<eq2_actor_spawned_args, bases<eq2_actor_despawned_args>>("eq2_actor_spawned_args")
		.add_property("level", &eq2_actor_spawned_args::get_level, &eq2_actor_spawned_args::set_level)
		.add_property("type", &eq2_actor_spawned_args::get_type, &eq2_actor_spawned_args::set_type);

	class_<eq2_on_quest_offered_args>("eq2_on_quest_offered_args")
		.add_property("name", &eq2_on_quest_offered_args::get_name, &eq2_on_quest_offered_args::set_name)
		.add_property("description", &eq2_on_quest_offered_args::get_description, &eq2_on_quest_offered_args::set_description)
		.add_property("level", &eq2_on_quest_offered_args::get_level, &eq2_on_quest_offered_args::set_level)
		.add_property("status_reward", &eq2_on_quest_offered_args::get_status_reward, &eq2_on_quest_offered_args::set_status_reward);
}

void initialize_module_isxeq2()
{
	PyImport_AppendInittab("isxeq2", PyInit_isxeq2);
}

void shutdown_module_isxeq2()
{

}