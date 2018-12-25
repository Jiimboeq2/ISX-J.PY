#pragma once

class py_character : public py_lsobject
{
public:
	py_character();
	bool check_collision(const float& to_x, const float& to_y, const float& to_z);
	std::string get_archetype();
	bool get_at_char_select();	
	int get_base_strength();
	float get_breath();
	std::string get_class();
	int get_copper();
	int64_t get_current_health();
	int get_current_power();
	int get_effective_level();	
	float get_exp_bubble();
	int get_exp_current();
	float get_exp_debt_current();
	int get_exp_next_level();
	float get_exp_percent();
	std::string get_gender();
	int get_gold();
	float get_heading();
	int get_health_regen();
	bool get_in_game_world();
	bool get_is_moving();
	int get_level();
	int get_max_conc();
	int64_t get_max_health();	
	int get_max_power();
	int get_maintained(boost::python::list& maintained_list);
	std::string get_name();	
	int get_power_regen();
	int get_platinum();
	std::string get_race();
	int get_silver();
	std::string get_subclass();
	int get_strength();
	std::string get_ts_archetype();
	std::string get_ts_class();
	int get_ts_level();
	std::string get_ts_subclass();
	float get_ts_vitality();
	float get_ts_vitality_lower_marker();
	float get_ts_vitality_upper_marker();
	float get_ts_vitality_overflow_marker();
	int get_used_conc();
	float get_vitality();
	float get_vitality_lower_marker();
	float get_vitality_overflow_marker();
	float get_vitality_upper_marker();
	float get_water_depth();
	float get_x();
	float get_y();
	float get_z();
	float heading_to(const float& to_x, const float& to_y, const float& to_z);
	std::string heading_to_as_compass_bearing(const float& to_x, const float& to_y, const float& to_z);
	int query_effects(boost::python::list& effect_list, const std::string& query = std::string());
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(query_effects_overloads, query_effects, 1, 2)
};